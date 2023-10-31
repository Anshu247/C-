// do while loop in C++

/*
syntax of do while loop
do
{
    C++ statements;
}while(condition);
*/

#include<iostream>
using namespace std;

int main()
{
    int i = 1;

    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);

    return 0;
}

