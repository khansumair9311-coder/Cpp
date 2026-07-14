#include<iostream>
#include<string>
#include<list>
using namespace std;
int main(){
list<int> l;
l.push_back(30);
l.push_front(20);
l.push_front(10);
for (int x:l)
{
    cout<<x<<" "<<endl;
}


    return 0;
}