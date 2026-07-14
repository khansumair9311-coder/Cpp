#include <iostream>
#include <string>
using namespace std;
class car
{
public:
    string name;
    float topspeed;
    string company;
    int date;
    float price;
    int seat;
    int bhp;
};
void display(car &c)
{

    cout << c.name << " " << c.company << " " << c.price << " " << c.date << " " << c.bhp << " " << c.topspeed << " " << c.seat << endl;
}
void change(int &x)
{
    x = 10;
}
void carchange(car &c1)
{
    c1.name = "Mercedes";
}
int main()
{
    int x = 4;
    cout << x << endl;
    change(x);
    cout << x << endl;
    car c1;
    c1.name = "Nexon";
    c1.company = "TATA";
    c1.topspeed = 160;
    c1.date = 2023;
    c1.price = 899999;
    c1.seat = 5;
    c1.bhp = 89;
    car c2;
    c2.name = "M4";
    c2.company = "BMW";
    c2.topspeed = 220;
    c2.date = 2023;
    c2.price = 850000;
    c2.seat = 5;
    c2.bhp = 289;
    display(c1);
    carchange(c1);
    // display(c2);
    return 0;
}