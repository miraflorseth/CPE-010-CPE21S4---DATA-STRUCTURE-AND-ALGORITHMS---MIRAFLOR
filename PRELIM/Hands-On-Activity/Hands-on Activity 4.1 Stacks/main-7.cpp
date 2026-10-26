#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node *head = NULL, *tail = NULL;

// Push operation
void push(int newData) {
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = head;

    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

// Pop operation
int pop() {
    int tempVal;
    Node *temp;

    if (head == NULL) {
        head = tail = NULL;
        cout << "Stack Underflow." << endl;
        return -1;
    } else {
        temp = head;
        tempVal = temp->data;
        head = head->next;
        delete temp;

        if (head == NULL)
            tail = NULL;

        return tempVal;
    }
}

// Display top element
void Top() {
    if (head == NULL) {
        cout << "Stack is Empty." << endl;
    } else {
        cout << "Top of Stack: " << head->data << endl;
    }
}

// Display all elements
void Display() {
    if (head == NULL) {
        cout << "Stack is Empty." << endl;
        return;
    }

    Node *temp = head;

    cout << "Stack Elements (Top to Bottom): ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    push(1);
    cout << "After the first PUSH:" << endl;
    Top();
    Display();

    push(5);
    cout << "\nAfter the second PUSH:" << endl;
    Top();
    Display();

    pop();
    cout << "\nAfter the first POP:" << endl;
    Top();
    Display();

    pop();
    cout << "\nAfter the second POP:" << endl;
    Top();
    Display();

    pop();

    return 0;
}