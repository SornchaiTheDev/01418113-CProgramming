#ifndef NODE_H
#define NODE_H

class Node {
private : 
    int value;
    Node *next;  
public : 
    Node();
    void setNext(Node *ptr);
    void setValue(int value);
};


#endif