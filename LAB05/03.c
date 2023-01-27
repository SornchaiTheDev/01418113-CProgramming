#include <stdio.h>

int main()
{
    float intialValue;

    printf("Initial Value: ");
    scanf("%f", &intialValue);

    while (1)
    {
        char operator;
        printf("\nOperator: ");
        scanf("\n%c", &operator);
        if (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/')
        {

            break;
        }

        float value;
        printf("Input Value: ");
        scanf("%f", &value);

        switch (operator)
        {
        case '+':
            intialValue += value;
            break;
        case '-':
            intialValue -= value;
            break;
        case '*':
            intialValue *= value;
            break;
        case '/':
            intialValue /= value;
            break;
        default:
            break;
        }

        printf("Present Value is %.4f\n", intialValue);
    }
    printf("\nFinish Calculation. Final Value is %.4f", intialValue);
    return 0;
}