#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string year;
    float result;
};

int main(){
    Student S1;
    S1.name="Ananya Kudtarkar";
    S1.branch="E&TC";
    S1.year="Second";
    S1.result=7.5;

    Student S2;
    S2.name="Mrunal Sutar";
    S2.branch="CSE";
    S2.year="Second";
    S2.result=8.00;

    cout<<S1.name<<endl;

    return 0;
}

/*
OUTPUT
Ananya Kudtarkar
*/
