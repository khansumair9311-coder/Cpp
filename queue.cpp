#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    // uses fifo algorithm
    queue<int> q;
    q.push(12);
    q.push(22);
    q.push(32);
    q.push(42);

    cout << q.front() << " ";
    cout << endl;
    cout << q.back() << " ";
    cout << endl;
    cout << q.size();
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}