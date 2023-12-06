// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
//Group: C
// Lab: Lab 01: Program Structure
// Program Description: when user entered the number of sports balls items he has, the code will calculate the total weight of user's basket.
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.



#include <iostream>
#include <string>

using namespace std;

int main()
{
    float WGBall, WFBall, WVBall, WRBall, WBasket;
    WGBall = 0.15;
    WFBall = 0.5;
    WVBall = 0.6;
    WRBall = 0.8;

    string name;
    int GBall, FBall, VBall, RBall;

    cout << "Please provide your name: " << endl;
    cin >> name;

    cout << "How many General balls do you have? " << endl;
    cin >> GBall;

    cout << "How many Foot Balls do you have? " << endl;
    cin >> FBall;

    cout << "How many Volley Balls do you have? " << endl;
    cin >> VBall;

    cout << "How many Rugby Balls do you have? " << endl;
    cin >> RBall;

    WBasket = WGBall * GBall + WFBall * FBall + WRBall * RBall + WVBall * VBall;

    cout << " Your basket’s weight is " << WBasket << " Kg" << endl;

    return 0;
}

