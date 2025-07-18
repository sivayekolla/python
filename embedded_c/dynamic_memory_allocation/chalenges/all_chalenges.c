/*
1.Memory keeps increasing despite free

You may have memory leaks due to not freeing all allocations.

Use tools like Valgrind or ASan to identify unfreed memory blocks.

2.Calling free twice on same pointer

Causes undefined behavior, potentially crashing the program.

Set the pointer to NULL after freeing to prevent double-free.

3.Using memory after free (use-after-free)

Leads to undefined behavior or data corruption.

Avoid using the pointer after freeing it; set it to NULL.

4.Safe use of realloc

Store result in a temporary pointer first and check for NULL.

Only assign back to original if realloc succeeded.

5.Heap fragmentation

Occurs when free blocks are scattered and non-contiguous.

Long-running programs allocating/freed various sizes make this worse.

6.Writing outside dynamic array bounds

Causes buffer overflows, corrupts heap, and may crash the program.

Always validate index bounds before writing.

7.Structure ending in flexible array

Use a flexible array member and allocate memory based on full size.

Access the array after the struct by proper pointer arithmetic.

8.malloc vs calloc

malloc does not initialize memory; calloc sets memory to zero.

Use calloc when you need zero-initialized memory.

9.Why free(NULL) is safe

Designed to do nothing, avoiding need for extra checks.

Simplifies cleanup logic without needing if conditions.

10.Forgetting to free memory before exit

On desktops, OS may clean up automatically.

On embedded systems, leaks persist and may cause resource exhaustion.

11.How realloc works internally

It tries to resize in-place, else allocates new block and copies data.

Original memory is freed if a new block is returned.

12.Finding memory leaks

Use tools like Valgrind, AddressSanitizer, or Dr. Memory.

Track allocations and frees manually in debug builds.

13.Misaligned memory issues

Can cause crashes or performance penalties, especially on some CPUs.

Use aligned_alloc or ensure struct/pointer alignment.

14.Memory leak by not freeing

Forgetting to call free() causes leak.

Fix by always freeing after allocation and no longer needed.

15.Dynamic 2D array allocation and deallocation

Allocate memory row-wise (array of pointers).

Free each row, then the array of pointers.

16.Appending to dynamic array safely with realloc

Use a temp pointer when reallocating.

Check for NULL before using the reallocated memory.

17.Joining two strings dynamically

Handle NULL/empty strings as special cases.

Allocate size = len1 + len2 + 1, then copy/concat safely.

18.Own calloc using malloc and memset

Allocate then zero-initialize the block.

Check for NULL before using memset.

19.Struct with variable-length name

Use a flexible array member for name[].

Allocate total size (struct + name length) and free properly.

20.Handling failed memory allocation

Always check if return from malloc/calloc is NULL.

Print error and exit or handle recovery logic safely.

21.Add node at end of linked list

Traverse to end, allocate new node, and link it.

Always check if malloc succeeded before use.

22.Simple memory pool using array

Manage memory with a fixed array and free-list.

Implement custom my_malloc/my_free to allocate from pool.

23.Free nested dynamic structs

Recursively free all inner structs first.

Finally, free the outer/main struct.

24.Problem with returned pointer after free

Returning a freed pointer leads to dangling pointer.

Fix by not freeing until after the pointer is used.

25.Returning pointer after free

int* ptr is freed before returning — leads to use-after-free.

Solution: don't free inside the function or return a copy.

26.Read line with dynamic memory

Use buffer that grows as needed (e.g., realloc in loop).

Always check for NULL after each reallocation.
*/