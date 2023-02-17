#include <stdio.h>

int charcount(char *s)
{
    int i = 0;
    while (1)
    {
        if (s[i] == '\0')
            break;
        i++;
    }
    return i;
}

void charweave(char *s, char *result)
{
    int amount = charcount(s);
    int left = 0;
    int right = amount - 1;
    int i = 0;

    for (i = 0; i < amount && s[i] != '\0'; i++)
    {
        if (i % 2 != 0)
        {
            result[i] = s[right];
            right--;
        }
        else
        {
            result[i] = s[left];
            left++;
        }
    }
    
    for (i = 0; i < amount && s[i] != '\0'; i++)
    {
        result[amount + i] = result[amount - 1 - i];
    }
    result[amount + i] = '\0';
}

int main()
{
    char str[100], result[200];
    printf("String: ");
    gets(str); /* read a line of characters from the input to "str" variable */
    charweave(str, result);
    printf("Output: %s\n", result);
    return 0;
}