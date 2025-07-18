/*17.char *p = "hello"; *(p + 5) = '!'; — Why Undefined Behavior?

 trying to modify *(p + 5) 

A write to read-only memory

Undefined behavior, and likely to cause a segmentation fault.

char p[] = "hello"; 
*(p + 5) = '!';      
*/