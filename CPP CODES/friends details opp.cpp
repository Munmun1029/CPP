#include <iostream>
#include<conio.h>
using namespace std;
class Student
{
public:
    string name;
    string colour;
    string id;
    int age;
    float cgpa;

    void showDetails()
    {
        cout<<"Name ="<<name<<endl;
        cout<<"Colour ="<<colour<<endl;
        cout<<"Age ="<<age<<endl;
        cout<<"id ="<<id<<endl;
        cout<<"Cgpa ="<<cgpa<<endl;
        cout<<""<<endl;

    }
};
int main()
{

    Student s1;

    s1.name= "FARHANA YEASMIN MUNMUN";
    s1.colour=" WHITE ";
    s1.id="20-42710-1";
    s1.age=20;
    s1.cgpa=3.50;


    Student s2;


    s2.name="MUSHFIQUR RAHMAN ABIR";
    s2.colour="WHITE";
    s2.id="20-42738-1";
    s2.age=20;
    s2.cgpa=3.98;


    Student s3;

    s3.name="SAWON MURSALIN";
    s3.colour="WHITE";
    s3.id="20-42680-1";
    s3.age=21;
    s3.cgpa=3.60;

    Student s4;

    s4.name="ARFIN ISMAIL MAAHIMA";
    s4.colour="WHITE";
    s4.id="434";
    s4.age=20;
    s4.cgpa=3.5;


    s1.showDetails();
    cout<<"MY FRIEND DETAILS"<<endl ;
    cout <<""<<endl;
    s2.showDetails();
    s3.showDetails();
    s4.showDetails();


    getch();

}

