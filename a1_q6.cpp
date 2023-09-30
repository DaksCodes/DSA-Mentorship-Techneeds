#include<iostream>
using namespace std;
int main()
{
     int n,i,r;
    cout<<"Enter your number\n";
    cin>>n;
    for(i=0; n>0; i++)
    {
      r=n%10;
      cout<<r;
      n=n/10;
    }   
  return 0;
}
