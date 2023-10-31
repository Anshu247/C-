//There are two types of header files

//1. System header files: It comes with the compiler
#include<iostream>

//2. User defined header files. It is written by the programmer
#include "a.h"

using namespace std;

int main()
{
    int a=10, b=2;

    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;

    cout<<endl;

    // Arithmetic Operators
    cout<<"The value of a+b is:- "<<a+b<<endl;
    cout<<"The value of a-b is:- "<<a-b<<endl;
    cout<<"The value of a*b is:- "<<a*b<<endl;
    cout<<"The value of a/b is:- "<<a/b<<endl;
    cout<<"The value of a%b is:- "<<a%b<<endl;
    cout<<"The value of a++ is:- "<<a++<<endl;
    cout<<"The value of a-- is:- "<<a--<<endl;
    cout<<"The value of ++a is:- "<<++a<<endl;
    cout<<"The value of --a is:- "<<--a<<endl;
    
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    int h = 7, k = 5;
    char c = 'A';

    cout<<endl;

    // Comparison Operators
    cout<<"The value of a==b is:- "<<(a==b)<<endl;
    cout<<"The value of a!=b is:- "<<(a!=b)<<endl;
    cout<<"The value of a>b is:- "<<(a>b)<<endl;
    cout<<"The value of a<b is:- "<<(a<b)<<endl;
    cout<<"The value of a<=b is:- "<<(a<=b)<<endl;
    cout<<"The value of a>=b is:- "<<(a>=b)<<endl;

    cout<<endl;

    // Logical Operators
    cout<<"The value of this logical and operator is:- ((a==b) && (a<b)) is:- "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator is:- ((a==b) || (a<b)) is:-  "<<((a==b) || (a>b))<<endl;
    cout<<"The value of this logical not operator is:- !((a==b)) is:-  "<<(!(a==b))<<endl;

    cout<<endl;

    return 0;
}