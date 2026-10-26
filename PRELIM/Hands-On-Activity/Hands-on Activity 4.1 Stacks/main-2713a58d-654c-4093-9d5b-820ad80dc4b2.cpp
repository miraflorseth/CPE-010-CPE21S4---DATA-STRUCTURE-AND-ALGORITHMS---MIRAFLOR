#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(char ch) {
        Node* temp = new Node;
        temp->data = ch;
        temp->next = top;
        top = temp;
    }

    char pop() {

        if (isEmpty())
            return '\0';

        Node* temp = top;
        char value = temp->data;

        top = top->next;
        delete temp;

        return value;
    }
};

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool checkBalance(string expr) {

    Stack s;

    for (char ch : expr) {

        if (ch == '(' || ch == '{' || ch == '[')
            s.push(ch);

        else if (ch == ')' || ch == '}' || ch == ']') {

            if (s.isEmpty())
                return false;

            char top = s.pop();

            if (!isMatching(top, ch))
                return false;
        }
    }

    return s.isEmpty();
}

int main() {

    string expr;

    cout << "Enter expression: ";
    getline(cin, expr);

    if (checkBalance(expr))
        cout << "Expression is Balanced." << endl;
    else
        cout << "Expression is NOT Balanced." << endl;

    return 0;
}