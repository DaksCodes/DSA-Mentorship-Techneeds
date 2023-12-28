#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"enter height\n";
    cin>>height;
    for(int i=1; i<=height;i++)
    {
        for(int j=1; j<=height-i;j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
