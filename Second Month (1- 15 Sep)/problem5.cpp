// // -------------------------------------------------------------------------------------------------------------------
// // 5.Create stack from two queues
// // -------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include "problem2.cpp"
// using namespace std;
  
//     Queue q(10);
//     Queue q1(10);
//     Queue q2(10);
//     void push(int x)
//     {
//         q2.enqueue(x);
//         while (!q1.isempty()) {
//             q2.enqueue(q1.peek());
//             q1.dequeue();
//         }
//         q = q1;
//         q1 = q2;
//         q2 = q;
//     }
//     void pop()
//     {
//         if (q1.isempty())
//             return;
//         q1.dequeue();

//     }
//   int top()
//     {
//         return q1.peek();
//     }

// int main()
// {

//     push(1);
//     push(2);
//     push(3);
//     pop();
//     pop();
//      cout<<top();
//     return 0;
// }


// -------------------------------------------------------------------------------------------------------------------
// 5.Create stack from two queues
// -------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include<queue>
  
using namespace std;
  
class Stack {
public:
    queue<int> q1, q2;
    void push(int x)
    {
        q2.push(x);
       
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
    void pop()
    {
        if (q1.empty())
            return;
        q1.pop();
    }
    int top()
    {
        return q1.front();
    }

};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}