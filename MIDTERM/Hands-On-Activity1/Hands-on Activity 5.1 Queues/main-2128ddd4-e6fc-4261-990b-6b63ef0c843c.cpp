#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Function to display the queue
void display(queue<string> q)
{
    if (q.empty())
    {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Front -> ";

    while (!q.empty())
    {
        cout << q.front();

        q.pop();

        if (!q.empty())
            cout << " | ";
    }

    cout << " <- Rear" << endl;
}

int main()
{
    queue<string> students;

    // Array of students' names
    string names[] = {
        "SETH",
        "EMMAN",
        "TRISHA",
        "JAMES",
        "ANGEL"
    };

    cout << "===== CREATE QUEUE =====" << endl;
    display(students);

    cout << "\n===== ENQUEUE OPERATIONS =====" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnqueue: " << names[i] << endl;
        students.push(names[i]);

        display(students);

        cout << "Front: " << students.front() << endl;
        cout << "Back : " << students.back() << endl;
        cout << "Size : " << students.size() << endl;
    }

    cout << "\n===== DEQUEUE OPERATION =====" << endl;

    cout << "Removed: " << students.front() << endl;
    students.pop();

    display(students);

    cout << "\n===== FRONT ELEMENT =====" << endl;
    cout << students.front() << endl;

    cout << "\n===== BACK ELEMENT =====" << endl;
    cout << students.back() << endl;

    cout << "\n===== IS EMPTY? =====" << endl;

    if(students.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "\n===== DESTROY QUEUE =====" << endl;

    while(!students.empty())
    {
        students.pop();
    }

    display(students);

    return 0;
}