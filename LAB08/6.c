#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex E;
    E.real = C.real + D.real;
    E.imaginary = C.imaginary + D.imaginary;
    return E;
}

struct complex multiply_complex(struct complex C, struct complex D)
{
    struct complex F;
    F.real = C.real * D.real - C.imaginary * D.imaginary;
    F.imaginary = C.real * D.imaginary + C.imaginary * D.real;
    return F;
}

void print_complex(char *msg, struct complex ans)
{
    if (ans.imaginary == 0)
    {
        printf("%s%.1f\n", msg, ans.real);
    }
    else if (ans.imaginary < 0)
    {
        printf("%s%.1f - %.1fi\n", msg, ans.real, -ans.imaginary);
    }
    else if (ans.real == 0)
    {
        printf("%s%.1fi\n", msg, ans.imaginary);
    }
    else
    {
        printf("%s%.1f + %.1fi\n", msg, ans.real, ans.imaginary);
    }
}

int main()
{
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.imaginary);
    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.imaginary);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}