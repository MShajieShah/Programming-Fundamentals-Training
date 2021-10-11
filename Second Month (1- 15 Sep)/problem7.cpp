// --------------------------------------------------------------------------------------------------------------------
// 2.Count of each upper case letter in word  using hash
// input -> qweABCCCas
// output hash format :  A:1,B:1,C:3 ,other:5
// ---------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <map>
using namespace std;
void count(string s)
{
    int temp, sum;
    map<char, int> m;
    map<char, int>::iterator itr;
    for (long i = 0; i < s.length(); i++)
        m[s[i]]++;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        itr->first;
        itr->second;
        if (itr->first >= 'A' && itr->first <= 'Z')
        {
            cout << itr->first << itr->second << " ";
        }
        else if (itr->first >= 'a' && itr->first <= 'z')
        {
            temp = itr->second;
            while (temp != 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
        }
    }
    cout << "Others: " << sum;
}

int main()
{
 count("ABCD123***");
}