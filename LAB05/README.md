# Pointer

is a variable to store address of other variable

## Declare pointer

declare like variable but need a star symbol after data type

```c
int i = 21 ;
int* iPtr ;
iPtr = &i;
```

```c
#include <stdio.h>

int main() {
    int i =21;
    printf("%d\n" , i); // value of i 
    printf("%p\n" , &i); // address of i

    int numbers[5] = {100, 200, 300, 400, 500};
    printf("%d\n", numbers[0]); // value mode
    printf("%p\n", &numbers[0]); // address mode
    printf("%p\n" , &numbers) // address of index 0

    printf("%p\n", numbers + 1); // address of index 1 
    // or 
    printf("%p\n", &numbers[1]);


}
```

## If there are pointer name iPtr then

`*iPtr` is dereference value of that pointer

## Modify array value by using pointer

```c
#include <stdio.h>

int main() {
    int numbers[5] = {100,200,300,400,500};
    int* iPtr;
    iPtr = &numbers[2];
    *iPtr = 300 // modify numbers array at index of 2 to be 300 
}
```

this will mutate numbers array but if you want to only change it value but not original value you should do this**

```c
int main() {
    int numbers[5] = {100,200,300,400,500};
    int* iPtr;
    int indexTwo = numbers[2];
    indexTwo = 1;
    printf("%d\n",indexTwo) // output : 1 it doesn't mutate numbers array
    return 0;   
}
```

## Pass by Value

Concept : send value to the function

```c
int cubeByValue(int n) {
    n = n * n * n;
    return n;
}

int main() {
    int size = 2;
    printf("cubeByValue(2) = %d" , cubeByValue(size));
    printf("size : %d" , size);
    return 0;
}
```

Size value not mutate after return from function

## Pass by reference

Pass address as an argument but get with Pointer

```c

int cubeByReference(int* n) {
    *n = *n * *n * *n;
    return *n;
}


int main() {
    int np = 30;
    printf("cubeByReference(&np) = %d\n" , cubeByReference(&np)); // output : 27000
    printf("np = %d", np); // output : 27000
    return 0;
}
```
