#include <iostream>
#include <string>
#include <vector>
#include<numeric>
using namespace std;
class Vector
{
public:
    int size;
    int capacity;
    int *arr;
    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele)
    {
        if (size == capacity)
        {
            capacity = capacity * 2;

            int *arr2 = new int[capacity];

            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }

            delete[] arr;

            arr = arr2;
        }
        arr[size] = ele;
        size++;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void remove()
    {
        if (size == 0)
        {
            cout << "Array Is Empty" << endl;
        }
        size--;
    }
};
int main()
{
    Vector v;
    v.add(45);
    v.print();
    v.add(21);
    v.print();
    v.add(23);
    v.print();
    v.add(89);
    v.print();
    v.add(76);
    v.print();
    v.print();
    v.remove();
    v.print();
    v.remove();
    v.print();
    v.remove();
    v.max_element(v.begin(),v.end());

    return 0;
}