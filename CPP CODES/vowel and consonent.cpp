#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    char ch;


    cout<<"choose your character"<<endl;
    cin>>ch;


    ch=tolower(ch);


    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {

        cout<<" The chosen character is vowel"<<endl;
    }
    else
    {
        cout<<"The chosen character is consonant"<<endl;
    }


    getch();
}
