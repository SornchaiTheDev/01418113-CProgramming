#include <iostream>
using namespace std;
#include "Node.h"

Node::Node()
{
    this->next = NULL;
}

void Node::setNext(Node *ptr)
{
    this->next = ptr;
}

void Node::setValue(int value)
{
    this->value = value;
}