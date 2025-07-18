/*19.You cannot reliably find the size of an array from a pointer alone inside a function, but here is key point:

Arrays to pointers when passed to functions, so the size information is lost — sizeof(ptr) gives size of pointer, not the array.*/