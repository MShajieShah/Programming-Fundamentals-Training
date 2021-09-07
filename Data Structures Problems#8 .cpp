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
	node *front;
	public:
	Stack()
	{
		front = NULL;
	}
void push(int d)
{
	node *temp;
	temp = new node();
	temp->data = d;
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
	if(front == NULL)
		cout << "UNDERFLOW\n";
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