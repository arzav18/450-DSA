#include<bits/stdc++.h>
using namespace std;

void threeWay(int arr[],int n, int a,int b)
{
    int l=0;
    int r = n-1;
    for(int i=0;i<=r;i++)
    {
        if(arr[i]<a)
        {
            swap(arr[i],arr[l]);
            l++;
        }
        else if(arr[i]>b)
        {
            swap(arr[i],arr[r]);
            r--;
            i--;
        }
    }
}

int main()
{
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
            int n = sizeof(arr)/sizeof(arr[0]);

    threeWay(arr,n,10,20);
    cout<<"array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
