/*

//                        DATA COLLECTION OF BOOKS 


#include<iostream>
#include<stdlib.h>

using namespace std;

struct book
{
    char Title[30];
    char Author[20];
    char Publication[30];
    int Publication_year;
    float Price;

};
int main()
{
    system("clear");
    int choice;
    book Y;
    book X ={"The Girl in Room 105","Chetan Bhagat","Westland Publications",2018,299.00};
    cout<<"Enter information of your book"<<endl;
    cout<<"------------------------------"<<endl;

    cout<<"Enter Title of your book: ";
    cin.getline(Y.Title,30);           // because cin only works one word string
    cout<<"Enter Author of your book: ";
    cin.getline(Y.Author,20);
    cout<<"Enter Publication of your book: ";
    cin.getline(Y.Publication,30);
    cout<<"Enter Publication_year of your book: ";
    cin>>Y.Publication_year;
    cout<<"Enter Price of your book: ";
    cin>>Y.Price;
    system("clear");
    
    cout<<"***INFORMATION OF BOOKS***\n";
    cout<<"1. About Book X\n";
    cout<<"2. About Book Y\n";
    cin>>choice;
    
    switch (choice)
    {
        case 1:
        cout<<" Information of book X"<<endl;
        cout<<" ----------------------"<<endl;
        cout<<"Title: "<<X.Title<<endl;
        cout<<"Author: "<<X.Author<<endl;
        cout<<"Publication: "<<X.Publication<<endl;
        cout<<"Publication year: "<<X.Publication_year<<endl;
        cout<<"Price: "<<X.Price<<endl;
        break;

        case 2:
        cout<<" Information of book Y"<<endl;
        cout<<" ----------------------\n"<<endl;
        cout<<"Title: "<<Y.Title<<endl;
        cout<<"Author: "<<Y.Author<<endl;
        cout<<"Publication: "<<Y.Publication<<endl;
        cout<<"Publication year: "<<Y.Publication_year<<endl;
        cout<<"Price: "<<Y.Price<<endl;
        break;

        default:
        cout<<"your choice is incorrect";


    }  

    return 0;

}




#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct student
{
    int rollno;
    char name[20];
    int age;
    char branch[50];
    int semester;
    float marks[10];
    char result;
};

int main()
{
    system ("clear");
    student EC01;
    cout<<"Enter Student Data\n";
    cout<<"-------------------\n";
    cout<<"Enter student roll no. : ";cin>>EC01.rollno;
    cout<<"Enter student name: ";cin.getline(EC01.name,20);
    cout<<"Enter age of student: ";cin>>EC01.age;
    cout<<"Enter branch of student: ";cin.getline(EC01.branch,50);
    cout<<"Enter semester of student: ";cin>>EC01.semester;
    cout<<"Enter marks of student: ";
    for (int i=0;i<5;i++)
    {
        cin>>EC01.marks[i];
    }
    // Total marks of obtained by student 
    for (int i=0;i<5;i++)
    {
        int total;
        total+=EC01.marks[i];
    }
    //average marks of student
    int average,total;
    average=total/(5.0);
    // Result evaluation
    if (average>=75)
    {
        EC01.result="H";
    }
    if (75>average>65)
    {
        char vresult='F';
    }
    else if (65>average>55)
    {
        char result='S';
    }
    else
    {
        char result='R';
    }

}






//                       studnents data information 

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct  students
{
    long int rollno;
    char name[30];
    char branch[50];
    float marks[10];
    char result;
    int totalmarks;
};


int main()
{
    system("clear");
    students ECE[3];
    int average,selection;
    string choice,result;
    for(int i=0;i<3;i++)
    {
        int totalmarks=0;
        cout<<"Enter data for  student "<<i+1<<" :"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Enter roll no of student: ";cin>>ECE[i].rollno;
        cin.ignore();
        cout<<"Enter name of student: ";cin.getline(ECE[i].name,30);
        cout<<"Enter branch of student: ";cin.getline(ECE[i].branch,50);
        cout<<"Enter marks of students in diffrent subjects: "<<endl;
        for (int j=0;j<5;j++)
        {
            cin>>ECE[i].marks[j];
            // total marks of  student
            ECE[i].totalmarks+=ECE[i].marks[j];
        }

        // average marks of student
        average=ECE[i].totalmarks/5;

        //result

        if (average>=75)
        ECE[i].result='H';
        else
        if (average>=65)
        ECE[i].result='F';
        else if (average>=45)
        ECE[i].result='S';
        else
        ECE[i].result='R';
        
    }
    system("clear");
    cout << "--- Do you want to see details? (yes/no) ---" << endl;
    cin>>choice;
    if (choice=="yes"){
    cout<<"whom result you want to see"<<endl;
    cout<<"1. Student 1"<<endl;
    cout<<"2. Student 2"<<endl;
    cout<<"3. Student 3"<<endl;
    cin>>selection;
    system("clear");
    switch (selection)
    {
    case 1:
    cout<<"Result of student 1:"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Roll No.: "<<ECE[0].rollno<<endl;
    cout<<"Name: "<<ECE[0].name<<endl;
    cout<<"Branch: "<<ECE[0].branch<<endl;
    cout<<"Marks in Diffrent subject: "<<endl;
    for (int j=0;j<5;j++)
    {
        cout<<ECE[0].marks[j]<<"\t";
    }
    int total;
    cout<<"\nTotal marks obtained: "<<ECE[0].totalmarks<<endl;
    cout<<"Result: "<<ECE[0].result<<endl;    
    break;

    case 2:
    cout<<"Result of student 2:"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Roll No.: "<<ECE[1].rollno<<endl;
    cout<<"Name: "<<ECE[1].name<<endl;
    cout<<"Branch: "<<ECE[1].branch<<endl;
    cout<<"Marks in Diffrent subject: "<<endl;
    for (int j=0;j<5;j++)
    {
        cout<<ECE[1].marks[j]<<"\t";
    }
    cout<<"\nTotal marks obtained: "<<ECE[1].totalmarks<<endl;
    cout<<"Result: "<<ECE[1].result<<endl;
    
    break;


    case 3:
    cout<<"Result of student 3:"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Roll No.: "<<ECE[2].rollno<<endl;
    cout<<"Name: "<<ECE[2].name<<endl;
    cout<<"Branch: "<<ECE[2].branch<<endl;
    cout<<"Marks in Diffrent subject: "<<endl;
    for (int j=0;j<5;j++)
    {
        cout<<ECE[2].marks[j]<<"\t";
    }
    cout<<"\nTotal marks obtained: "<<ECE[2].totalmarks<<endl;
    cout<<"Result: "<<ECE[2].result<<endl;
    break;


    default:
    cout<<"make apropriate option"<<endl;
    break;
    }
    }
    else if (choice=="no")
    {
        system("clear");
    }
    else
    cout<<"---make appropriate choice---"<<endl;

cout<<endl;
return 0;

}




#include<iostream>
using namespace std;
int main(){
    int exam=99;
    int *ptr;
    ptr=&exam;

    cout<<"address= "<<ptr<<endl;
    cout<<"value at address= "<<*ptr;
    cout<<endl;
    return 0;
}
*/

#include<iostream>
using namespace  std;
int main(){
    int a,b,c;
    int *ptra,*ptrb,*ptrc;
    a=23;
    b=32;
    ptra=&a;
    ptrb=&b;
    *ptra=c;
    
    cout<<"Address of a= "<<ptra<<endl;
    cout<<"Address of b= "<<ptrb<<endl;
    cout<<"Address of A= "<<*ptra<<endl;
    cout<<"Address of a= "<<c<<endl;
    
    
    return 0;
}