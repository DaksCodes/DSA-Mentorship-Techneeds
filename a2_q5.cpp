#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an odd number\n";
    cin>>num;
    int h=num/2;
    for(int i=1; i<=h;i++)
    {
        cout<<" ";
        for(int j=1; j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=(2*i)-1; k++)
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
        for(int j=1; j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=num-2; k>=1; k-- )
        {
            cout<<"*";
            
        }
        cout<<endl;
        num=num-2;
    }
    return 0;
}
