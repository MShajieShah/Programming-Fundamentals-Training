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
// -----------------------------------------------------------------------------------------------------------------
// 2. Create a queue from array(class)
// -----------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class Queue{
  public:
  int front = -1;
  int rear =-1;
  int queue[5];
  
  void enqueue(int element)
    {
        
        if (rear == 4)
        cout<<"Queue Overflow\n";
    else
    {
    if (front == - 1)
        front = 0;
        rear++;
        queue[rear] = element;
    }
    }
    
    void display()
    {
        int i;
        if (front == - 1)
    {
        cout<<"Queue is Empty\n";
    }
        else
    {
        cout<<"Queue elements are:\n";
        for (i = front; i <= rear; i++)
        cout<<queue[i]<<" ";
    }
    }
    void dequeue(){
        if (front == -1){
            cout<<"Queue is empty";
            }
            
        else{
            cout<<"The dequeue element is: "<< queue[front] <<endl;
            front++;
            }
        }
    
};
int main(){
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.display();
q.dequeue();
q.display();
}

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

// --------------------------------------------------------------------------------------------------------------
// 1.Create link list data structure
// ---------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Node {
   public:
  int value;
  Node* next;
};

int main() {
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;

  one = new Node();
  two = new Node();
  three = new Node();

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // print the linked list value
  head = one;
  while (head != NULL) {
    cout << head->value<<" ";
    head = head->next;
  }
}

// --------------------------------------------------------------------------------------------------------------------
// 2.Count of each upper case letter in word  using hash
// input -> qweABCCCas
// output hash format :  A:1,B:1,C:3 ,other:5
// ---------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<map>

 using namespace std;

void count( string s)
{     
      int lower=0;
      map<char , int >m;
         map<char,int >::iterator itr;
      
      for(long i=0;i<s.length();i++)
        m[s[i]]++;
        
        for(itr=m.begin();itr!=m.end();itr++)
{          
            itr->first;
            itr->second;
                if(itr->first>='A' && itr->first<='Z') {
                cout<<itr->first<<itr->second<<" ";
                }
                else if(itr->first>='a' && itr->first<='z')
                {
                lower++;
                }
}
        cout<<"Others :"<<lower;
}
int main()
{
    string str = "qweABCCCas";
    count(str);
}

// -----------------------------------------------------------------------------------------------------------------
//4.Using link list create stack 
// -----------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class node
{
    public:
	int data;
	node *next;
};
class Stack
{
	node *front;  // points to the head of list
	public:
	Stack()
	{
		front = NULL;
	}
void push(int d)
{
	// creating a new node
	node *temp;
	temp = new node();
	// setting data to it
	temp->data = d;

	// add the node in front of list
	if(front == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = front;
	}
	front = temp;
}
void pop()
{
	// if empty
	if(front == NULL)
		cout << "UNDERFLOW\n";
	
	// delete the first element
	else
	{
		node *temp = front;
		front = front->next;
		delete(temp);
	}
}
int top()
{
	return front->data;
}

};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout <<"Top element before pop out from stack: "<< s.top() << endl;
    s.pop();
    cout <<"Top element after pop out from stack: "<< s.top() << endl;
    s.pop();
    cout <<"Top element after last pop out from stack: " <<s.top() << endl;  
    }