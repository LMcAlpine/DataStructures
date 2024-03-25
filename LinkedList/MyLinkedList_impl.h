#include <iostream>
#include "MyLinkedList.h"

template <typename T>
MyLinkedList<T>::MyLinkedList() : first(NULL), current(NULL), previous(NULL), size(0)
{
}
template <typename T>
void MyLinkedList<T>::addBefore(T item) {}

template <typename T>
void MyLinkedList<T>::addAfter(T item) {}

template <typename T>
T MyLinkedList<T>::current() { return NULL; }

template <typename T>
T MyLinkedList<T>::first() { return NULL; }

template <typename T>
T MyLinkedList<T>::next() { return NULL; }

template <typename T>
T MyLinkedList<T>::remove() { return NULL; }

template <typename T>
bool MyLinkedList<T>::contains(T item) { return NULL; }

template <typename T>
int MyLinkedList<T>::size() { return 0; }

template <typename T>
bool MyLinkedList<T>::isEmpty() { return false; }

template <typename T>
std::string MyLinkedList<T>::toString() { return ""; }

template <typename T>
MyLinkedList<T>::~MyLinkedList() {}
