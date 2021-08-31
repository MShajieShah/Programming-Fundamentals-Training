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
    void set_value (int a,string b, string c){
            bookId = a;
            bookName = b;
            authorName = c;
        }
    void BookDetails(){
            cout<<"ID: "<<bookId<<endl<<"Book Name: "<<bookName<<endl<<"Author Name: "<<authorName;
            }  
};

class Library{
    private:
         Book book;
    public:
    void getDetails(int bookId,string bookName,string authorName){
            book.set_value(bookId,bookName,authorName);
        }
            void printDetails(){
            cout <<"Details of Book"<<endl;
            b.BookDetails(); 
            }
};
int main (){
    Library library;
    library.getDetails(1,"Beloved","Toni Morrison");
    library.printDetails();
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
    double firstvalue, secondvalue;
    
    void set_value(double fvalue, double svalue) {  
      firstvalue = fvalue;
      secondvalue = svalue;
    }  
    virtual double area()=0;  
  } ;  
       
  class rectangle : public Shape {  
    public:  
      double area() {  
        return firstvalue * secondvalue;
      }  
  };  
       
  class circle : public Shape {  
    public:  
      double area() {  
        return (3.14 * (firstvalue * firstvalue));  
      }  
  } ;  
       
int  main()  
  {  
    Shape *shape;  
    rectangle rectangle; 
    circle circle;  
    shape = &rectangle;  //returns the address
    shape->set_value(10.0, 5.0);
    cout<<"Area of Rectangle is: ";
    cout<<rectangle.area();
    cout<<endl;   
    shape = &circle;  
    shape->set_value(9.0,0);
    cout<<"Area of Circle is: ";
    cout<<circle.area();  
  }
// -------------------------------------------------------------------------------------------------------------------------
// Q#3 Create a class named as address which hold private data members named as houseNo, state, city, block.
// Create a class person which hold private data member (named as firstName and lastName) and public member function 
// (PrintDetails() which will print firstName, lastName and address of that person).Note (There is no inheritence 
// relationship between person class and address).
// -------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
class Address
{
	private:
	int houseNo;
		string state,city,block;
	public:
		Address(int house, string state, string city, string block)
		{
		    this->houseNo = house;
		    this->state = state;
		    this->city = city;
		    this->block = block;
		}
		
		int gethouseNo(){
		    return houseNo;
		    }
		 string getstate(){
		     return state;
		     }
		 string getcity(){
		     return city;
		     }
		 string getblock(){
		     return block;
		     }
		
};
class Person
{
	private:
		
		string firstname,lastname;
	public:
	Address*address;
		Person(string fname, string lname,Address*address)
		{
            	firstname = fname;
            	lastname = lname;
            	this->address=address;
		}
		void PrintDetails()
		{
			cout<<"Name: "<<firstname<<lastname<<endl<<"Address :"<<address->gethouseNo()<< "-"<<address->getblock()<<" "<<address->getcity()<<","<<address->getstate();
		}
};
int main()
{
	Address ad = Address(1,"Pakistan","Lahore","E");
	Person person = Person("Shajie","Shaukat",&ad);
	person.PrintDetails();
}


// class Address
// {
// 	private:
// 		int houseNo;
// 		string state,city,block;
	
// 	public:
// 		void AddressDetails(int house, string s, string c, string b)
// 		{
// 		    houseNo = house;
// 		    state = s;
// 		    city = c;
// 		    block = b;
// 		}
// 		void PrintAddress()
// 		{
// 		    cout<<"Address: "<<houseNo<<"-"<<block<<" "<<city<<","<<state;
// 		}
// };
// class Person
// {
// 	private:
// 	Address a;
// 		string firstname,lastname;
// 	public:
	
// 		void PersonDetails(string fname, string lname,int houseNo,string state,string city,string block)
// 		{
//             	firstname = fname;
//             	lastname = lname;
//             	a.AddressDetails(houseNo,state,city,block);
// 		}
// 		void PrintPersonDetails()
// 		{
// 			cout<<"Name: "<<firstname<<lastname<<endl;
// 			a.PrintAddress();
// 		}
// };
// int main()
// {   

// 	Person person;
// 	cout<<"Details for Person:"<<endl;
// 	person.PersonDetails("Shajie","Shaukat",1,"Pakistan","Lahore","E");
// 	person.PrintPersonDetails();
// }