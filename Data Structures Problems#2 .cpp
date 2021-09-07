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