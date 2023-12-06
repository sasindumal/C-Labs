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

int main()
{
    double rates [] ={6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, 9.0};

    double *dispPt= rates;
    for (int i=0; i<sizeof(rates) / sizeof(rates[0]); ++i){

        cout << dispPt<<": " << *dispPt<<endl;

        dispPt++;

    }



    return 0;
}
