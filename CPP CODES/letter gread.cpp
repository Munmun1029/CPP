#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int mark;

    cout<<"Enter the student marks"<<endl;

    cin>>mark;


    if (mark>100)
    {

        cout<<"Invalid marks"<<endl;
    }
    else if(mark<0)
    {

        cout<<"Invalid marks"<<endl;
    }
    else if(mark>=90)
    {

        cout<<"Student got A+"<<endl;
        cout<<"CGPA = 4.00"<<endl;
    }
    else if(mark>=85)
    {

        cout<<"Student got A"<<endl;
        cout<<"CGPA = 3.75"<<endl;
    }
    else if(mark>=80)
    {

        cout<<"Student got B+"<<endl;
        cout<<"CGPA = 3.5"<<endl;
    }
    else if(mark>=75)
    {

        cout<<"Student got B"<<endl;
        cout<<"CGPA = 3.25"<<endl;
    }
    else if(mark>=70)
    {

        cout<<"Student got C+"<<endl;
        cout<<"CGPA = 3.00"<<endl;
    }

    else if(mark>=65)
    {

        cout<<"Student got C"<<endl;
        cout<<"CGPA = 2.75"<<endl;
    }
    else if(mark>=60)
    {

        cout<<"Student got D+"<<endl;
        cout<<"CGPA = 2.5"<<endl;
    }
    else if(mark>=50)
    {

        cout<<"Student got D"<<endl;
        cout<<"CGPA = 2.25"<<endl;
    }
    else
    {

        cout<<"Student failed"<<endl;
        cout<<"CGPA = 0.0"<<endl;
    }



    getch();
}



















