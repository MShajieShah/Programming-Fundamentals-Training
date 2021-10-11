#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insert_at_head(int n)
    {
        node *temp = new node();
        temp->data = n;
        temp->next = head;
        head = temp;
    }

    void insert_at_tail(int d)
    {
        node *temp = new node();
        temp->data = d;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }

    void delete_at_head()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else
        {
            cout << "Element Deleted: " << head->data << endl;
            node *temp = head;
            head = head->next;
            delete (temp);
        }
    }

    void delete_at_tail()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else if (head->next == NULL)
        {
            cout << "Element Deleted: " << head->data << endl;
            delete (head);
            head = NULL;
        }
        else
        {
            node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            cout << "Element Deleted: " << temp->next->data << endl;
            delete (temp->next);
            temp->next = NULL;
        }
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            node *temp = head;
            cout << "Linked List: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void removeElement(int remValue)
    {
        node *prev = head;
        node *current = head->next;
        while (current != NULL)
        {
            if (current->data == remValue)
            {
                break;
            }
            else
            {

                prev = current;
                current = current->next;
            }
        }
        if (current == NULL)
        {
            cout << "Can't remove value.\n";
        }
        else
        {
            prev->next = current->next;
            delete current;
        }
    }
};

// int main() {
//     LinkedList ls;
//     ls.insert_at_head(10);
//     ls.insert_at_head(20);
//     ls.insert_at_head(30);
//     // ls.insert_at_tail(20);
//     // ls.print();
//     // ls.insert_at_tail(3);
//     // ls.insert_at_tail(4);
//     // ls.insert_at_tail(05);
//     // ls.insert_at_tail(06);
//     ls.print();
//     ls.removeElement(3);
//     // ls.delete_at_head();
//     // ls.print();
//     // ls.delete_at_tail();
//     ls.print();
//     }