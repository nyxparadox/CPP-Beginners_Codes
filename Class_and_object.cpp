/*
//            -------STRUCTURE OF CLASS-------

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class car{
    public:
    string Brandname;
    string modelname;
    int price;
    int year;

    void inputdata(){
        cout<<"Enter Brand Name: ";getline(cin,Brandname);
        cout<<"Enter Model Name: ";getline(cin,modelname);
        cout<<"Enter price: ";cin>>price;
        cout<<"Enter the year of launched: ";cin>>year;
    }

    void display(){
        cout<<"Brand: "<<Brandname<<endl;
        cout<<"Model: "<<modelname<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"Year: "<<year<<endl;

    }
};

int main(){
    car class_A;
    class_A.inputdata();
    system("clear");
    class_A.display();

    return 0;
}




//               -------friend function-------- 

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class car{
    public:
    string Brandname;
    string modelname;
    int price;
    int year;

    void inputdata(){
        cout<<"Enter Brand Name: ";getline(cin,Brandname);
        cout<<"Enter Model Name: ";getline(cin,modelname);
        cout<<"Enter price: ";cin>>price;
        cout<<"Enter the year of launched: ";cin>>year;
    }

    void display(){
        cout<<"Brand: "<<Brandname<<endl;
        cout<<"Model: "<<modelname<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"Year: "<<year<<endl;

    }
};

int main(){
    car class_A;
    class_A.inputdata();
    system("clear");
    class_A.display();

    return 0;
}






#include<iostream>
#include<stdlib.h>

using namespace std;
class A{
    int x=10;
    protected:
    int y=20;
    public:
    int z=30;

    friend class B;};

class B{
    int l =40;
    public:
    int m=50;
    void exp(A a){
        cout<<"Value of x= "<<a.x<<endl;
        cout<<"Value of y= "<<a.y<<endl;
        cout<<"Value of z= "<<a.z<<endl;

    }
};

int main(){
    B b;
    A a;
    b.exp(a);
    return 0;

}






#include<iostream>
#include<stdlib.h>

using namespace std;
 class emp{
    char name[20];
    int age;
    public:
    class date{
        int dd,mm,yy;
        public:
        void inputdate(){
            cin>>dd>>mm>>yy;
        }

        void displaydate(){
            cout<<dd<<"/"<<mm<<"/"<<yy;
        }
    };

    private:
    date doj;
    public:
    void inputdata(){
        cout<<"Enter employee details \n";cin.ignore();
        cout<<"Enter name: ";cin.getline(name,20);
        cout<<"Enter age: ";cin>>age;
        cout<<"Enter date of joining: ";doj.inputdate();
    }
    
    void displaydata(){
        cout<<"Employee details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Date Of Joining: ";doj.displaydate();
    }

 };

 int main(){
    system("clear");
    emp X;
    X.inputdata();
    X.displaydata();
    emp::date Y;
    cout<<"Enetr the date of birth: ";Y.inputdate();
    Y.displaydate();
    return 0;

 }
*/





//                ------ CONSTRUCTION -------
#include<iostream>
#include<stdlib.h>
using namespace std;

class sample{
    public:
    sample(int);
    sample(int,double);
    sample(int,int,int m=7);
    sample(){
        cout<<"Object is initialize"<<endl;}}; // default constructor

    sample:: sample (int n){                  // paramatrized construction
        cout<<"value of n: "<<n<<endl;}
    
    
    int main(){
        system("clear");
        sample(3);
        sample x,y,z;
        sample(3,3.59);
        sample(3,4);
        sample(3,4,11);
        return 0;}
    
    sample::sample(int n,double m){
        float x=n+m;
        cout << "Sum of your numbers: "<<x<<endl;}

    sample::sample(int n, int b, int m){
        double avg=(n+m+b)/3.0;
        cout<<"Average: "<<avg<<endl;}






