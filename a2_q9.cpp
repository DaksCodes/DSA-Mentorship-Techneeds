#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number\n";
    cin>>num;
    int temp=num;
    int h=num/2;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=temp-2; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        temp=temp-2;
        cout<<endl;
    }
    for(int i=1; i<=h;i++)
    {
        cout<<" ";
    }
    cout<<"*"<<endl;

    for(int i=1; i<=h;i++)
    {
        for(int j=1; j<=h-i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=(2*i)-1; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}
