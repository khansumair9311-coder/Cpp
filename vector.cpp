#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vector
{
public:
    Vector()
    {
        int size = 0;
        int capacity = 10;
    }
};
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // cout << "Value at index 2:- " << v[2] << " or " << v.at(2) << endl;
    // cout << v.front();
    // cout << v.back();
    v.erase(v.begin() + 2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "After Insert: ";
    v.insert(v.begin() + 3, 25);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.clear();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Is empty: ";
    if (v.size() == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}