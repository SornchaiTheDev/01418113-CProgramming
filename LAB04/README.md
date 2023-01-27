# Function

**Need to be declare before use and scope downward**

> Global Scope => top of any function lifespan : (start-end execute)

```c
#include <stdio.h>

int x = 10;

int main() {
    int x = 20; // scope only in this main function
    printf("%d\n", x); // scope upward then found x at outer scope
}

```

## define addTen() function

In a function it doesn't matter to return or not but it has to be the same return type

**x in this function is pass by value**

```c
int addTen(int x) {
    x += 10;
    return x;
}
```

## Call addTen function

```c
int y = addTen(x);
```

## Final Code

```c
#include <stdio.h>

int x = 10;

int addTen(int x) {
    x += 10;
    return x;
}

int main() {
    int x = 20;
    printf("%d\n", x);
    int y = addTen(x);
}

```

## Variable shadowing

It means that you define a worthless variable

```c
int addTen(int x) {
    x += 10;
    int x = 50; // ---> this line
    printf("in addTen x = %d, y = %d\n",x , y);
    return x;
}
```

## How to fix ?

You need to add parameter to addTen() function

```c
int addTen(int x, int y) {
    x += 10;
    printf("in addTen x = %d, y = %d\n",x , y);
    return x;
}
```

## What is memory ?

it is a r

Memory contains 2 thing

1.Address

start at 0 and can't change Address value

First 2 address are OS

> 1 Address = 1 byte

**Local Variable and Global Variable has it own group**

First declare variables address less than later declare

Os create mapping table to store address and variable

```c
int x = 10; # --> Globle Scope
```

x is address 0-3 but you will call it as address 0 because x is int so it reserve 4 bytes to store integer.

remove space in memory it remove only in mapping table **(but it doesn't real remove)**

Ex.

```c
int x;
x += 10 // 981128 --> see it doesn't start with 0 like global scope
```

Why this occur ?

because it using same address with empty space in mapping table but in real memory it doesn't clear value so this is the problem.

## How to fix ?

You need to assign initial value to a variable

```c
int x = 10;
x += 10; // 20
```

2.Value

When you declare a variable it contain 3 things

- Address
- Value
- Variable name

## Prototype Function

is a declare function part and you need to define a function before using it.

```c
void addTwenty(int x);


void addTwenty(int x) {
    printf("%d\n" , x);
}
```

## Recursive Function

it calls it own until the break condition is true

Ex1. Factorial

```c
int fact(int x) {
    if(x == 1) return 1;
    return x * fact(x-1);
}
```

Ex2. Fibonacci

```c
int fibo(int x){
    if(x == 0 || x == 1) return 1;
    return fibo(x-1) + fibo(x-2);
}
```


## Bitwise Operator

7 = 0111

7 % 2 = 1

7 >> 1 = 011 % 2 => 1

7 >> 2 = 01 % 2 => 1