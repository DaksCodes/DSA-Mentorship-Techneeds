#include<iostream>
using namespace std;
int main()
{
    int num, k;
    int div=1;
    cout<<"Enter your number\n";
    cin>>num;
    cout<<"Enter how many digits you want to rotate\n";
    cin>>k;
    for(int i=1; i<=k; i++)
    {
         div=10*div;
    }
    cout<<num%div<<num/div;
    return 0;
}
