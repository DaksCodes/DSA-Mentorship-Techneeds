#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an odd number\n";
    cin>>num;
    for(int i=1;i<=(num+1)/2;i++)
    {
        cout<<"* "; 
    }
    for(int i=1; i<=(num/2)-1;i++)
    {
        cout<<"  "; 
    }
    cout<<"*";
    cout<<endl;
    for(int i=1; i<=(num/2)-1;i++)
    {
        for(int j=1; j<=(num/2); j++)
        {
            cout<<"  "; 
        }
        cout<<"*";
        for(int j=1; j<=(num/2)-1;j++)
        {
            cout<<"  "; 
        }
        cout<<" *"<<endl; 
    }
    for(int i=1; i<=num; i++)
    {
        cout<<"* "; 
    }
    cout<<endl;
    for(int i=1; i<=(num/2)-1; i++)
    {
        cout<<"* ";
        for(int j=1; j<=(num/2)-1;j++)
        {
            cout<<"  ";
        }
        cout<<"*"<<endl;
    }
    cout<<"*";
    for(int i=1; i<=(num/2)-1;i++)
    {
        cout<<"  "; 
    }
    for(int i=1; i<=(num+1)/2; i++)
    {
        cout<<" *"; 
    }
    return 0;
}
