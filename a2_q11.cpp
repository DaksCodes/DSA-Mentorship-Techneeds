#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<"enter height\n";
    cin>>h;
    int k=1;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=i; j++)
        {
           cout<<k<<" ";
           k++; 
        }
        cout<<endl;
    }
    return 0;
}
