#include <iostream>
#include <string>
using namespace std;

class Bank
{
public:
    int accountno;
    string name;
    float balance;

    void deposit(float amt)
    {
        balance = balance + amt;
    }
    void widtdrawn(float amt)
    {
        balance = balance - amt;
    }
    void display()
    {
        cout << "Account No: " << accountno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Bank b;

    b.accountno = 45878;
    b.name = "SDA Company";
    b.balance = 54672.54;

    b.deposit(5000);
    b.widtdrawn(2500);
    b.display();

    return 0;
}