#include <stdio.h>

void roman2arabic(char input[], char output[])
{

    int z = 0, isEmpty = 0;
    for (int j = 0; input[j] != 0; j++)
        isEmpty = j;
    if (isEmpty == 0)
    {
        output[0] = 0;
    }
    else
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            if (input[i] == 'V')
            {
                if (input[i + 1] == 'I' && input[i + 2] == 'I' && input[i + 3] == 'I')
                {
                    output[z] = '8';
                    i += 3;
                }
                else if (input[i + 1] == 'I' && input[i + 2] == 'I')
                {
                    output[z] = '7';
                    i += 2;
                }
                else if (input[i + 1] == 'I')
                {
                    output[z] = '6';
                    i += 1;
                }
                else
                {
                    output[z] = '5';
                }
            }
            else if (input[i] == 'I')
            {
                if (input[i + 1] == 'I' && input[i + 2] == 'I')
                {
                    output[z] = '3';
                    i += 2;
                }
                else if (input[i + 1] == 'I')
                {
                    output[z] = '2';
                    i += 1;
                }
                else if (input[i + 1] == 'X')
                {
                    output[z] = '9';
                    i += 1;
                }
                else if (input[i + 1] == 'V')
                {
                    output[z] = '4';
                    i += 1;
                }
                else
                {
                    output[z] = '1';
                }
            }
            else
            {
                output[z] = input[i];
            }
            z++;
            output[z] = '\0';
        }
    }
}

int main()
{
    char input[80], output[80];

    printf(" Input: ");
    gets(input); /* read a line of characters from the input to "input" variable */

    roman2arabic(input, output);
    printf("Output: %s\n", output);

    return 0;
}