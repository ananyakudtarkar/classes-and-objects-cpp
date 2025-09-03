#include<iostream>
using namespace std;

class Student
{
    public:
    void myMethod();
};

void Student::myMethod()
{
    cout<<"Hello there!";
}

int main()
{
    Student s1;
    s1.myMethod();
}

/*
OUTPUT
Hello there!
*/
