/*

//                      SUM OF N GIVEN NUMBER (without array)

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system ("clear");
    int n,s,sum;
    cout<<"Enter number of elements: ";
    cin>>n;
     for (int i=1; i<=n;i++)
     {
        cout<<"Enter your "<<i<<" number: ";
        cin>>s;
        sum+=s;

     }
    cout<<"Sum = "<< sum;
    cout<<endl;
    return 0; 
}



//                    FINDING SUM OF N NUMBERS ( BY USING ARRAY)

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system ("clear");
    int n,sum;
    cout<<"Enter number of elements: ";
    cin>>n;
    int ListofNum[n];
    for (int i=1;i<=n;i++)
    {
        cout<<"Enter ListofNum["<<i-1<<"] = ";
        cin>>ListofNum[i-1];
        sum+=ListofNum[i-1];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    cout<<"**display of content***"<<endl;
    cout<<"-----------------------"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<ListofNum[i]<<", ";
    }
    cout<<endl;
    return 0;
}

*/

//            GREATEST AND SMALLEST NUMBER AMONG INPUT DATA



#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    system ("clear");
    float X[10];
    int i, num;
    cout<<"Enter the size of array:  \n";
    cin>>num;
    
    cout<<"Enter array elememts \n";
    for (i=0;i<num;i++)
    cin>>X[i];

    int maxmin(float [], int);
    int max = maxmin(X,num);
    cout<<"\nThe greatest element in the array is: "<<max;

    return 0;
}

int maxmin (float X[], int n)
{
    float max =0,min=X[0];
    for (int i=0;i<n;i++)
    {
        if (max<X[i])
            max=X[i];
        if (min>X[i])
            min=X[i];
    }
    cout<<"\n\nThe smallest element in the array is: "<<min;
    return (max);

}