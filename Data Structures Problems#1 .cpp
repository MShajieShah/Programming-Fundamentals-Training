// ------------------------------------------------------------------------------------------------------------------
// 1. Create a stack from array (class) (push , pop , top, is empty ....)
// ------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Stack{
    public:
    int stack[5], top=-1;
void push(int a) {
  if(top>=4)
  cout<<"Stack is full"<<endl;
  else {
      top++;
      stack[top]=a;
  }
}
void pop() {
  if(top<=-1)
  cout<<"There is no element remaining in stack"<<endl;
  else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
  }
}
void peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
    }
    else {
        int x = stack[top];
        cout<<"The last element in the Stack is: ";
        cout<<x<<endl;
    }
}
boolean isempty(){
if(top == -1)
cout<<"Stack is Empty: ";
else
return false;
}
void display() {
  if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
  } else
  cout<<"Stack is empty";
}
};
int main() {
    Stack s;
    s.push(10);
    s.push(12);
    s.push(14);
     s.push(10);
    s.push(12);
    s.push(14);
    s.peek();
    s.display();
    s.pop();
    s.display();
}