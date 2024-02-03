#include<iostream>
using namespace std;
int peak(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(i!=n-1)
        {
            if((arr[i]>arr[i+1] ||arr[i]==arr[i+1]) && (arr[i]>arr[i-1]|| arr[i]==arr[i-1]))
               {
                   return i;
               }
        }
           if(i==n-1)
           {
               return i;
           }
           
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
    int index=peak(arr, n);
    cout<<index;
}
