// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
//Group: C
// Lab: o3
// Program Description: Lab 03
// I certify that the code in the method function main of this project
// is entirely my own work.



#include <iostream>

using namespace std;

string first_name, last_name, bg ,eligiblity ;
int age, weight;

int main()
{
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<endl;

    cout<<"Enter your last name: ";
    cin>>last_name;
    cout<<endl;

    cout<<"Enter your age: ";
    cin>>age;
    cout<<endl;

    cout<<"Enter your weight: ";
    cin>>weight;
    cout<<endl;

    cout<<"Enter your Blood group: ";
    cin>>bg;
    cout<<endl;

    if (age>30){
        eligiblity="Eligible";
    }
    else if (age<30 && weight>44){
        eligiblity="Eligible";
    }
    else if (weight<44){
        eligiblity=" NotEligible";
    }
    else if (weight>44){
        eligiblity="Eligible";
    }
    else {
        eligiblity=" NotEligible";
    }

    cout<<"First Name: "<<first_name<<endl;
    cout<<"Last Name: "<<last_name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Weight: "<<weight<<endl;
    cout<<"Blood Group: "<<bg<<endl;
    cout<<"Eligiblity: "<<eligiblity<<endl;

    return 0;
}
