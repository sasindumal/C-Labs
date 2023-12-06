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


void sumofrangular(int *sum){
    *sum = 0;

    for (int i=1; i<=5; ++i){

        *sum += i*(i+1)/2;
    }
}




int main()
{
        int sumoft;

        sumofrangular(&sumoft);

        cout<< sumoft <<" is the sum of first 5 trangular numbers";



    return 0;
}
