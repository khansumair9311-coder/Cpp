#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    float marks;
};
class emp{
    public:
    int id;
    string name;
    float salary;

};
void display2(emp e){
    cout<<e.id<<" "<<e.name<<" "<<e.salary<<endl;
}
void display(student s1){
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.marks<<endl;
}
int main()
{
    student s1;
    s1.name = "Sumair Khan";
    s1.rollno = 24414;
    s1.marks = 94;
    emp e;
    e.id=45;
    e.name="Khushi";
    e.salary=25000;
display(s1);
display2(e);
    return 0;
}