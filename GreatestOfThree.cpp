#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "A is the Greatest";
    }
    else if (b > a && b > c)
    {
        cout << "B is the Greatest";
    }
    else if (c > a && c > b)
    {
        cout << "C is the Greatest";
    }
    else
    {
        cout << "Invalid ";
    }

    return 0;
}