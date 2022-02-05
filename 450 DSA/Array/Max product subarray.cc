//Optimal soln Time complexity = O(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProductSubarray(int a[],int n)
{
    long long int ans = a[0];
    long long int ma=ans;
    long long int mi=ans;
    for(int i=1;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(ma,mi);
        }
        ma=max(1ll*a[i],ma*a[i]);
        ma=min(1ll*a[i],mi*a[i]);
        ans = max(ans,ma);
    }
    return ans;
}

int main()
{
    int a[] = {6,-3,-10,0,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<maxProductSubarray(a,n);
    return 0;
}
