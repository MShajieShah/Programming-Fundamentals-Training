// -------------------------------------------------------------------------------------------------------------------------
// Q#1 Create a class named As book, having (private data members bookId, bookName, authorName) and (public member function
// BookDetails() ) in it. Which will show bookId, bookName, authorName.
// Create another class Named as Library (not inherited from book class) having public member function Print() in it. This
// print function will display the book details. Note: you can create your own data member in class Libraray if required!
// -------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
    int bookId;
    string bookName;
    string authorName;
    
    public:        
        Book(int a,string b, string c){
            bookId = a;
            bookName = b;
            authorName = c;
            }
    
    
    void BookDetails(){
            cout<<"ID: "<<bookId<<endl<<"Book Name: "<<bookName<<endl<<"Author Name: "<<authorName;
            }  
};

class Library{
            Book b = Book (1,"Beloved","Tony Morrison");
    public:
            void print(){
            cout <<"Details of Book"<<endl;
            b.BookDetails(); 
            }
};
int main (){
    Library lib;
    lib.print();
}
// -------------------------------------------------------------------------------------------------------------------------
// Q#2 Create a class shape that has one abstract method area().
// Implement this method in derived classes: Rectangle and Circle. Both classes have different formula to calculate the area
// so the implementation of area() will be different in both classes.
// In main method, if object is Rectangle, then it'll print the area of rectangle otherwise if object is circle then it'll
// print area of circle. Note:You cannot change function name in derived classes. Function name should be area() .
// -------------------------------------------------------------------------------------------------------------------------

#include <iostream>  
  using namespace std;
  class Shape {  
  public:  
    double x, y;    
    
    void set_value(double i, double j) {  
      x = i;  
      y = j;  
    }  
    virtual double area()=0;  
  } ;  
       
  class rectangle : public Shape {  
    public:  
      double area() {  
        return x *y;
      }  
  };  
       
  class circle : public Shape {  
    public:  
      double area() {  
        return (3.14 * (x * x));  
      }  
  } ;  
       
int  main()  
  {  
    Shape *p;  
    rectangle r; 
    circle c;  
       
    p = &r;  //returns the address
    p->set_value(10.0, 5.0);
    cout<<"Area of Rectangle is: ";
    cout<<r.area();
    
    cout<<endl;   
    
    p = &c;  
    p->set_value(9.0,0);
    cout<<"Area of Circle is: ";
    cout<<c.area();  
       
    return 0;  
  }
// -------------------------------------------------------------------------------------------------------------------------
// Q#3 Create a class named as address which hold private data members named as houseNo, state, city, block.
// Create a class person which hold private data member (named as firstName and lastName) and public member function 
// (PrintDetails() which will print firstName, lastName and address of that person).Note (There is no inheritence 
// relationship between person class and address).
// -------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class Address{
	private:
	int houseNo;
	string state,city,block;
    public:
    int gethouseNo(){
        return houseNo;
    }
    void sethouseNo(int n){
        houseNo = n;
    }
    string getstate(){
        return state;
    }
    void setstate(string i){
        state = i;
    }
    string getcity(){
        return city;
    }
    void setcity(string j){
        city = j;
    }
    string getblock(){
        return block;
    }
    void setblock(string k){
        block = k;
    }
};


class Person{
private:
	string firstname;
	string lastname;
public:
        Person (string a,string b){
            firstname = a;
            lastname = b;
            }
	void PrintDetails(){
        cout<<firstname<<lastname;
	}
};

int main(){  
    cout<<"Person Details"<<endl;
    cout<<"Name: ";
    Person p = Person("Shajie"," Shaukat");
    p.PrintDetails();
    cout<<endl;
    Address ad;
    ad.sethouseNo(1);
    ad.setstate("Pakistan");
    ad.setcity("Lahore");
    ad.setblock("E");
    cout<<"Address : ";
    cout<<ad.gethouseNo()<<"-"<<ad.getblock()<<" "<<ad.getcity()<<","<<ad.getstate();
    }
