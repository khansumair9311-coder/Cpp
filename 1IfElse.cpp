#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:- ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even Number\n";
    }
    else if (n % 2 != 0)
    {
        cout << "Odd Number\n";
    }
    else
    {
        cout << "Invalid Number Try Again\n";
    }

    return 0;
}