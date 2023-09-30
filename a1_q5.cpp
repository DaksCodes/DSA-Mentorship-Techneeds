#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter your number\n";
    cin>>n;
    for(i=0; n>0; i++)
    {
      n=n/10;
    }
    cout<<"The number of digits are "<<i;
  return 0;
}
