
#include <iostream>
#include <stdlib.h>

using namespace std;

class twoStacks {
	int* arr;
	int size;
	int top1, top2;

public:
	// Constructor
	twoStacks(int n)
	{
		size = n;
		arr = new int[n];
		top1 = n / 2 + 1;
		top2 = n / 2;
	}
	void push1(int x)
	{
		if (top1 > 0) {
			top1--;
			arr[top1] = x;
		}
		else {
			cout << "Stack Overflow"
				<< " By element :" << x << endl;
			return;
		}
	}
	void push2(int x)
	{
		if (top2 < size - 1) {
			top2++;
			arr[top2] = x;
		}
		else {
			cout << "Stack Overflow"
				<< " By element :" << x << endl;
			return;
		}
	}

	int pop1()
	{
		if (top1 <= size / 2) {
			int x = arr[top1];
			top1++;
			return x;
		}
		else {
			cout << "Stack UnderFlow";
			exit(1);
		}
	}

	int pop2()
	{
		if (top2 >= size / 2 + 1) {
			int x = arr[top2];
			top2--;
			return x;
		}
		else {
			cout << "Stack UnderFlow";
			exit(1);
		}
	}
	void display(){
	    
	    if (top1 <= size / 2|| top2 >= size / 2 + 1 )
        for(int i=0; i<size; i++){
	    cout<<arr[i];
        }
	    else
	    cout<<"There is nothing in it"<<endl;
    }
};

int main()
{
	twoStacks ts(10);
	ts.display();
    ts.push1(5);
	ts.push2(10);
	ts.push2(15);
	ts.push1(4);
	ts.push1(3);
// 	ts.push1(5);
// 	ts.push2(5);
	cout<<"Elements in array are: ";
    ts.display();
	return 0;
}

