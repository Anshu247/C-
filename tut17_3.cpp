#include<iostream>
using namespace std;

float money_received(float current_money, float factor = 1.04)
{
    return current_money*factor;
}

int main()
{
    int money = 100000;

    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<money_received(money)<<" Rs after 1 year"<<endl;

    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<money_received(money,1.1)<<" Rs after 1 year"<<endl;

    return 0;
}