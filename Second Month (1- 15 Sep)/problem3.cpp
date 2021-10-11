// --------------------------------------------------------------------------------------------------------------------
// 3. Find Minimum number from the stack (Don't traverse each time when min method called -> Try to do it in o(1),
// Space complexity is not an issue , use as much you want)
// ---------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include "problem1.cpp"
using namespace std;

Stack oStack(5);
Stack minStack(5);

void pushs(int item){     
      oStack.push(item);
      if (minStack.isempty())
      {
            minStack.push(item);
            
      }
      else if (item <= minStack.peek())
      {
            minStack.push(item);
      }
}

void getMin(){
      if (minStack.isempty())
            cout<<" ";
      else
            cout<<minStack.peek();
}

int main(){     
      Stack s(10);
      // pushs(10);
      pushs(12);
      pushs(14);
      pushs(15);
      // pushs(0);
      cout<<"Minimum : ";
      getMin();
      return 0;
}