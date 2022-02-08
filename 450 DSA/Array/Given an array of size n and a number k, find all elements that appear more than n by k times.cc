#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void printElements(int arr[],int n,int k)
{
    int x = n/k;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]+=1;
    }
    for(int it=0;it<mp.size();it++)
    {
        if(mp[it]>x)
            cout<<(it)<<endl;
    }
}

int main()
{
        int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
        int n = sizeof(arr)/sizeof(arr[0]);
        int k =4;
        printElements(arr,n,k);
        return 0;
}
