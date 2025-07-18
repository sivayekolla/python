/*
1. Using Unions to Save Memory
Unions let different types share the same memory space, using only as much memory as the largest member.

Saves space when only one of the data types is needed at a time.

Must track which member was last written to avoid undefined behavior.

2. Reading a Different Union Member
Reading a different member than the one most recently written leads to unpredictable results.

The underlying binary representation is reinterpreted according to the new type.

This is known as "type punning" and is not safe unless the types are compatible.

3. Union in a Device Driver Structure
A union in a struct allows storing different data types efficiently based on context.

Saves memory and simplifies access by using a type indicator to select the valid member.

Requires careful management to avoid misinterpretation or overwriting meaningful data.

4. Printing Union Data as a String
Interpreting an int as a string outputs characters from its byte representation.

Result depends on system endianness and may include invalid or non-printable characters.

Unsafe if the byte pattern doesn’t form a valid null-terminated string.

5. Shapes with Shared Data
A union stores only the relevant shape data, minimizing memory use.

A type field distinguishes which shape’s data is valid and how to interpret it.

Misreading the union without checking the type field causes incorrect results.

6. Pointer Selection with Union
A union can store either a file pointer or memory buffer pointer, but not both.

Use a mode flag to determine which pointer is active and safe to use.

Accessing the wrong member can lead to segmentation faults or logic errors.

7. Endianness Issues with Unions
The byte layout of data types differs between little-endian and big-endian systems.

Type punning using unions may produce inconsistent results across architectures.

Makes serialization, networking, or cross-platform file formats error-prone.

8. Anonymous Unions for Hardware Access
Anonymous unions allow direct access to union members without extra naming.

Improves code readability and aligns well with hardware register layouts.

Simplifies use in systems programming by hiding complexity of data access.

9. Arrays of Unions with Mixed Types
Storing different types in the same union array risks invalid reads if type isn't tracked.

Accessing a union as the wrong type leads to meaningless or corrupted data.

Use an accompanying type array or enum to indicate the correct interpretation.

10. Unsafe Type Punning with Misaligned Types
Accessing a misaligned type (like double on a 4-byte boundary) may cause hardware faults.

Unions don’t enforce proper alignment, risking performance or crashes.

Some architectures strictly require correct alignment, making this dangerous.
*/