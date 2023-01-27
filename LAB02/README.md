# LAB02 Document

## False

only `0 0.0 '\0'`

## Get Input from keyboard

need to include from `<stdlib.h>`

`fgets(charArray , bufferSize , input);`

## Tranform char to other data type

using ato\_

**Warning if cannot change to that data type it will return 0 and exit function (not execute after the wrong one)**

`atoi()` to change char array to integer

`atof()` to change char array to double

`atol()` to change char array to long

## Full Code

```c
#include <stdio.h>
int main() {
  char str[10];
  printf("Enter : ");
  fgets(str, 10, stdin);

  printf("str - %s\n", str);

  int i = atoi(str);
  double d = atof(str);
  long = atol(str);

  printf("%d %ld %lf\n" , i , l ,d);
}
```
