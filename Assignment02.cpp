/*

// Question:1

//                  Circumference and Area of the circle

#include<iostream>

using namespace std;
const float pi= 3.14;

void area(float a)
{
    cout<<a*a*pi;
}

void circumfrence(float a)
{
    cout<<2*pi*a;
}

int main()
{
    float radii;
    cout<<"***CIRCUMFRENCE AND AREA OF CIRCLE***"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Enter the Radius of the circle: ";cin>>radii;
    cout<<"\nCircumfrence= ";circumfrence(radii);
    cout<<"\nArea= ";area(radii);
    cout<<endl;
    
    return 0;
}




// Question: 2
//        average of first n +ve numbers added by user

#include<iostream>

using namespace std;

int main()
{
    double avrg,num,sum=0;
    cout<<"Enter your 10 numbers: ";
    for (int i=1;i<=10;i++)
    {
        cin>>num;
        sum+=num;
        avrg=sum/10;
    }
    
//    cout<<"sum= "<<sum<<endl;
    cout<<"average of your number= "<<avrg;
    cout<<endl;

    return 0;
}




//Question: 3

//                     swap 2 numbers

#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main ()
{
    int x,y;
    cout<<"Enter your first number: ";cin>>x;
    cout<<"Enter your second number: ";cin>>y;
    cout<<"____________________________\n";
    cout<<"original value of x before swap= "<<x<<endl;
    cout<<"original value of y before swap= "<<y<<endl;
    swap(x,y);
    cout<<"Value of X after swap= "<<x<<endl;
    cout<<"Value of Y after swap= "<<y<<endl;

    return 0;

}



//Question: 4
//                    sum of array elements

#include<iostream>

using namespace std;
int main()
{
    int sum=0, array[5]={2,3,5,7,11};
    for (int i=0;i<5;i++)
    {
        sum+=array[i];
    }
    cout<<"sum of array elements= "<<sum<<endl;

    return 0;
}



// Question: 5
//             +,-,x,/, of two numbers by menu form

#include<iostream>

using namespace std;

int main()
{
    int choice,x,y,sum,minus,Rem,Mul;

    cout<<"----Choose from given option----"<<endl;
    cout<<"_________________________________"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Modulus"<<endl;

    cout<<"choice: ";cin>>choice;

    cout<<"Enter your first number: ";cin>>x;
    cout<<"Enter your Second  number: ";cin>>y;


    switch(choice)
    {
        case 1:
        sum=x+y;
        cout<<"Sum of your Number= "<<sum;
        break;

        case 2:
        minus=x-y;
        cout<<"Subtraction of your Number= "<<minus;
        break;

        case 3:
        Mul=x*y;
        cout<<"Multiplication of your Number= "<<Mul;
        break;

        case 4:
        {
        //float x,y;
        double Div,x,y;
        Div=x/y;
        cout<<"Division of your Number= "<<Div;
        break;
        }

        case 5:
        Rem=x%y;
        cout<<"Remainder of your numbers= "<<Rem;
        break;

        default:
        cout<<"note: choice is incorrect !!"<<endl;
        break;

    }
    cout<<endl;
    return 0;
}




//Question: 6
//                       Factorial of n number


#include<iostream>
using namespace std;
void factorial(int x){
    int f=1;
    for (int i=1;i<=x;i++){
        f*=i;        
    }
    cout<<f;
}
int main(){
    int num;
    cout<<"Enter a number: ";cin>>num;
    if (num<0){
    cout << "Factorial is not defined for negative numbers."<<endl;}
    else
    {
    cout<<"Factorial of "<<num<<" = ";factorial(num);
    }
    cout<<"\n";
    return 0;    
}





//Question: 7
//                Prime number or not

#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
system("clear");
int num ,i,j=0;
cout<<"enter number: ";cin>>num;
for(i=1;i<=num;i++)
{
if(num%i==0)
{
j++;
}
}
if(j==2)
cout<<"\n"<<num<<" is a prime number. \n";
else
cout<<num<<" is not a prime number . \n";
return 0;
} 
*/


// questio: 8
//             data store of student by structure


#include<iostream>
#include<stdlib.h>

using namespace std;

struct Student
{
    int Rollno;
    char name[20];
    int age;
    char address[50];

    void inputdata(){
        cout << "Enter Student Roll No.: ";cin >> Rollno;
        cin.ignore(); // To ignore any leftover newline character
        cout << "Enter Name of Student: ";cin.getline(name, 20);
        cout << "Enter Age of Student: ";cin >> age;
        cin.ignore(); // To ignore any leftover newline character
        cout << "Enter Address of Student: ";cin.getline(address, 50);
    }

    void displayname_age14(){
        if (age == 14) {
            cout << "Name: " << name << endl;
        }
    }

    void displayname_evenrollno(){
      if (Rollno%2==0){
        cout << "Name: "<< name << endl;
      }
    }
};

int main() {
    system("clear");
    int num_students;
    cout<<"Number of students: ";cin>>num_students;
      Student S[num_students];  // Declare array of students

    for (int i = 0; i < num_students; i++) {
        cout << "-----Data for Student " << i + 1 << "-----" << endl;
        S[i].inputdata();
    }

    // Display names of students aged 14
    cout << "\nStudents with age 14:\n";
    for (int i = 0; i < num_students; i++) {
        S[i].displayname_age14();
    }

    //Display name of students having even roll no.
    cout<<"\nStudents with even Roll Number:\n";
    for (int i =0; i< num_students; i++){
      S[i].displayname_evenrollno();
    }

    return 0;
}


