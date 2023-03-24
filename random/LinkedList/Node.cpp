#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
    next = NULL;
}

Node::Node(int value)
{
    this->value = value;
    next = NULL;
}

void Node::setValue(int value)
{
    this->value = value;
}

void Node::setNext(Node *node)
{
    next = node;
}

int Node::getValue()
{
    return value;
}

Node *Node::getAddress()
{
    return this;
}

Node *Node::getNext()
{
    return next;
}

ostream &operator<<(ostream &output, Node &node)
{

    output << "value : " << node.getValue() << endl;
    output << "next : " << node.getNext();
    return output;
}