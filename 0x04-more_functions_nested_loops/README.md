# more functions and nested loops

Nested loops in C are a powerful programming concept that allows developers to implement complex iterations and repetitive tasks with greater efficiency. An inner loop can run repeatedly for each cycle of the outer loop when there is a nested loop, which is a loop inside another loop.

## example
```
#include <stdio.h>
int main()

{
  int i, j;

  // Outer loop
  for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times

    // Inner loop
    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
return 0;
}
```
