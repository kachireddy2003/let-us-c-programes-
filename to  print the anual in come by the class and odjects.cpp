#include<iostream>
using namespace std;

class entrepreneur
{
    int income;
    int expense;
public:
    //annual income calculation
    void aincome()
    {
        cout<< "Annual income: "<<(income - expense)*12<<endl;
    }
    //taking input
    void input()
    {
        cout<<"Enter the monthly income: ";
        cin>>income;
        cout<<"Enter the monthly expense: ";
        cin>>expense;
    }
};

int main()
{
    entrepreneur e;
    e.input();
    e.aincome();
    return 0;
}