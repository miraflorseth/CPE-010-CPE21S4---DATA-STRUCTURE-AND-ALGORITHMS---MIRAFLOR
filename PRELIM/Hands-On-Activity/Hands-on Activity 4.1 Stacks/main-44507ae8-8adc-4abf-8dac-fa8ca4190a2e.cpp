#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class Stack {
private:
    char arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(char ch) {
        if (!isFull())
            arr[++top] = ch;
    }

    char pop() {
        if (!isEmpty())
            return arr[top--];
        return '\0';
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