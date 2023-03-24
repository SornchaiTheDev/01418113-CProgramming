#include <stdio.h>
#include <stdlib.h>

typedef struct Node_
{
    int value;
    struct Node_ *next;
} Node;

typedef Node *NodePtr;

void addLast(NodePtr *startNode, int value)
{
    NodePtr tmp = (NodePtr)malloc(sizeof(Node));
    tmp->value = value;
    tmp->next = NULL;

    if (*startNode == NULL)
    {
        *startNode = tmp;
    }
    else
    {
        NodePtr current = *startNode;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = tmp;
    }
}

void addFirst(NodePtr *startNode, int value)
{
    NodePtr tmp = (NodePtr)malloc(sizeof(Node));
    tmp->value = value;
    tmp->next = NULL;

    if (*startNode == NULL)
    {
        *startNode = tmp;
    }
    else
    {
        tmp->next = *startNode;
        *startNode = tmp;
    }
}

void print(NodePtr startNode)
{
    NodePtr current = startNode;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
}

void delete(NodePtr *startNode, int value)
{
    NodePtr current = *startNode;
    NodePtr prevNode = *startNode;

    if (current->value == value)
    {
        *startNode = current->next;
    }
    else
    {
        while (current != NULL)
        {
            if (current->value == value)
            {
                prevNode->next = current->next;
            }
            prevNode = current;
            current = current->next;
        }
    }
}

void deleteByIndex(NodePtr *startNode, int index)
{
    NodePtr current = *startNode;
    NodePtr prevNode = *startNode;
    int _index = 0;
    if (_index == index)
    {
        *startNode = current->next;
    }
    else
    {
        while (current != NULL)
        {
            if (_index == index)
            {
                prevNode->next = current->next;
                break;
            }
            prevNode = current;
            current = current->next;
            _index++;
        }
    }
}

void insert(NodePtr *startNode, int index, int value)
{
    int _index = 0;
    NodePtr current = *startNode;
    NodePtr prevNode = *startNode;

    while (current != NULL)
    {
        if (_index == index)
        {
            NodePtr tmp = (NodePtr)malloc(sizeof(Node));
            tmp->value = value;
            tmp->next = current;

            prevNode->next = tmp;
        }
        prevNode = current;
        current = current->next;
        _index++;
    }
}

void deleteThenPlaceAt(NodePtr *startNode, int value, int index)
{
    NodePtr current = *startNode;
    NodePtr prevNode = *startNode;

    if (current->value == value)
    {
        *startNode = current->next;
    }
    else
    {
        while (current != NULL)
        {
            if (current->value == value)
            {
                prevNode->next = current->next;
                break;
            }
            current = current->next;
        }
    }

    // int _index = 0;
    // while (current != NULL)
    // {
    //     if (current->value == value)
    //     {
    //         prevNode->next = current->next;
    //         break;
    //     }
    //     current = current->next;
    // }
}

int main()
{

    NodePtr start = NULL;

    addLast(&start, 1);
    addLast(&start, 2);
    addLast(&start, 2);
    addLast(&start, 2);
    addLast(&start, 2);
    addLast(&start, 2);
    addLast(&start, 2);
    addLast(&start, 2);
    addLast(&start, 3);
    addLast(&start, 4);
    addLast(&start, 5);
    print(start);
    delete (&start, 2);
    // deleteThenPlaceAt(&start, 1, 4);
    printf("\n");
    print(start);
}