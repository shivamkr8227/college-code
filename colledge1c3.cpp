//* * * * *
//* * * * 
//* * * 
//* * 
//* 
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<"Diagram is "<<endl;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}