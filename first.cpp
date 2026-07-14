#include <iostream>
#include <string>
using namespace std;
class stud
{
public:
    string name;
    int rollno;
    float sgpa;
};
int main()
{
    stud s;
    s.name = "Sumair Khan";
    s.rollno = 24414;
    s.sgpa = 9.4;
    cout << s.name << " " << s.rollno << " " << s.sgpa << " " << endl;
    return 0;
}