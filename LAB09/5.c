#include <stdio.h>
#include <stdlib.h>

struct Node_
{
    int value;
    struct Node_ *next;
};

typedef struct Node_ node;
typedef node *nodePtr;

void printList(node *pList)
{

    node *current;
    current = pList;
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
}

void insertNode(node **pList, int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->value = value;

    if (*pList == NULL)
    {
        temp->next = NULL;
        *pList = temp;
    }
    else
    {
        node *current = *pList;
        while (current != NULL)
        {

            if (value > current->value)
            {
                printf("value : %d , current : %d\n", value, current->value);

                temp->next = current->next;
                current->next = temp;
                *pList = temp;
                break;
            }
            else
            {
                temp->next = *pList;
                *pList = temp;
                break;
            }
            current = current->next;
        }
    }
    // printf("current Node : %p\n", temp);
    // printf("node->value = %d\nnode->next = %p\n", temp->value, temp->next);
    // printf("---------\n");
}

int main()
{
    int i, value;
    node *pList = NULL;

    for (i = 0; i < 3; i++)
    {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }

    printList(pList);
}