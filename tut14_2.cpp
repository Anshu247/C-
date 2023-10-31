#include<iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favchar;
    float salary;
}ep;

int main()
{
    ep anshu;
    ep harshit;

    anshu.eID = 1;
    anshu.favchar = 'a';
    anshu.salary = 120000000;

    cout<<"The information of employee anshu"<<endl;

    cout<<"The anshu eID is:- "<<anshu.eID<<endl;
    cout<<"The favourite character of employee anshu is:- "<<anshu.favchar<<endl;
    cout<<"The salary of anshu is:- "<<anshu.salary<<endl;

    cout<<endl;
    cout<<"The information of employee harshit"<<endl;

    harshit.eID = 2;
    harshit.favchar = 'h';
    harshit.salary = 100000000;

    cout<<"The harshit eID is:- "<<harshit.eID<<endl;
    cout<<"The favourite character of employee harshit is:- "<<harshit.favchar<<endl;
    cout<<"The salary of harshit is:- "<<harshit.salary<<endl;

    return 0;
}