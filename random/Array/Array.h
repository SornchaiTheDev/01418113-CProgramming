#ifndef ARRAY_H
#define ARRAY_H
#include "Node.h"

class Array
{
private:
    Node *startPtr;
    int length;

public:
    Array();

    int getLength();
};
#endif