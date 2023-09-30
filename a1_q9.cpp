#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter two numbers\n";
    cin>>num1>>num2;
    int h=max(num1,num2);
    int l=min(num1,num2);
    //computing hcf
    for(int i=l; i>=1; i--)
    {
        if(l%i==0 && h%i==0)
        {
            cout<<"HCF is "<<i<<endl;
            break;
        }
    }
    //computing lcm
    for(int i=h; ; i++)
    {
        if(i%l==0 && i%h==0)
        {
            cout<<"LCM is "<<i<<endl;
            break;
        }
    }
    return 0;
}
