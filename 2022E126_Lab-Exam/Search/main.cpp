#include <iostream>

using namespace std;

int search(int array[],int key,int low,int high){

    int i=0;
    bool found=false;


    while (!found){

        if ((high+low)%2==0){

            i = (high+low)/2;

        }
        else {

            i = (high+low-1)/2;
        }


        if (array[i] == key){

            found=true;

        }

        else if (array[i] < key){

            high=i;

        }
        else if (array[i] > key){

            low = i;

        }
        else {



        }




}
    return i;


}




int main()
{
    int array[] = {2,5,8,9,12,17,21,28,30,41};
    int key = 5;
    int low = 0;
    int high = sizeof(array)/sizeof(array[0]);
    int i=search(array,key,low,high);
    cout << "Element found in index: "<<i;




    return 0;
}
