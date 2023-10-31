//  Typecasting

#include<iostream>
using namespace std;

int main()
{
    int a = 77;
    float b = 77.67;

    cout<<"The value of a is:- "<<a<<endl;
    
    cout<<"The value of a is:- "<<(float)a<<endl;
    cout<<"The value of a is:- "<<(int)b<<endl;

    cout<<"The expression is:- "<<a + b<<endl;

    cout<<"The expression is:- "<<a + int(b)<<endl;
    cout<<"The expression is:- "<<a + (int)b<<endl;

    return 0;
}