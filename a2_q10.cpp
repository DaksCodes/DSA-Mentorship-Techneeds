#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an odd number\n";
    cin>>num;
    
    int h=num/2;
    for(int i=0; i<=num/2;i++)
    {
        for(int j=1; j<=h-i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=(2*i)-1 && j>0;j++)
        {
            cout<<" ";
        }
        if(i!=0)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=h-1; i>=0;i--)
    {
        for(int j=1; j<=h-i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=(2*i)-1 && j>0; j++)
        {
            cout<<" ";
        }
        if(i!=0)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
