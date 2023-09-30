#include <iostream>
using namespace std;
int main()
{
    int low, high;
    cout<<"This program prints all the prime numbers in an interval\n";
    cout<<"Enter the lower bound of the range\n";
    cin>>low;
    cout<<"Enter the upper bound of the range \n";
    cin>>high;

    if(low>high) { int l=high; int h=low;}
    int l=low;
    int h=high;
    cout<<"The prime numbers are \n ";
    for(int i=l; i<=h; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j==0){break;}
            else if(i%j!=0 && j==(i-1)) {cout<<i<<endl;}
        }
    }
 return 0;
}
