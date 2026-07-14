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
int main()
{
    car c1;
    c1.name = "Nexon";
    c1.company = "TATA";
    c1.topspeed = 160;
    c1.date = 2023;
    c1.price = 899999;
    c1.seat = 5;
    c1.bhp = 89;
    cout << c1.name << " " << c1.company << " " << c1.price << " " << c1.date << " " << c1.bhp << " " << c1.topspeed << " " << c1.seat << endl;

    return 0;
}