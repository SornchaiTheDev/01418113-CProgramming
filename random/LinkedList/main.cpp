#include <iostream>
#include <sstream>
#include "Node.h"
using namespace std;

class Linkedlist
{
private:
    Node *startNode;
    int length;

public:
    Linkedlist()
    {
        startNode = NULL;
        length = 0;
    }
    void push(int value)
    {
        Node *node = new Node(value);
        if (startNode == NULL)
        {
            startNode = node;
        }
        else
        {
            Node *currentNode = startNode;

            while (currentNode->getNext() != NULL)
            {
                currentNode = currentNode->getNext();
            }

            currentNode->setNext(node);
        }
        length++;
    }

    void pop()
    {
        Node *currentNode = startNode;
        int _index = 0;
        while (currentNode->getNext()->getNext() != NULL)
        {
            currentNode = currentNode->getNext();
        }
        currentNode->setNext(NULL);
        length--;
    }

    void pop(int index)
    {

        Node *currentNode = startNode;
        Node *prevNode = startNode;
        int _index = 0;

        if (index == 0)
        {
            startNode = currentNode->getNext();
                }
        else
        {
            while (currentNode != NULL)
            {
                if (_index == index)
                {
                    prevNode->setNext(currentNode->getNext());
                    break;
                }
                prevNode = currentNode;
                currentNode = currentNode->getNext();
                _index++;
            }
        }

        delete currentNode;
    }

    int at(int index)
    {
        Node *currentNode = startNode;
        int _index = 0;

        while (currentNode != NULL)
        {
            if (_index == index)
            {
                break;
            }

            currentNode = currentNode->getNext();
            _index++;
        }
        return currentNode->getValue();
    }

    void concat(Linkedlist *other)
    {
        Node *currentNode = startNode;
        while (currentNode->getNext() != NULL)
        {
            currentNode = currentNode->getNext();
        }

        currentNode->setNext(other->getStartNode());
    }

    Node *getStartNode()
    {
        return startNode;
    }
    int getLength()
    {
        return length;
    }

    friend ostream &operator<<(ostream &output, Linkedlist &linkedlist)
    {

        output << "[";
        Node *currentNode = linkedlist.startNode;
        while (currentNode != NULL)
        {

            output << currentNode->getValue();
            currentNode = currentNode->getNext();

            if (currentNode != NULL)
            {
                output << ", ";
            }
        }
        output << "]";
        return output;
    }
};

int main()
{
    Linkedlist arr1, arr2;
    int i = 0;
    while (i < 10)
    {
        arr1.push(i + 1);
        i++;
    }
    while (i < 20)
    {
        arr2.push(i + 1);
        i++;
    }

    cout << arr1 << endl;
    cout << arr2 << endl;
    arr1.concat(&arr2);
    cout << arr1 << endl;

    return 0;
}