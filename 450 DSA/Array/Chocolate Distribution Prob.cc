#include<bits/stdc++.h>
using namespace std;

int findDiff(int arr[],int n,int m)
{
    if(m==0 || n==0)
        return 0;

    int minDiff = INT_MAX;

    sort(arr,arr+n);

    if(n<m)
        return -1;

    for(int i=0;i+m-1<n;i++)
    {
        int diff = arr[i+m-1] - arr[i];
        if(diff<minDiff)
        {
            minDiff = diff;
        }
    }
    return minDiff;
}

int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findDiff(arr, n, m);
    return 0;
}
