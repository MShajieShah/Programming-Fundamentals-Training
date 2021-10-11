// ----------------------------------------------------------------------------------------------------------------------
// 2. Create a queue from array(class)
// ----------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class Queue{
 private:
//   int front = -1;
//   int rear =-1;
  int *queue_arr;
  int size;
  public:
    int front = -1;
    int rear =-1;
    Queue(int n)
    {
        size = n;
        queue_arr = new int [size];
    }
  
  void enqueue(int element)
    {
        
    //     if (rear == 10)
    //     cout<<"Queue Overflow\n";
    // else
    // {
    if (front == - 1)
        front = 0;
        rear++;
        queue_arr[rear] = element;
    // }
    }
    void dequeue(){
        if (front == - 1 || front > rear){
            cout<<"Queue is Empty\n";
        }
        else{
            cout<<"The dequeue element is: "<< queue_arr[front] <<endl;
            front++;
        }
    }

    int top()
    {
        return queue_arr[front];
    }

    int display()
    {
        int i;
        if (front == - 1|| front > rear)
    {
        return false;
    }
        else
    {
        // cout<<"Queue elements are:\n";
        for (i = front; i <= rear; i++)
        cout<< queue_arr[i] <<" ";
        return true;
    }
    
    }
        bool isempty()
    {
        if (front == -1 || rear == -1)
        {
            return false;
        }
        else
            return true;
    }
    int peek()
    {
        if (front < 0)
        {
            cout << "queue is Empty";
            return 0;
        }
        else
        {
            return queue_arr[front];
        }
        
    }
    
};
// int main(){
// Queue q(5);{
// q.enqueue(10);
// q.enqueue(20);
// q.enqueue(30);
// q.enqueue(40);
// q.display();
// q.dequeue();
// q.dequeue();
// q.dequeue();
// q.dequeue();
// q.dequeue();}

// }