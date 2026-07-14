#include <iostream>
#include <string>
using namespace std;
int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a;
    cout << "Enter A: ";
    cin >> a;
    int b;
    cout << "Enter B: ";
    cin >> b;
    cout << a << " " << b << " ";
    swap(a, b);
    cout << a << " " << b << " ";

    return 0;
}