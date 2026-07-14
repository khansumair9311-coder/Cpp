#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n % 5 == 0 and n % 3 == 0)
    {
        cout << "Divisible By 5 and 3";
    }
    else
    {
        cout << "NOT Divisible";
    }

    return 0;
}