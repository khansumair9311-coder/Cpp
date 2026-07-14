#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
vector <int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);
v.push_back(500);
v.pop_back();
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<"Max: "<<*max_element(v.begin(),v.end())<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;
v.insert(v.begin()+2,25);
cout<<"After Insert: ";
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" "<<endl;
}
v.erase(v.begin()+4);
v.clear();
cout<<"After clear: ";
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
    return 0;
}