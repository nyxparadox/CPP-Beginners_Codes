/*
# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error m  essage is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}


#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    // convert input character to uppercase
    input = toupper(input);

    for(int i = 1; i <= (input-'A'+1); ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << alphabet << " ";
        }
        ++alphabet;

        cout << endl;
    }
    return 0;
}


//   PROGRAM FOR NUMBER PATTERN 


#include <iostream>
#include<stdlib.h>

using namespace std;

int main() {
  system ("clear");
  int n;
  cout<<"Enter a number: ";
  cin>>n;
    for (int i = n ; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
          cout << i;
        }
        cout <<endl;
    }
    return 0;
}


#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
  system ("clear");
  int i ,j;
  for (i=1;i<=3;i++)
  {
    cout<<" "<<endl;
    for (j=1;j<=i;j++)
    {
      cout<<"*";
    }
  }
  cout<<endl;
  return 0;
}




#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
  system ("clear");
  int i ,j;
  for (i=1;i<=3;i++)
  {
    cout<<" "<<endl;
    for (j=1;j<=3;j++)
    {
      cout<<"*";
    }
  }
  cout<<endl;
  return 0;
}


#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct book
{
char title [20];
char author [20];
char publication [10];
int pubyear;
float price;
}Y;

int main()
{
system ("clear");
book X={"OOPS", "R K Shukla", "WILEY", 2008, 250.95};
cout<<"\n\nEnter information for Y";
cout<<"\nTitle: "<<Y.title;
cout<<"Author: "<<Y.author;
cout<<"Publication: ";cin>>Y.publication;
cout<<"Publication year: ";cin>>Y.pubyear;
cout<<"Price: ";cin>>Y.price;
system ("clear");
cout<<"\n\n**The information initializes for X is **";

cout<<"\nTitle: "<<X.title;

cout<<"\nAuthor: "<<X.author;

cout<<"\nPublication: "<<X.publication;

cout<<"\nPublication year: "<<X.pubyear;

cout<<"\nPrice: "<<X.price;

cout<<"\n\n**The information entered for Y is **";

cout<<"\nTitle: "<<Y.title;

cout<<"\nAuthor: "<<Y.author;

cout<<"\nPublication: "<<Y.publication;

cout<<"\nPublication year: "<<Y.pubyear;

cout<<"\nPrice: "<<Y.price;

return 0;

}






#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct student {
    int rollno;
    char name[20];
    int age;
    char branch[50];
    int semester;
    float marks[5]; // Only taking 5 subjects
    char result;
};

int main() {
    system("clear");
    student EC01;

    cout << "Enter Student Data" << endl;
    cout << "--------------------" << endl;
    
    cout << "Enter student roll no. : ";
    cin >> EC01.rollno;
    
    cin.ignore(); // Fix for getline issue
    
    cout << "Enter student name: ";
    cin.getline(EC01.name, 20);
    
    cout << "Enter age of student: ";
    cin >> EC01.age;
    
    cin.ignore(); // Fix for getline issue
    
    cout << "Enter branch of student: ";
    cin.getline(EC01.branch, 50);
    
    cout << "Enter semester of student: ";
    cin >> EC01.semester;
    
    cout << "Enter marks of student (5 subjects): ";
    float total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> EC01.marks[i];
        total += EC01.marks[i]; // Correct accumulation of total marks
    }

    // Calculate average
    float average = total / 5.0;

    // Result evaluation
    if (average >= 75) {
        EC01.result = 'H';  // High
    } else if (average >= 65) {
        EC01.result = 'F';  // First Class
    } else if (average >= 55) {
        EC01.result = 'S';  // Second Class
    } else {
        EC01.result = 'R';  // Repeat
    }

    // Display details
    cout << "--- Do you want to see details? (yes/no) ---" << endl;
    string choice;
    cin >> choice;

    if (choice == "yes") {
        cout << "Roll No: " << EC01.rollno << endl;
        cout << "Name: " << EC01.name << endl;
        cout << "Age: " << EC01.age << endl;
        cout << "Branch: " << EC01.branch << endl;
        cout << "Semester: " << EC01.semester << endl;
        cout << "Marks in different subjects: ";
        
        for (int i = 0; i < 5; i++) {
            cout << EC01.marks[i] << " ";
        }

        cout << "\nResult: " << EC01.result << endl;

    } else if (choice == "no") {
        cout << "Exiting..." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}






#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Book class to represent each book
class Book {
private:
    string title;
    string author;
    int id;
    bool isIssued;

public:
    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isIssued = false;
    }

    void displayDetails() {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author;
        cout << (isIssued ? " [Issued]" : " [Available]") << endl;
    }

    int getId() {
        return id;
    }

    bool getIsIssued() {
        return isIssued;
    }

    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book issued successfully.\n";
        } else {
            cout << "Book is already issued.\n";
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book returned successfully.\n";
        } else {
            cout << "Book was not issued.\n";
        }
    }
};

// Library class to manage multiple books
class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title, string author) {
        books.push_back(Book(id, title, author));
        cout << "Book added successfully.\n";
    }

    void displayAllBooks() {
        for (auto &book : books) {
            book.displayDetails();
        }
    }

    void issueBook(int id) {
        for (auto &book : books) {
            if (book.getId() == id) {
                book.issueBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.getId() == id) {
                book.returnBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n2. Display All Books\n3. Issue Book\n4. Return Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> id;
                cin.ignore(); // To consume newline character
                cout << "Enter Book Title: ";
                getline(cin, title);
                cout << "Enter Book Author: ";
                getline(cin, author);
                lib.addBook(id, title, author);
                break;

            case 2:
                lib.displayAllBooks();
                break;

            case 3:
                cout << "Enter Book ID to issue: ";
                cin >> id;
                lib.issueBook(id);
                break;

            case 4:
                cout << "Enter Book ID to return: ";
                cin >> id;
                lib.returnBook(id);
                break;

            case 5:
                cout << "Exiting the system.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}




#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    // Function to calculate Area
    double area() {
        return length * breadth;
    }

    // Function to calculate Perimeter
    double perimeter() {
        return 2 * (length + breadth);
    }

    // Function to display dimensions
  //  void displayDimensions() {
  //      cout << "Length: " << length << ", Breadth: " << breadth << endl;
  //  }
};

int main() {
    double l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;

    Rectangle rect(l, b);

  //  cout << "\nRectangle Details:\n";
  //  rect.displayDimensions();
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}




#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two double numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 5 and 10 (int): " << calc.add(5, 10) << endl;
    cout << "Sum of 3.5 and 2.5 (double): " << calc.add(3.5, 2.5) << endl;
    cout << "Sum of 1, 2, and 3 (int): " << calc.add(1, 2, 3) << endl;

    return 0;
}

 




#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class for Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.draw();  // Calls Circle's draw() directly
    r.draw();  // Calls Rectangle's draw() directly

    return 0;
}
*/




#include <iostream>
#include <string>

class Dog {
public:
    std::string name;
    int age;

    // Constructor
    Dog(std::string name, int age) {
        std::cout << "Constructor called for " << name << std::endl;
        this->name = name;
        this->age = age;
    }

    // Destructor
    ~Dog() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Method to display dog's information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating objects of the Dog class
    Dog dog1("Buddy", 3);
    dog1.display();

    Dog dog2("Max", 5);
    dog2.display();

    // Objects dog1 and dog2 will be automatically destroyed when they go out of scope at the end of main()
    return 0;
}