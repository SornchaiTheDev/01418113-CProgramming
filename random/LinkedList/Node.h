#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node
{
private:
    int value;
    Node *next;

public:
    Node();
    Node(int value);
    int getValue();
    Node *getAddress();
    Node *getNext();
    void setValue(int value);
    void setNext(Node *node);
    friend ostream &operator<<(ostream &output, Node &node);
};

#endif