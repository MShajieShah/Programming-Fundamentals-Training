// --------------------------------------------------------------------------------------------------------------------
// 3. Find Minimum number from the stack (Don't traverse each time when min method called -> Try to do it in o(1),
// Space complexity is not an issue , use as much you want)
// ---------------------------------------------------------------------------------------------------------------------

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

void getMin(){
    int i, min;
	min = stack[0];
	for(i=1;i<5;i++)
	{
	 if(stack[i]<min)
		min =stack[i];
	}
	cout<<"The Minimum value in stack is: "<<min;
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
    s.push(1);
    s.display();
    s.getMin();
}