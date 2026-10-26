// Tests the push, empty, size, pop, and top methods of the stack library.

#include <iostream>
#include <stack> // Calling Stack from the STL

using namespace std;

int main()
{
    stack<int> newStack;

    // Adds elements to the stack
    newStack.push(3);
    newStack.push(8);
    newStack.push(15);

    // Returns a boolean response depending on if the stack is empty or not
    cout << "Stack Empty? " << newStack.empty() << endl;

    // Returns the size of the stack
    cout << "Stack Size: " << newStack.size() << endl;

    // Returns the topmost element of the stack
    cout << "Top Element of the Stack: " << newStack.top() << endl;

    // Removes the topmost element of the stack
    newStack.pop();

    // Displays the new top element
    cout << "Top Element of the Stack: " << newStack.top() << endl;

    // Displays the updated size of the stack
    cout << "Stack Size: " << newStack.size() << endl;

    return 0;
}