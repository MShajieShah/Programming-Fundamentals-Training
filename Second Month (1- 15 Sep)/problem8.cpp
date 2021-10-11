// -----------------------------------------------------------------------------------------------------------------
//4. Using link list create stack 
// -----------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "problem6.cpp"
using namespace std;
class Stack
{
 public:
	LinkedList node;
	void push(int d)
	{
		node.insert_at_head(d);
	}
	void pop()
	{
		node.delete_at_head();
	}
	void display()
	{
		node.print();
	}
};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	s.pop();
	s.display();
}