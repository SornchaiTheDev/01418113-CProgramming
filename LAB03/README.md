# LAB 03 Document

## Loops

### While loop

```c
int i = 0
while (i < 10){

    i++; // ++i <--- this one faster than i++ cause of ALU in CPU

}
```

### For loop

```c
for(int i = 0; i < 10; i++) {
    ; // cannot empty need at least semicolon
}
```

## Switch Case
**Warning Every case need to have `break` keyword**
```c
int i = 10;
switch (i) {
    case 1:
        printf("i\n");
        break;
    case 2:
    case 3:
    case 4:
    default :
        printf("default Case");
        break;
}
```
