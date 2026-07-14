#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    cout << endl;
    cout<<s.size()<<" ";
    for (auto x : s)
    {
        cout << x << " ";
    }
    return 0;
}