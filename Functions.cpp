/*

//                        FINDING OF FACTORIAL  
 
// method 1:

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system ("clear");
    int num ;
    cout<<"enter the number whom you want to find factorial: ";
    cin>>num;
    void factorial (int);      // Function prototype
    factorial (num);           // Function call
    return 0 ;
        
}

void factorial (int a){
    int fact;
    for (int i = 1; i <= a; i++)
    {
    fact*=i;
    }
    cout<<"Factorial of "<<a<<"="<<fact<<endl;
}


// method 2:

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()                     // void main() is incorrect in standard c++
{
    system ("clear");
    int num ;
    cout<<"Eter the number whom you want to find factorial: ";
    cin>>num;
    long int factorial (int);                  // function prototype
    long f=factorial (num);
    cout<<"Factorial of "<<num<<"="<<f;
    cout<<endl;
    return 0 ;
}

long int factorial (int a)
{
    int fact;
    for (int i=1 ; i<=a;i++)
    {
        fact*=i;
    }
    return fact;   // int function should always return some value therefore we return fact
}




//                    AREA OF CIRCLE AND SIMPLE INTREST CALCULATOR


#include<iostream>
#include<stdlib.h>
const float pi =3.14;
using namespace std ;
int main()
{
    system("clear");
    int choice,radi;
    void display (void);
    display ();
    cout<<"\nChoice=";
    cin>>choice;
    if (choice == 1)
    {
        cout<<"Find area of circle";
        cout<<"\n--------------------";
        cout<<"\nEnter the radius of circle :";
        cin>>radi;
        void areacircle (int, const float pi);         // function prototype 
        areacircle (radi, pi  );
    }
    if (choice==2)
    {
        void SimpleIntrest (float, float, const int);
        cout<<"Find Simple Intrest";
        cout<<"\n--------------------";
        float p,r,t;
        cout<<"\nEnter Principle Amount: ";
        cin>>p;
        cout<<"\nEnter Rate of Intrest: ";
        cin>>r;
        SimpleIntrest (p,r,t=5);

    }
    return 0;
}

void areacircle (int a,const float pi )
{
    float area = (a*a)*pi;
    cout<<"Area of circle = "<<area;
    cout<<endl;
}

void SimpleIntrest(float p,float r,const int t= 5)
{
    float SI=(p*r*t)/100;
    cout<<"your calculated simple intrest = Rs "<<SI;
    cout<<endl;
}

void display (void)
{
    int choice;
    cout<<"***choose a option given below***";
    cout<<"\n1. Find Area Of Circle";
    cout<<"\n2. Find Simple Intrest";
}
*/

