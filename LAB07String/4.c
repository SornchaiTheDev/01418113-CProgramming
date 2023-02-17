#include <stdio.h>

int main()
{
    long size, wordAmount;
    int i, j, count, isBreak = 0;

    scanf("%ld", &size);
    scanf("%ld", &wordAmount);

    char compare_word[size];
    char inform_word[size];
    char chain_break_at_before[size];

    scanf("%s", compare_word);

    for (i = 1; i < wordAmount; i++)
    {
        scanf("%s", inform_word);
        count = 0;
        for (j = 0; j < (size); j++)
            if (compare_word[j] != inform_word[j])
                count++;

        if (isBreak == 0)
        {
            if (count > 2)
            {
                for (j = 0; j < size; j++)
                    chain_break_at_before[j] = compare_word[j];
                isBreak = 1;
            }

            else
            {
                for (j = 0; j < size; j++)
                    chain_break_at_before[j] = inform_word[j];
            }

            chain_break_at_before[size] = '\0';
        }

        for (j = 0; j < size; j++)
            compare_word[j] = inform_word[j];
        compare_word[size] = '\0';
    }

    printf("%s", chain_break_at_before);

    return 1;
}
