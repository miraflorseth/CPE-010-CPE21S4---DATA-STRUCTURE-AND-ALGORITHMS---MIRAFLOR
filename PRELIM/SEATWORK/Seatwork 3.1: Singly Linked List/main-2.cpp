#include <iostream>
#include "singly_ll.h"

using namespace std;

int main()
{
    // Create nodes: S E T H
    SinglyList<char>* head = nullptr;
    SinglyList<char>* second = nullptr;
    SinglyList<char>* third = nullptr;
    SinglyList<char>* fourth = nullptr;

    // Allocated memory to the head
    head = new SinglyList<char>;
    second = new SinglyList<char>;
    third = new SinglyList<char>;
    fourth = new SinglyList<char>;

    // Added the data to the node
    head->data = 'S';
    second->data = 'E';
    third->data = 'T';
    fourth->data = 'H';

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    cout << "Original List: ";
    ListTraversal(head);

    cout << "\nInsert at Front (A): ";
    InsertFront(head, 'A');
    ListTraversal(head);

    cout << "\nInsert at End (Z): ";
    InsertEnd(head, 'Z');
    ListTraversal(head);

    cout << "\nDelete Front: ";
    DeleteFront(head);
    ListTraversal(head);

    cout << "\nDelete End: ";
    DeleteEnd(head);
    ListTraversal(head);

    // Free all nodes
    while (head != nullptr)
    {
        DeleteFront(head);
    }

    return 0;
}