/*
//             -------EXAMPLE OF POINTER

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






//                      -----DICLARATION OF POINTER-----
#include<iostream>
using namespace  std;
int main(){
    int a,b,c;
    int *ptra,*ptrb,*ptrc;
    a=23;
    b=32;
    ptra=&a;
    ptrb= &b;
//    *ptra=c;
    
    cout<<"Address of a= "<<ptra<<endl;
    cout<<"Address of b= "<<++ptrb<<endl;
    cout<<"value of A= "<<*ptra<<endl;
    cout<<"value of A+1 = "<<++*ptra<<endl;
    
//    cout<<"Address of a= "<<c<<endl;
    
    
    return 0;
}








//              -----POINTER AND SINGLE DIMMENSIONAL ARRAY----- 


#include<iostream>
using namespace std;
int main(){
    int array[5]={5,7,13,19};
    int *ptr;
    ptr=array;
    cout<<"address of array= "<<ptr<<endl;
    cout<<"value of array (default first value)= "<<*ptr<<endl;
    cout<<"value of array (default first value)= "<<*array<<endl; // in another way of writting
    cout<<"---------------------------------------------"<<endl;
    ptr=&array[0];
    cout<<"address of array with first value address= "<<ptr<<endl;
    cout<<"address of array with first value address= "<<(array+2)<<endl;
    cout<<"value at pointer =  "<<*(array+2)<<endl;
    cout<<"value at pointer =  "<<*array<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<*ptr<<"\t";
        ptr++;
    }
    cout<<"\n";
    return 0;
}








//                 ----POINTERS AND 2 DIMENSIONAL ARRAY----- 

#include<iostream>
using namespace std;
int main(){
    int array[2][3]={{3,5,7},{9,11,13}};
    cout<<"default address of array= "<<array<<endl;
    cout<<"address of 2 array 1 element= "<<array+1<<endl;
    cout<<"address array elment A+0= "<<*array<<endl;
    cout<<"Address of A+1= "<<*(array+1)<<endl;
    cout<<"value at A[0][0]="<<*(*array)<<endl;
    cout<<"value at A[2][0]="<<*(*(array+1))<<endl;

    cout<<endl;
    return 0;
}









//                    -----SWAP TWO STRINGS----

#include<iostream>
using namespace std;
int main(){
    string s1="Mangal pandey";
    string s2="Walter whight";
    cout<<"first string = "<<s1<<endl;
    cout<<"second string = "<<s2<<endl;
    string O;
    O=s1;
    s1=s2;
    s2=O;
    cout<<"first string = "<<s1<<endl;
    cout<<"second string = "<<s2<<endl;
    cout<<endl;
    return 0;
}
*/








