# malloc_free
**C Dynamic Memory Allocation** can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.
C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under ```<stdlib.h>``` header file to facilitate dynamic memory allocation in C programming. They are: 

- malloc()
- calloc()
- free()
- realloc()

## C malloc() method
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

### syntax
```
ptr = (cast-type*) malloc(byte-size)
```
**For Example:**
```
ptr = (int*) malloc(100 * sizeof(int));
Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
```
![malloc](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png)
