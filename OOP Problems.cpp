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
    void show() {
        cout << "I am a invertebrate." << endl;
    }
};

// derived class
class Chordates : public Vertebrate , public Invertebrate {
   public:
    void info() {
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
    invertebrate.show();
    cout << "Chordates" << endl;
    chordates.info();
    cout << endl;
    cout<< "Showing function of each of its parent"<<endl;
    cout << "Inherit From Parent Vertebrate :" << endl;
    chordates.display();  // Parent Class function
    cout << "Inherit From Parent Invertebrate :" << endl;
    chordates.show();
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------
//Q#2 Create a class Fruits with a data member. Create two other class named BlackBerry and Oranges derived from class 
// Fruit.
// Calculate the number of BlackBerry and Oranges in the basket.
// Calculate total number of fruits in the basket.
//------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
static int orange = 0, blackberry = 0;
class Fruit_and_Vegetables{
    public:
    Fruit_and_Vegetables(){}
    void display(){
        cout<<"No. of Blackberry: "<<blackberry<<endl;
        cout<<"No. of Oranges: "<<orange<<endl;
        cout<<"Total Fruits in Basket: "<<blackberry + orange;
    }
};
class Blackberry{
    public:
    Blackberry(){
        blackberry++;
    }
};
class Orange{
    public:
    Orange(){
        orange++;
    }
};
int main(){
    Blackberry a, b, c, d;
    Orange e, f, g, h;
    Fruit_and_Vegetables basket;
    basket.display();
    return 0;
}

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
#include <math.h>
using namespace std;
class Calculator {
    double a, b;
public:
    void get() {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }
    double add() {
        return a + b;
    }
    double sub() {
        return a - b;
    }
    double mul() {
        return a * b;
    }
    double div() {
        if (b == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return a / b;
        }
    }
    double print();
};
double Calculator::print(){
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
        Calculator cal;
        switch (choice) {
        case 1:
            cal.get();
            cout << "Result: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "Result: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
}

int main()
{
    Calculator cal;
    cal.print();
};




//------------------------------------------------------------------------------------------------------------------------
// Q#5 Create a class Student with private data members: Name, Age, Marks, RollNo.
// Write a Print() function in main method to print the details of students.
//------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
 
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
    public:
        void setDisplay();
        void getDisplay();
};
 
void student::setDisplay(){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks out of 500: ";
    cin >> total;
}
 
void student::getDisplay()
{
    cout << "Name:"<< name<<endl;
    cout << "Roll Number:" << rollNo<<endl; 
    cout << "Total:" << total<<endl;
    cout<< endl;
}
 
int main()
{
    student std[10];
    int n;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(int i=0; i< n; i++){
        cout << "Enter details of student " << ":\n";
        std[i].setDisplay();
    }
     
    cout << endl;
     
    for(int j=0; j< n; j++){
        cout << "Details of student " << ":\n";
        std[j].getDisplay();
    }
    cout<<endl;
    return 0;
};
