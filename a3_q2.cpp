#include<iostream>
using namespace std;
int min(int arr[], int n)
{
    int min=arr[0];
    for(int i=1; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[], int n)
{
    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
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
    int minimum=min(arr,n);
    int maximum=max(arr,n);
    cout<<"the minimum and maximum are "<<minimum<<" "<<maximum<<"respectively"<<endl;
    return 0;
}
