#include <stdio.h>

int remove_vowel(char *word)
{
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; word[i] != 0; i++)
    {
        for (int j = 0; vowels[j] != 0; j++)
        {
            if (word[i] == vowels[j] || word[i] + 32 == vowels[j])
            {
                for (int k = i; word[k] != 0; k++)
                {
                    word[k] = word[k + 1];
                }
                i = -1;
            }
        }
    }
}

int main()
{
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}