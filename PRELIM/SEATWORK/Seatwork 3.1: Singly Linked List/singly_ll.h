#ifndef SINGLY_LL_H
#define SINGLY_LL_H

#include <iostream>
using namespace std;

template <typename T>
class SinglyList
{
public:
    T data;
    SinglyList<T>* next;
};

// Display the linked list
template <typename T>
void ListTraversal(SinglyList<T>* node)
{
    if (node == nullptr)
    {
        cout << "The list is empty." << endl;
        return;
    }

    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }

    cout << endl;
}

// Insert at the front
template <typename T>
void InsertFront(SinglyList<T>* &head, T value)
{
    SinglyList<T>* newNode = new SinglyList<T>;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at the end
template <typename T>
void InsertEnd(SinglyList<T>* &head, T value)
{
    SinglyList<T>* newNode = new SinglyList<T>;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    SinglyList<T>* temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Delete the first node
template <typename T>
void DeleteFront(SinglyList<T>* &head)
{
    if (head == nullptr)
        return;

    SinglyList<T>* temp = head;
    head = head->next;
    delete temp;
}

// Delete the last node
template <typename T>
void DeleteEnd(SinglyList<T>* &head)
{
    if (head == nullptr)
        return;

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    SinglyList<T>* temp = head;

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

#endif