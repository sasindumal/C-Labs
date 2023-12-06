// MALHARA R.M.Y.S

// 2022/E/126

// EC2010

//Group: C

// Lab: 02

// Program Description: [insert brief description here]

// Certificate of Authenticity:

// I certify that the code in the method function main of this project

// is entirely my own work.

#include <iostream>

using namespace std;

int main()
{
    int Balance = 100000;
    int choise;
    int withdra_amount;
    int deposit;

    cout<<"1.Check Balance"<<endl;
    cout<<"2.Withdraw Money"<<endl;
    cout<<"3.Deposit Money"<<endl;
    cout<<"4.Exit"<<endl;

    cout<<"Enter your choise (1-4):";
    cin>>choise;

    if (choise == 1){
        cout<< "Your balance: $"<<Balance<<endl;
    }
    else if (choise == 2){

        cout << "Enter the amount to withdraw:";
        cin >> withdra_amount;

        Balance = Balance - withdra_amount;

        cout<<"Withdrawal successful. Remaining balance: $"<<Balance<<endl;
    }
    else if (choise == 3){

        cout<<"Enter the amount to deposit:";
        cin>>deposit;

        Balance = Balance + deposit;

        cout<<"Deposit successful. New balance: $"<<Balance<<endl;

    }
    else if (choise == 4){

        cout<< "Exiting the ATM." <<endl;
    }


}
