/*
1. Structure vs Array - Memory Organization
Arrays are contiguous memory blocks of identical types; structures can have mixed types.

Structures may have padding to satisfy alignment requirements, wasting some memory.

Accessing array elements is predictable; structure members need offset calculation due to padding.

2. Effect of Member Order on Padding
struct A { char; int; char; } → likely 12 bytes due to padding after each char.

struct B { int; char; char; } → likely 8 bytes, more compact due to better alignment.

Changing order minimizes padding, making the structure smaller and more memory-efficient.

3. Offset of Structure Member
Use offsetof(struct Info, tag) macro from <stddef.h>.

Useful in serialization, binary protocols, and memory-mapped IO.

Ensures platform-independent access to structure layout.

4. Structure for Linked List/Tree
Uses self-referential pointer: struct Node *next;.

Enables recursive data structures.

Must use pointer, not direct instance (which would be infinitely large).

5. Assigning Structs with Pointers
Only the pointer is copied, not the data it points to (shallow copy).

Both structures now point to the same memory → modifying one affects the other.

Can lead to memory safety issues like double-free or dangling pointer.

6. Flexible Array Member
c
Copy code
struct Packet {
    int length;
    char data[]; // Flexible member
};
Last member must be incomplete type (no size).

Allows struct to be allocated with variable size at runtime.

Must use dynamic allocation (malloc(sizeof(Packet) + data_len)).

7. Pass by Value vs Pointer
By value copies entire struct → no side effects, but slower for large structs.

By pointer allows direct modification and efficient access.

Choose based on performance and side-effect requirements.

8. Avoid Shallow Copy with Pointers
Manually allocate new memory and copy contents (deep copy).

Prevents shared ownership of the same memory.

Ensures safe and independent struct operation.

9. Using typedef with Structs
c
Copy code
typedef struct { int id; char name[10]; } Record;
Record r;
Simplifies syntax.

Enhances readability and API design.

Helps in hiding implementation details.

10. Uninitialized Members
Reading them results in undefined behavior.

May produce garbage values or crashes.

Always initialize before use to ensure correctness.

11. Initializing Nested Structures
c
Copy code
struct Shape s = { {1, 2}, {10, 20, 30, 40} };
Use brace-enclosed lists for nested structs and arrays.

Ensures deterministic values.

Good for static or configuration data.

12. Union in Structure
Union shares memory; size = largest member.

Only one member is valid at a time.

Reduces memory but risks misuse if wrong type accessed.

13. Comparing Structs with Pointers
Pointer comparison only checks address, not data.

Must compare strings/data using strcmp, loops, etc.

Deep comparison needed for meaningful equality.

14. Bit-fields in Structures
c
Copy code
struct Flags { unsigned a:1; unsigned b:3; unsigned c:4; };
Packs multiple values tightly.

Not portable across compilers/platforms due to layout.

Bit access can be slower or limited in manipulation.

15. Recursive Structures
Cannot contain itself directly (infinite size).

Use pointer to self: struct Node *next;.

Enables trees, lists, graphs.
16. Custom malloc() and free().
malloc()/free() using pointer arithmetic
Store the block size and status (free/allocated) as a header before the actual memory block.
Size
Pointer to next block
17.char *p = "hello"; *(p + 5) = '!'; — Why Undefined Behavior?

 trying to modify *(p + 5) 

A write to read-only memory

Undefined behavior, and likely to cause a segmentation fault.

char p[] = "hello"; 
*(p + 5) = '!';      
18. Accessing arr[2][3] Using Only a Pointer
For int arr[3][4];
*(ptr + 2 * 4 + 3);  
2 * 4: skips first 2 rows+ 3: moves to column 3 in row 2

19.You cannot reliably find the size of an array from a pointer alone inside a function, but here are two key points:

Arrays to pointers when passed to functions, so the size information is lost — sizeof(ptr) gives size of pointer, not the array.

16. Serialize Struct with Pointers
Need to serialize pointed data manually.

Can't just write fwrite(&s, sizeof(s), 1, file);.

Requires custom read/write logic to ensure integrity.

17. Packing Pragma
c
Copy code
#pragma pack(1)
Disables padding for tight layout.

Useful in file formats, protocols, hardware access.

May reduce performance due to misalignment.

18. Generic Linked List in C
c
Copy code
struct GNode {
    void *data;
    struct GNode *next;
};
Stores any data via void*.

Requires casting and type safety precautions.

Allows reusable list structures for any data type.

19. sizeof with Bit-fields/Flexible Arrays
Bit-fields count into total size but may waste padding.

Flexible array size is not included in sizeof.

sizeof(struct Flex) gives only fixed part size.

20. Structures for Hardware Registers
c
Copy code
#define REG ((struct HWReg *)0x10000000)
Use volatile to prevent compiler optimization.

Matches physical memory layout.

Wrong access may crash or corrupt hardware.

21. Mimicking Inheritance in C
c
Copy code
struct Dog {
    struct Animal base;
    int barkVolume;
};
Simulates base/derived relationship.

Enables reuse via composition.

Requires manual typecasting or accessor logic.

22. Cross-System Structure Portability
Different compilers may align structs differently.

int sizes can vary (e.g., 32 vs 64-bit).

Use fixed-width types (int32_t, uint16_t) for consistency.

23. Array of Structs with Dynamic Arrays
c
Copy code
struct Block *blocks = malloc(n * sizeof(struct Block));
blocks[i].values = malloc(m * sizeof(int));
Requires careful memory management.

Deep cleanup with nested free() needed.

Supports flexible, scalable data modeling.

24. Returning a Structure
By value: entire structure is copied.

Large structs can hurt performance.

Prefer pointer return for big data or use static buffer carefully.

25. Undefined Behavior with Structures
c
Copy code
struct S *p = malloc(sizeof(struct S));
free(p);
p->x = 5; // UB: accessing freed memory
Using uninitialized or freed members causes UB.

Can corrupt memory or crash the program.

Always initialize and manage lifetime carefully.
*/