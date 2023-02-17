#include <stdio.h>

int main()
{
    char word[100];
    int amount = 0;
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    printf("String (without a space): ");
    scanf("%s", word);

    for (int i = 0; word[i] != 0; i++)
    {
        for (int j = 0; vowel[j] != 0; j++)
        {
            
            if (word[i] + 32 == vowel[j] || word[i] == vowel[j])
            {
                amount++;
                printf("%c ", word[i]);
            }
        }
    }
    if (amount <= 1)
    {
        printf("\nThis string contains %d vowel.", amount);
    }
    else
    {
        printf("\nThis string contains %d vowels.", amount);
    }
}