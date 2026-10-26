#include <iostream>
#include <string>

class Student
{
private:
    std::string studentName;
    int studentAge;

public:
    Student(std::string newName = "John Doe", int newAge = 18)
    {
        studentName = newName;
        studentAge = newAge;
        std::cout << "Constructor Called." << std::endl;
    }

    ~Student()
    {
        std::cout << "Destructor Called." << std::endl;
    }

    Student(const Student& copyStudent)
    {
        std::cout << "Copy Constructor Called." << std::endl;

        studentName = copyStudent.studentName;
        studentAge = copyStudent.studentAge;
    }

    void printDetails()
    {
        std::cout << studentName << " " << studentAge << std::endl;
    }
};

int main()
{
    const size_t j = 5;

    Student studentList[j];

    std::string nameList[j] =
    {
        "Carly",
        "Freedy",
        "Sam",
        "Zacl",
        "Cody"
    };

    int ageList[j] = {15, 16, 18, 19, 16};

    for (int i = o; i < j; i++) { //loop A
         Student *ptr = new Student (nameList[i], ageList[i]);
         studentList[i] = *ptr;
    }
    for (int i = 0; i < j; i++) { //loop B
         studentList[i].printDetails();
    }

    return 0;
}

