#include<iostream>
using namespace std;
int missingNumber(int arr[], int n) 
{
    int i=0;
    while(i<=n)
    {
    for(int j=0; j<n; j++)
    {
        if(arr[j]==i)
        break;
        else if(j==n-1)
        {
            return i;
        }
    }
        i++;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int element=missingNumber(arr,n);
    cout<<element;
    return 0;
}
