#include <stdio.h>
#include <stdlib.h>

struct Node_
{
    int value;
    struct Node_ *next;
};

typedef struct Node_ Node;
typedef Node *NodePtr;

NodePtr start = NULL;

void addLast(int value)
{
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;

    if (start == NULL)
    {
        start = temp;
        temp->next = NULL;
    }
    else
    {
        NodePtr current = start;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
}

void delete(int value)
{
    NodePtr current = start;
    NodePtr prevNode = NULL;
    while (current != NULL)
    {
        if (current->value == value)
        {
            if (current == start)
            {
                start = current->next;
            }
            else
            {
                prevNode->next = current->next;
            }
        }
        else
        {
            prevNode = current;
        }
        current = current->next;
    }
}

void sort()
{
    NodePtr n = start;
    int value = 0;

    while (n != NULL)
    {
        NodePtr current = start;
        while (current->next != NULL)
        {
            if (current->value > current->next->value)
            {
                value = current->value;
                current->value = current->next->value;
                current->next->value = value;
            }

            current = current->next;
        }

        n = n->next;
    }
}

void print()
{
    printf("[ ");
    NodePtr current = start;
    sort();
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }

    printf("]\n");
}

void input(char *type, int *number)
{
    printf("input> ");
    scanf(" %c", type);
    if (*type != 'p' && *type != 'q')
    {
        scanf("%d", number);
    }
}

int main()
{
    char type;
    int number;

    input(&type, &number);

    while (type != 'q')
    {
        if (type == 'p')
        {
            print();
        }
        else if (type == 'i')
        {
            addLast(number);
        }
        else if (type == 'd')
        {
            delete (number);
        }

        input(&type, &number);
    }
    return 0;
}