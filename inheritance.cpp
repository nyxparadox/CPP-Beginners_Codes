/*

// single level inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class empl{
    
    int eploycode;
    string name;
    int age;
    public:
    void inputdata(){
        cout<<"Enter employee name: ";getline(cin,name);
        cout<<"Enter employee code: ";cin>>eploycode;
        cout<<"Enter Empoyee age: ";cin>>age;}

    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Employee code: "<<eploycode<<endl;
        cout<<"Age: "<<age<<endl;}
};


class fulltimeempl: public empl{
    public:
    string designation;
    double salary;
    void enterdata(){
        cin.ignore();
        cout<<"Enter designation: ";getline(cin,designation);
        cout<<"Enter salary: ";cin>>salary;}

    void display(){cout<<"Designation: "<<designation<<endl;
    cout<<"salary: "<<salary<<endl;}};


int main(){
    system("clear");
    fulltimeempl E1;
    E1.inputdata();
    E1.enterdata();
    E1.displaydata();
    E1.display();
    return 0;
    }




//                      multilevel inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class empl{
    
    int eploycode;
    string name;
    int age;
    public:
    void inputdata(){
        cout<<"Enter employee name: ";getline(cin,name);
        cout<<"Enter employee code: ";cin>>eploycode;
        cout<<"Enter Empoyee age: ";cin>>age;}

    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Employee code: "<<eploycode<<endl;
        cout<<"Age: "<<age<<endl;}
};


class fulltimeempl: public empl{
    public:
    string designation;
    double salary;
    void enterdata(){
        cin.ignore();
        cout<<"Enter designation: ";getline(cin,designation);
        cout<<"Enter salary: ";cin>>salary;}

    void display(){cout<<"Designation: "<<designation<<endl;
    cout<<"salary: "<<salary<<endl;}};

    
class healthempl : public fulltimeempl{
    public:
    double height;
    float waight;
    string bloodgroup;

    void enterhealthdata(){
        cout<<"Enter height: ";cin>>height;
        cout<<"Enter waight: ";cin>>waight;
        cout<<"Enter blood group: ";cin>> bloodgroup;
    }

    void displayhealthdata(){
        cout<<"Height: "<<height<<" feet"<<endl;
        cout<<"Waight: "<<waight<<"Kg"<<endl;
        cout<<"Blood group: "<<bloodgroup<<endl;
    }

};



int main(){
    system("clear");
    healthempl E1;
    E1.inputdata();
    E1.enterdata();
    E1.enterhealthdata();
    system("clear");
    E1.displaydata();
    E1.display();
    E1.displayhealthdata();
    return 0;
    }





//                          multiple inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class empl{
    
    int eploycode;
    string name;
    int age;
    public:
    void inputdata(){
        cout<<"Enter employee name: ";getline(cin,name);
        cout<<"Enter employee code: ";cin>>eploycode;
        cout<<"Enter Empoyee age: ";cin>>age;}

    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Employee code: "<<eploycode<<endl;
        cout<<"Age: "<<age<<endl;}
};

class department{
    public:
    string dname;
    int dcode;
    string dhead;

    void enterdepartmentdata(){cin.ignore();
        cout<<"Enter department name: ";getline(cin,dname);
        cout<<"Enter department code: ";cin>>dcode;cin.ignore();
        cout<<"Enter name of department head: ";getline(cin,dhead);
    }

    void displaydepartmentdata(){
        cout<<"Department name: "<<dname<<endl;
        cout<<"Department code: "<<dcode<<endl;
        cout<<"Department head: "<<dhead<<endl;
    }
};


class fulltimeempl: public empl,public department{
    public:
    string designation;
    double salary;
    void enterdata(){
        cin.ignore();
        cout<<"Enter designation: ";getline(cin,designation);
        cout<<"Enter salary: ";cin>>salary;}

    void display(){cout<<"Designation: "<<designation<<endl;
    cout<<"salary: "<<salary<<endl;}};






int main(){
    system("clear");
    fulltimeempl E1;
    E1.inputdata();
    E1.enterdata();
    E1.enterdepartmentdata();
    system("clear");
    E1.displaydata();
    E1.display();
    E1.displaydepartmentdata();
    return 0;
    }

*/


//                      HIERARICHAL INHERITANCE 

#include<iostream>
#include<stdlib.h>
using namespace std;

class institute{
    public:
    string name;
    int nirf_ranking;
    string principal;

    void enter_institute_data(){cin.ignore();
        cout<<"Enter institute name: ";getline(cin,name);
        cout<<"Enter NIRF Ranking: ";cin>>nirf_ranking;cin.ignore();
        cout<<"Enter Institute Principal name: ";getline(cin,principal);
    }

    void display_institute_data_(){
        cout<<"Institute name: "<<name<<endl;
        cout<<"NIRF Ranking: "<<nirf_ranking<<endl;
        cout<<"Principal name: "<<principal<<endl;
    }
};

class CSE: public institute{
    public:
    string dname;
    string HOD;
    int intake;

    void enter_cse_data(){
        enter_institute_data();
        cin.ignore();
        cout<<"Enter department name: ";getline(cin,dname);
        cout<<"Enter Head of department name: ";getline(cin,HOD);
        cout<<"Enter strenght of student: ";cin>>intake;
    }

    void display_cse_data(){
        cout<<"----Institute Information---"<<endl;
        display_institute_data_();
        cout<<"-----CSE DEPARTMENT DATA-----"<<endl; 
        cout<<"Department name: "<<dname<<endl;
        cout<<"HOD name: "<<HOD<<endl;
        cout<<"Intake of Student: "<<intake<<endl;
    }
};

class ECE : public institute{
    public:
    string dname;
    string HOD;
    int intake;

    void enter_ece_data(){
        enter_institute_data();
        cin.ignore();
        cout<<"Enter department name: ";getline(cin,dname);
        cout<<"Enter Head of department name: ";getline(cin,HOD);
        cout<<"Enter strenght of student: ";cin>>intake;
    }

    void display_ece_data(){
        cout<<"---institute information---";
        display_institute_data_();
        cout<<"-----ECE DEPARTMENT DATA-----"<<endl; 
        cout<<"Department name: "<<dname<<endl;
        cout<<"HOD name: "<<HOD<<endl;
        cout<<"Intake of Student: "<<intake<<endl;
    }
};

int main(){
    system("clear");
    CSE x;
    x.enter_cse_data();
    x.display_cse_data();
    return 0;

}


