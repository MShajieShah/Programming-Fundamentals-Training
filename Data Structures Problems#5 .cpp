// -------------------------------------------------------------------------------------------------------------------
// 5.Create stack from two queues
// -------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include<queue>
  
using namespace std;
  
class Stack {
public:
    queue<int> q1, q2;
    int n;
    Stack()
    {
        n = 0;
    }
    void push(int x)
    {
        q2.push(x);
        n++;
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
        n--;
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return n;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "current size: " << s.size()<< endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << "current size: " << s.size()<< endl;
    return 0;
}