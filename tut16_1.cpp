#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap the value of a and b
// int swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// Call by reference using pointers
int swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{   
    int x = 4, y = 5;
    cout<<"The sum of 4 and 5 is:- "<<sum(x,y)<<endl;

    cout<<"The value of x is "<<x<<" and the value of b is "<<y<<endl;

    // swap(x,y); //This will not swap the values of a and b
    swap_pointer(&x,&y);
    cout<<"After swapping the value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}