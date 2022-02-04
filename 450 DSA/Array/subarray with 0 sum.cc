//T.C = S.C = O(n)
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;

bool subArrayExists(int a[],int n)
{
    int sum = 0;
    unordered_set<int> sumSet;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
        if(sum==0 || sumSet.find(sum)!=sumSet.end())
        {
            return true;
        }
        sumSet.insert(sum);
    }
    return false;
}
int main()
{
    int a[] = {1,4,-2,-2,5,-4,3};
    int n = sizeof(a)/sizeof(a[0]);
    if(subArrayExists(a,n))
    {
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;
    return 0;
}

