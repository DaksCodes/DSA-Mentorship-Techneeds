#include<iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"enter your number\n";
    cin>>num;
    cout<<"The prime factorization is\n";
    for(int i=2; i<=num; i++)
    {
        while(num%i==0)
        { 
            cout<<i<<endl;
            num=num/i;
        }
    }
    return 0;
}
