#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    cout << s.size() << endl;
    s.push(12);
    s.push(22);
    s.push(32);
    cout << s.top()<<endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}