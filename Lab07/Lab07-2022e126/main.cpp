// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
//Group: C
// Lab: 07
// Program Description: factorial of a number
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.



#include <iostream>

using namespace std;

void factorialofanumber (int n, unsigned long long *result){


            *result =1;

    for (int i=1; i<= n; ++i ){


        *result *= i;
    }
}



int main()
{
    int n;
    unsigned long long factoricalresult;

    cout<<" Enter integer number: ";
    cin>>n;

    if (n<1){

        cout<<"Please enter a integer number"<<endl;
        return 1;
    }

    factorialofanumber(n, &factoricalresult);

    cout<<factoricalresult<<" is the factorical number for " <<n;


    return 0;
}
