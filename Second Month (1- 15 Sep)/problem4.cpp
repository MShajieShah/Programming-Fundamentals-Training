// --------------------------------------------------------------------------------------------------------------------
// 4.Check for Balanced Brackets in an expression using Stack
// Input: exp = “ [ () ] {} { [ () () ] ( ) }”
// Output: Balanced
// Input: exp = “[(])”
// Output: Not Balanced
// ----------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include"problem1.cpp"
using namespace std;

bool check_expression(string expr) {
  Stack bb(10);
  char ch;
  for (int i=0; i<expr.length(); i++) {
      if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {
         bb.push(expr[i]);
         continue;
      }
      if (bb.isempty())
         return false;
      switch (expr[i]) {
          case ')':
              ch = bb.peek();
              bb.pop();
              if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}':
              ch = bb.peek();
              bb.pop();
              if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']':
              ch = bb.peek();
              bb.pop();
              if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (bb.isempty());
}
int main() {
  string expr = "[1({1}1(1)1{1(1)1}1]";
  if (check_expression(expr))
      cout << "Balanced";
  else
      cout << "Not Balanced";
}