##include <iostream>
#include <stack>

int main() {

    // push
    // pop
    // isEmpty
    // Top
    // create an object:

    std::stack<char> stack1;

    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;

    stack1.push('S');
    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('E');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('T');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('H');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;
    std::cout << "What is the size of the stack? " << stack1.size() << std::endl;

    // pop
    stack1.pop();
    std::cout << "\nAfter pop()" << std::endl;
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;
    std::cout << "Size: " << stack1.size() << std::endl;

    // emplace
    stack1.emplace('H');
    std::cout << "\nAfter emplace('H')" << std::endl;
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;
    std::cout << "Size: " << stack1.size() << std::endl;

    // swap
    std::stack<char> stack2;
    stack2.push('A');
    stack2.push('B');

    std::cout << "\nBefore swap()" << std::endl;
    std::cout << "Top of stack1: " << stack1.top() << std::endl;
    std::cout << "Top of stack2: " << stack2.top() << std::endl;

    stack1.swap(stack2);

    std::cout << "\nAfter swap()" << std::endl;
    std::cout << "Top of stack1: " << stack1.top() << std::endl;
    std::cout << "Top of stack2: " << stack2.top() << std::endl;

    return 0;
}