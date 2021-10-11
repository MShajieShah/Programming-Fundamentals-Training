#include <iostream>
#include "problem6.cpp"
using namespace std;

LinkedList Student;
struct Student
{
    int rollnumber;
    const char *name;
    int phone;
    float percentage;
    struct Student *next;

} * head;
void insert(int rollnumber, const char *name, int phone, float percentage)
{

    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    student->rollnumber = rollnumber;
    student->name = name;
    student->phone = phone;
    student->percentage = percentage;

    student->next = NULL;

    if (head == NULL)
    {
        head = student;
    }
    else
    {
        student->next = head;
        head = student;
    }
}
void display()
{
    struct Student *temp = head;
    while (temp != NULL)
    {

        cout << "Roll No: " << temp->rollnumber << endl;
        cout << "Name :" << temp->name << endl;
        cout << "Phone No: " << temp->phone << endl;
        cout << "Percentage: " << temp->percentage << endl;
        temp = temp->next;
    }
}
