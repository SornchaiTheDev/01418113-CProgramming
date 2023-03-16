#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

typedef struct nodeType
{
  int item;
  struct nodeType *next;
} Node;

typedef Node *NodePtr;

NodePtr starter[SIZE] = {};

void addFirst(int item, int index)
{
  NodePtr tmp = (NodePtr)malloc(sizeof(Node));
  tmp->item = item;
  tmp->next = starter[index];
  starter[index] = tmp;
}

void print()
{
  for (int i = 0; i < SIZE; i++)
  {
    printf("KEY %2d: ", i);
    NodePtr current = starter[i];
    while (current != NULL)
    {
      printf("%d ", current->item);
      current = current->next;
    }
    printf("\n");
  }
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
    else if (type == 'a')
    {
      int index = number % SIZE;
      addFirst(number, index);
    }
    input(&type, &number);
  }

  return 0;
}
