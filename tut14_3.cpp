#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;

    m1.rice = 34;
    cout<<m1.rice<<endl;

    m1.car = 'c';
    cout<<m1.car<<endl;

    m1.pounds = 77.7;
    cout<<m1.pounds<<endl;

    return 0;
}