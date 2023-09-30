#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<" Enter your marks\n";
    cin>>m;
    if(m>90) { cout<<"excellent\n";}
    else if(m>80) { cout<<"good\n";}
    else if(m>70) { cout<<"fair \n";}
    else if(m>60) { cout<<"meets expectations \n";}
    else cout<<"below par\n";
    return 0;
}
