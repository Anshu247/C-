#include<iostream>
using namespace std;

int main()
{
    // int marks[] = {23,45,56,89}; 
    
    int marks[4] = {23,45,56,89};
    int mathmarks[4];

    mathmarks[0] = 67;
    mathmarks[1] = 77;
    mathmarks[2] = 87;
    mathmarks[3] = 97;

    // You can change the value of an array
    marks[2] = 77;

    cout<<"These are Math Marks"<<endl;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<"These are Marks"<<endl;

    // print array values using for looop
    for(int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<"is:- "<<marks[i]<<endl;
    }


    return 0;
}