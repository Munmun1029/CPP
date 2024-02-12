#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int year;

    cout <<"Enter a year"<<endl;
    cin>>year;

    if(year%4==0&&year%100!=0)
    {
        cout <<"year is leap year"<<endl;
    }


    else if(year%400==0)
    {
        cout <<"year is leap year"<<endl;
    }

    else
    {
        cout<<"year is not leap year"<<endl;
    }


    getch();
}
