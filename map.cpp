#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[101] = "Sumair";
    m[102] = "Monis";
    m[103] = "Hammad";

    cout << "Students:\n";

    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << "\nName = " << m[101] << endl;

    cout << "Size = " << m.size() << endl;

    if(m.find(102) != m.end())
        cout << "Key Found\n";

    m.erase(102);

    cout << "\nAfter Erase\n";

    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}