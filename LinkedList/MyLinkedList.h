#ifndef _MYLINKEDLIST_
#define _MYLINKEDLIST_

#include <string>

template <typename T>
class MyLinkedList
{
private:
    class Node
    {
    public:
        T item;
        Node next;

        std::string toString(){};
    };
    Node first;
    Node current;
    Node previous;
    int size;

public:
    MyLinkedList();

    void addBefore(T item);

    void addAfter(T item);

    T current();

    T first();

    T next();

    T remove();

    bool contains(T item);

    int size();

    bool isEmpty();

    std::string toString();

    ~MyLinkedList();
};

#include "MyLinkedList_impl.h"
#endif // _MYLINKEDLIST_