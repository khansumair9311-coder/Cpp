#include <iostream>
#include <string>
using namespace std;
void greet()
{
    cout << "Hey" << endl;
    greet();
}
int main()
{

    greet();
    return 0;
}