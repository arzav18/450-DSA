#include<iostream>
using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int last = arr[n-1];
        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-k];

        }
        arr[0]=last;
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    }
        return 0;
}

