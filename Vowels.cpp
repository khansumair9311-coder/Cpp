#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "I Am Learning Just to get a job to recover iics fees and jamia hamdard fees although i have no interest in web dev, any coding . i dont want to make career in it field because i am not a genuis and i want to run my own business . also we can say its called baniya mindset";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    cout << "No. Of Vowels In S: " << count << endl;

    return 0;
}