//Optimal Solution : Time Complexity = O(n)  Leetcode Problem: 1679

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int getSumPair(int arr[],int n,int k)
{
    int ans=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int b = k-arr[i];
        if(m[b])
        {
            ans++;
            m[b]--;
            continue;
        }
        m[arr[i]]++;
    }
    return ans;

}

int main()
{
    int arr[] = {3,1,3,1,4,6};
    int k=6;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<getSumPair(arr,n,k);
    return 0;
}
