#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char operation;
    cout<<"Enter A Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    cout<<"Choose Operation to Perform : "<<endl;
    cout<<"( + : For Adiition )";
    cout<<"\t( - : For Substraction )";
    cout<<"\t( * : For Multiplication )";
    cout<<"\t( / : For Division )";
    cout<<"\nEnter your choice : ";
    cin>>operation;
    switch(operation)
    {
    case '+':
    {
        cout<<num1+num2;
         break;
    }
    case  '-':
    {
        cout<<num1-num2;
         break;
    }
    case '/':
    {
        cout<<num1/num2;
         break;
    }
    case '*':
    {
        cout<<num1*num2;
         break;
    }
    return 0;
    }

}