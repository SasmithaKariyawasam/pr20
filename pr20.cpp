#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks>=75)
    {
        cout<<"A";
    }else if(marks>=65)
    {
        cout<<"B";
    }else if(marks>=55)
    {
        cout<<"C";
    }else if(marks>=45)
    {
        cout<<"D";
    }else
    {
        cout<<"Fail";
    }
    return 0;

}
