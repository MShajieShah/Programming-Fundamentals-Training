//---------------------------------------------------------------------------------------------------------------
// Q#1 Create two classes named Vertebrate and Invertebrate. Create another class named Chordates which inherits
// both the above classes. Now, create a function in each of these classes which prints "I am vertebrate", "I am
// a invertebrate" and "I belong to both the categories: vertebrate as well as invertebrate" respectively. Now, 
// create an object for each of the above class and try calling
// 1 - function of vertebrate by the object of vertebrate.
// 2 - function of invertebrate by the object of invertebrate
// 3 - function of chordates by the object of chordates
// 4 - function of each of its parent by the object of chordates
//---------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

// base class
class Vertebrate {
  public:
    void display() {
        cout << "I am an vertebrate." << endl;
    }
};

// base class 2
class Invertebrate {
  public:
    void display() {
        cout << "I am a invertebrate." << endl;
    }
};

// derived class
class Chordates : public Vertebrate , public Invertebrate {
  public:
    void display() {
        cout << "I  belong to both the categories: vertebrate as well as invertebrate" << endl;
    }
};

int main() {
    
    
    Vertebrate vertebrate;
    Invertebrate invertebrate;
    Chordates chordates;
    cout << "Vertebrate" << endl;
    vertebrate.display();
    cout << "Invertebrate" << endl;
    invertebrate.display();
    cout << "Chordates" << endl;
    chordates.display();
    cout << endl;
    cout<< "Showing function of each of its parent"<<endl;
    cout << "Inherit From Parent Vertebrate :" << endl;
    chordates.Vertebrate::display();  // Parent Class function
    cout << "Inherit From Parent Invertebrate :" << endl;
    chordates.Invertebrate::display();// Parent Class function
}

//------------------------------------------------------------------------------------------------------------------------
//Q#2 Create a class Fruits with a data member. Create two other class named BlackBerry and Oranges derived from class 
// Fruit.
// Calculate the number of BlackBerry and Oranges in the basket.
// Calculate total number of fruits in the basket.
//------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
class Fruits
{
public:
    static int noOfFruits;
    Fruits(){
    noOfFruits++;
     
    }
      void display(){
        cout<<"Total Fruits in Basket: "<<noOfFruits;
    }
};
int Fruits::noOfFruits=0;
class Orange: public Fruits
{
public:
    static int orange;
    Orange(){
     orange++;
        
    }
    void display(){
        cout<<"Total Orange in Basket: "<<orange<<endl;
    }
};
int Orange::orange=0;
class Blackberry: public Fruits
{
public:
    static int blackberry;
    Blackberry(){
      blackberry++;
        
    }
    void display(){
        cout<<"Total blackberry in Basket: "<<blackberry<<endl;
    }
};
int Blackberry::blackberry=0;
int main()
{
    Orange a,b,c;
    a.display();
    Blackberry e,f,g;
    e.display();
    e.Fruits::display();    // parent function calling through child class
   return 0;
};
//------------------------------------------------------------------------------------------------------------------------
// Q#3 Create a class animal with a function animalSound() that prints "The animal makes a sound".
// Create another class Pig inherit from Animal with a function animalSound() that prints "The pig says:Wee Wee".
// Create another class Dog inherit fromAnimal with a function animalSound() that prints "The Dog Says: Bow Wow".
// In the main function, if Animal is pig then function animalSound() of pig class should be called otherwise if Animal 
// is Dog then function animalSound() of Dog class should be called.
//------------------------------------------------------------------------------------------------------------------------

#include <iostream> 
using namespace std;
//Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
};


//------------------------------------------------------------------------------------------------------------------------
// Q#4 Create a Class calculator with functions Add(), Subtract(), Multiply(), Divide() and print their results 
// using Print() function.
//------------------------------------------------------------------------------------------------------------------------ 
#include <iostream>
#include<math.h>
using namespace std;
class Calculator
{
    int a;
    int b;
public:
    Calculator(int x,int y)
    {
        a=x;
        b=y;
    }
    double addition() { 
        return a + b;
        }
    double subtraction() { 
        return a - b;
        }
    double multiply() {
        return a * b;
        }
    double division() {
        if (b == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return a / b;
        }
    }
    void print(){
        int choice;
    cout << "Enter 1 Add 2 Numbers"
        << "\nEnter 2 Subtract 2 Numbers"
        << "\nEnter 3 Multiply 2 Numbers"
        << "\nEnter 4 Divide 2 Numbers"
        << "\nEnter 0 To Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
        
            cout << "Result: " << addition() << endl;
            break;
        case 2:
        
            cout << "Result: " << subtraction() << endl;
            break;
        case 3:

            cout << "Result: " << multiply() << endl;
            break;
        case 4:

            cout << "Result: " << division() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    }
};
int main()
{   
    double i ,j;
    cout<<"Enter 1 st number";
    cin>>i;
    cout<<"enter 2nd number ";
    cin>>j;
    Calculator cal(i,j);
    cal.print();
};

//------------------------------------------------------------------------------------------------------------------------
// Q#5 Create a class Student with private data members: Name, Age, Marks, RollNo.
// Write a Print() function in main method to print the details of students.
//------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int rollno;
    int total;
    public:
    string getName(){
        return name;
    }
    void setName(string n){
        name = n;
    }
    int getRoll(){
        return rollno;
    }
    void setRoll(int i){
        rollno = i;
    }
    int getTotal(){
        return total;
    }
    void setTotal(int j){
        total = j;
    }
};
int main(){
    Student std;
    std.setName("abc");
    std.setRoll(1);
    std.setTotal(325);
    cout<<"Name: ";
    cout<<std.getName()<<endl;
    cout<<"Roll No.:" ;
    cout<<std.getRoll()<<endl;
    cout<<"Total Marks: ";
    cout<<std.getTotal();
}