#include<iostream>
using namespace std;

// Call by reference using C++ reference variables
int & swap_reference_var(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return a;
}

int main()
{
    int x = 4, y = 5;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap_reference_var(x,y) = 766;
    cout<<"After swap the value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}