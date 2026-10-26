#include <iostream>
#include "QueueLinkedList.h"
#include "QueueArray.h"

using namespace std;

int main()
{
    cout << "======================================" << endl;
    cout << "   QUEUE USING LINKED LIST" << endl;
    cout << "======================================" << endl;

    QueueLinkedList linkedQueue;

    linkedQueue.display();

    cout << "\nEnqueue Operations\n";
    linkedQueue.enqueue("SETH");
    linkedQueue.enqueue("EMMAN");
    linkedQueue.enqueue("TRISHA");
    linkedQueue.enqueue("JAMES");
    linkedQueue.enqueue("ANGEL");

    linkedQueue.display();

    cout << "\nFront: " << linkedQueue.front() << endl;
    cout << "Back : " << linkedQueue.back() << endl;
    cout << "Size : " << linkedQueue.size() << endl;

    cout << "\nDequeue Operation\n";
    linkedQueue.dequeue();
    linkedQueue.display();

    cout << "\nFront: " << linkedQueue.front() << endl;
    cout << "Back : " << linkedQueue.back() << endl;
    cout << "Size : " << linkedQueue.size() << endl;

    cout << "\nTesting Copy Constructor\n";
    QueueLinkedList copyLinked(linkedQueue);
    copyLinked.display();

    cout << "\nTesting Copy Assignment Operator\n";
    QueueLinkedList assignLinked;
    assignLinked = linkedQueue;
    assignLinked.display();

    cout << "\nClearing Queue...\n";
    linkedQueue.clear();
    linkedQueue.display();

    cout << "\n\n======================================" << endl;
    cout << "      QUEUE USING ARRAY" << endl;
    cout << "======================================" << endl;

    QueueArray arrayQueue(5);

    arrayQueue.Display();

    cout << "\nEnqueue Operations\n";
    arrayQueue.Enqueue("SETH");
    arrayQueue.Enqueue("EMMAN");
    arrayQueue.Enqueue("TRISHA");
    arrayQueue.Enqueue("JAMES");
    arrayQueue.Enqueue("ANGEL");

    arrayQueue.Display();

    cout << "\nFront: " << arrayQueue.Front() << endl;
    cout << "Back : " << arrayQueue.Back() << endl;
    cout << "Size : " << arrayQueue.Size() << endl;

    cout << "\nDequeue Operation\n";
    arrayQueue.Dequeue();
    arrayQueue.Display();

    cout << "\nFront: " << arrayQueue.Front() << endl;
    cout << "Back : " << arrayQueue.Back() << endl;
    cout << "Size : " << arrayQueue.Size() << endl;

    cout << "\nTesting Copy Constructor\n";
    QueueArray copyArray(arrayQueue);
    copyArray.Display();

    cout << "\nTesting Copy Assignment Operator\n";
    QueueArray assignArray;
    assignArray = arrayQueue;
    assignArray.Display();

    cout << "\nClearing Queue...\n";
    arrayQueue.Clear();
    arrayQueue.Display();

    cout << "\nProgram Finished Successfully!" << endl;

    return 0;
}