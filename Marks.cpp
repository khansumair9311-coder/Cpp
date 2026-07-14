#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Marks:- ";
    cin >> n;
    if (n >= 81 and n <= 100)
    {
        cout << "Excellent";
    }
    else if (n >= 61 and n <= 80)
    {
        cout << "Good";
    }
    else if (n >= 41 and n <= 60)
    {
        cout << "Average";
    }
    else if (n >= 0 and n<=40)
    {
        cout << "Fail Now Cry";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}