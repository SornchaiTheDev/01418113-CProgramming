#include <stdio.h>
#include <string.h>

typedef struct _product
{
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++)
    {
        printf("%-20s|%6d|%10.2lf\n",
               stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char filename[])
{
    FILE *fp;
    char item[100];
    fp = fopen(filename, "r");
    Product stocks[100];
    int index = 0;
    fgets(item, sizeof(item), fp);
    int itemSize = 
    
    // int itemSize = item
    // while (fgets(item, sizeof(item), fp) != NULL)
    // {
    //     char *token = strtok(item, ",");
    //     token = strtok(NULL, ",");
    //     token = strtok(NULL, ",");

    //     // printf("%s\n", token);
    //     // printf("compare : %s\n", stocks[0].name);

    //     int isFound = 0;
    //     for (int i = 0; i <= ; i++)
    //     {
    //         if (strcmp(token, stocks[i].name) == 0)
    //         {
    //             isFound = 1;
    //         }
    //     }
    //     printf("isFound : %d\n", isFound);
    //     if (!isFound)
    //     {

    //         strcpy(stocks[index].name, token);
    //         index++;
    //     }

    //     printf("%s\n", token);
    // }
    // token = strtok(NULL, ",");
    // }

    // printStock(stocks, 4);
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}