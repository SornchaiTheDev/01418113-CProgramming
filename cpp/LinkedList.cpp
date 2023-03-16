#include <iostream>

class Node
{
private:
    int value;
    Node *next;

public:
    Node(int value)
    {
        this->value = value;
    }

    int getValue()
    {
        return value;
    }
};

typedef Node *NodePtr;

class LinkedList
{
private:
    NodePtr head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void addLast(int value)
    {
        NodePtr tmp = new Node(value);
    }
};

int main()
{
    LinkedList link1;

    return 0;
}