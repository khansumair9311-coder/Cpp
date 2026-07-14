#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter N: ";
    cin >> n;
    int org = n; 
    while (n > 0)
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    }
    if (org == rev)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not A Palindrome";
    }

    return 0;
}