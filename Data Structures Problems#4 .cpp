// --------------------------------------------------------------------------------------------------------------------
// 4.Check for Balanced Brackets in an expression using Stack
// Input: exp = “ [ () ] {} { [ () () ] ( ) }”
// Output: Balanced
// Input: exp = “[(])”
// Output: Not Balanced
// ----------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
using namespace std;

int matchingPair(char a, char b)
{
    if(a=='{' && b=='}')
        return 1;
    else if(a=='[' && b==']')
        return 1;
    else if(a=='(' && b==')')
        return 1;
    else
        return 0;
}
void check_expression(string s){
    
    stack<char> st;
        for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        } 
        else if (st.empty() || !matchingPair(st.top(),s[i]))
        {
            cout<<"Not Balanced";
            break;
        } 
        else {
            st.pop();
        }
    }
    
    if(st.empty())
        cout<<"Balanced";
}

int main()
{
    check_expression("[(])");

}