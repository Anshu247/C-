#include<iostream>
using namespace std;

// This is function prototype

int sum(int a, int b); 
void greet();

// void greet(void); // This will also work
// int sum(int, int); // This is also acceptable

int main()
{
    int num1, num2;

    cout<<"Enter the first number:- "<<endl;
    cin>>num1;

    cout<<"Enter the second number:- "<<endl;
    cin>>num2;

    // num1 and num2 are actual parameters
    cout<<"The sum is:- "<<sum(num1, num2)<<endl;
    greet();

    return 0;
}

int sum(int a, int b)
{
    // formal parameters a and b will be taking values from actual parameters num1 and num2

    int c = a + b;
    return c;
}

void greet()
{
    cout<<"Hello Good Morning"<<endl;
} 