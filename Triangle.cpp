#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter A:- ";
    cin >> a;
    cout << "Enter B:- ";
    cin >> b;
    cout << "Enter C:- ";
    cin >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "Valid Triangle";
    }
    else
    {
        cout << "Not Valid";
    }

    return 0;
}