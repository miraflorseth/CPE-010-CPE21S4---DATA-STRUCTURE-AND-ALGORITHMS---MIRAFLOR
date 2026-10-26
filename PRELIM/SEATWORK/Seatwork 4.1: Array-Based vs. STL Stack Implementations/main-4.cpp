#include <iostream>

//global variables:
#define maxSize 10
int stackArr[maxSize];
int top = -1, newData;

//function prototypes:

//observer operators
bool isEmpty();
bool isFull();
void Top();
void displayALI(); // goal is to display the stack following the LIFO principles

//transformer operators
void Push();
void Pop();

int main() {
    int choice;

    while (true) {
        std::cout << "========================\n";
        std::cout << " Stack operations: " << std::endl;
        std::cout << " [1] push [2] pop [3] isEmpty [4] isFull [5] Top [6] Display" << std::endl;
        std::cin >> choice;
        std::cout << "=========================\n";

        switch (choice) {
            case 1:
                Push();
                break;

            case 2:
                Pop();
                break;

            case 3:
                std::cout << "is the stack empty? " << isEmpty() << std::endl;
                break;

            case 4:
                std::cout << "is the stack full? " << isFull() << std::endl;
                break;

            case 5:
                Top();
                break;

            case 6:
                displayALI();
                break;

            default:
                std::cout << "invalid Choice!" << std::endl;
        }
    }

    return 0;
}

//function definition

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == maxSize - 1);
}

void Top() {
    //error catching
    if (isEmpty()) {
        std::cout << "Stack is Empty!" << std::endl;
        return;
    }

    //prints the top element
    std::cout << "The top element is: " << stackArr[top] << std::endl;
}

void Push() {
    //error catching
    if (isFull()) {
        std::cout << "Stack Overflow!" << std::endl;
        return;
    }

    //ask the user what they want to insert
    std::cout << "What number do you want to push? ";
    std::cin >> newData;

    //storing to the stack
    stackArr[++top] = newData;
}

void Pop() {
    //error catching
    if (isEmpty()) {
        std::cout << "Stack Underflow!" << std::endl;
        return;
    }

    //display the item to be popped
    std::cout << "Popping: " << stackArr[top] << std::endl;

    //remove the element from the stack
    top--;
}

void displayALI() {
    if (isEmpty()) {
        std::cout << "Stack is Empty!" << std::endl;
        return;
    }

    std::cout << "Stack contents (Top to Bottom):" << std::endl;

    for (int i = top; i >= 0; i--) {
        std::cout << stackArr[i] << std::endl;
    }
}