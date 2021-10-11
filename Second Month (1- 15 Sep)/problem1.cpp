// ------------------------------------------------------------------------------------------------------------------
// 1. Create a stack from array (class) (push , pop , top, is empty ....)
// ------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int *stack_arr;
    int top = -1;

public:
    Stack(int n)
    {
        size = n;
        stack_arr = new int[size];
    }

    void push(int a)
    {
        if (top >= size-1)
            cout << "Stack is full" << endl;
        else
        {
            top++;
            stack_arr[top] = a;
        }
    }
    int pop()
    {
        if (top <= -1){

            cout << "There is no element remaining in stack" << endl;
           return 0;
        }


        else{
            
            int a;
            a = stack_arr[top];
            top--;
            return a;
        }
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
        }
        else
        {
            return stack_arr[top];
        }
        return 0;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
    void display()
    {
        if (top >= 0)
        {
            for (int i = top; i >= 0; i--)
                cout << stack_arr[i] << " ";
            cout << endl;
        }
        else
            cout << "Stack is empty";
    }
};
// int main()
// {
//     Stack s(10);
//     s.push(10);
//     s.push(12);
//     s.push(14);
//     s.push(10);
//     s.push(12);
//     s.push(14);
//     s.push(14);
//     s.push(14);
//     s.push(14);
//     s.push(133);

// // //     cout << s.isempty();
// //     cout << "Top Element is: ";
// //     cout << s.peek();
// //     cout << "Stack elements are: ";
//     s.display();
// cout<<"Pop Elements";
//     cout<<s.pop();
// //     cout << "Stack elements are:";
// //     s.display();
// }