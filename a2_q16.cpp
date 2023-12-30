#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<"enter height\n";
    cin>>h;
    int temp=h;
    int s=(2*h)-3;
    for(int i=1; i<=h;i++)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        for(int k=1; k<=s;k++)
        {
            cout<<" ";
        }
        int k;
        if(i==h)
        {
            k=j-2;
        }
        else{
            k=j-1;
        }
        while(k>=1)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        s=s-2;
    }
    return 0;
}
