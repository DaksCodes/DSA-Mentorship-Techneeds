#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an odd number\n";
    cin>>num;
    int h=num/2;
    for(int i=0; i<=h;i++)
    {
        for(int j=1; j<=h+1-i;j++)
        {
            cout<<"*";
        }
        for(int j=1; j<=(2*i)+1;j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=h+1-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            cout<<"*";
        }
        for(int j=1; j<= 2*(h-i)+1;j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
