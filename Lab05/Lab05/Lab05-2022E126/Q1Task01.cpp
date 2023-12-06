// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
// Group: C
// Lab: 05
// Program Description: Q1 Task01
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.


#include <iostream>
using namespace std;

class Book{
public:
    string pages;
private:
    string title,author;

public:
    void displayPages(){
    cout<<"Number of Pages = "<<pages<<endl;
    }
public:
    void displayTitle(string t){
    title=t;
    cout<<"Book Title = "<<title<<endl;
    }
public:
    void displayAuthor(string t, string a){
    title=t;
    author=a;
    cout<<title<<" was written by "<<author<<endl;
    }


};

int main(){
    Book obj1;

    cout<<"Enter number of pages: ";
    cin>>obj1.pages;

    string authorinput;
    cout<<"Enter the author name: ";
    cin>>authorinput;

    string titleinput;
    cout<<"Enter the book title: ";
    cin>>titleinput;

    obj1.displayTitle(titleinput);
    obj1.displayAuthor(titleinput,authorinput);
    obj1.displayPages();

    return 0;



}
