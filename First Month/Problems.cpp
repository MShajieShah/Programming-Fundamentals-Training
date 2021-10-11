// -------------------------------------------------------------------------------------------------------
// Problem 1:
// Create a function that takes a string, checks if it has the same number of x's and o's and returns
// either true or false.
// Return a boolean value (true or false).
// Return true if the amount of x's and o's are the same.
// Return false if they aren't the same amount.
// The string can contain any character.
// When "x" and "o" are not in the string, return true.
// --------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
bool xoequal(string s)
{
    int x = 0;
    int o = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s.at(i) == 'x' ? x++ : o++;
    }
    return x == o ? true : false;
}
int main()
{
    cout << xoequal("xoxoxo");
    cout << xoequal("zoxzoo");
    cout << xoequal("oozz");
    cout << xoequal("zpzpzpz");
}

// -------------------------------------------------------------------------------------------------------
// Problem 2:
// Given two strings comprised of + and -, return a new string which shows how the two strings
// interact in the following way:
// When positives and positives interact, they remain positive.
// When negatives and negatives interact, they remain negative.
// But when negatives and positives interact, they become neutral, and are shown as the number 0.
// Worked Example
// neutralise("+-+", "+--") ➞ "+-0"
// Compare the first characters of each string, then the next in turn.
// "+" against a "+" returns another "+".
// "-" against a "-" returns another "-".
// "+" against a "-" returns "0".
// Return the string of characters.
// --------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
string neutralise(string a, string b)
{
    string s = "";
    if (a.length() != b.length())
    {
        return "both string should be equal";
    }
    for (int i = 0; i < a.length(); i++)
    {
        a.at(i) == b.at(i) ? s += b.at(i) : s += "0"; //+= adds the value of right operand and save result to the left
    }
    return s;
}

int main()
{
    cout << neutralise("--++--", "++--++") << endl;
    cout << neutralise("-+-+-+", "-+-+-+") << endl;
    cout << neutralise("-++-", "-+-+") << endl;
}

// -------------------------------------------------------------------------------------------------------
// Problem 3:
// Create a function that takes a string as an argument and converts the first character of each word to
// uppercase. Return the newly formatted string.
// Examples
// makeTitle("This is a title") ➞ "This Is A Title"
// makeTitle("capitalize every word") ➞ "Capitalize Every Word"
// makeTitle("I Like Pizza") ➞ "I Like Pizza"
// makeTitle("PIZZA PIZZA PIZZA") ➞ "PIZZA PIZZA PIZZA"
// --------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
string makeTitle(string a)
{
    for (int x = 0; x < a.length(); x++)
    {
        if (x == 0)
        {
            a[x] = toupper(a[x]);
        }
        else if (a[x - 1] == ' ')
        {
            a[x] = toupper(a[x]);
        }
    }

    return a;
}

int main()
{

    cout << makeTitle("pIZZa  pIZZa pIZZa");

    return 0;
}

// -----------------------------------------------------------------------------------------------------
// Problem 5:
// Create a function that takes a string and returns a string in which each character is repeated once.
// Examples
// doubleChar("String") ➞ "SSttrriinngg"
// doubleChar("Hello World!") ➞ "HHeelllloo WWoorrlldd!!"
// doubleChar("1234!_ ") ➞ "11223344!!__ "
// ----------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
void doubleChar(string a)
{
    char arr[a.length() * 2];
    for (int i = 0; i < a.length(); i++)
    {
        char val = a.at(i);
        arr[i * 2] = val;
        arr[i * 2 + 1] = val;
    }
    int arrSize = sizeof(arr);
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    doubleChar("String");
    doubleChar("Hello World!");
    doubleChar("1234!_ ");
}
//----------------------------------------------------------------------------------------------------
// Given an array of numbers, representing the height of a mountain in certain intervals, return
// whether this mountain is scalable.
// A mountain can be considered scalable if each number is within 5 units of the next number in either
// direction.
//-----------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9, 1, 4, 6, 7, 8};
        //arr={1,2,4,6,7,8}
        // arr = {9,16,2,8}
    int n;
    if ((arr[0] - arr[1] < 5) && (arr[2] - arr[3] < 5) && (arr[4] - arr[5] < 5))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}