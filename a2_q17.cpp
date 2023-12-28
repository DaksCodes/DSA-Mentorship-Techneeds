#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter height\n";
    cin>>num;
    int h=num/2;
    
    for(int i=1; i<=h; i++)
    {
        for(int k=1;k<=h;k++)
    {
        cout<<" ";
    }
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=num; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    for(int i=1; i<=h; i++)
    {
        for(int k=1;k<=h;k++)
    {
        cout<<" ";
    }
        for(int j=1; j<=1+h-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
