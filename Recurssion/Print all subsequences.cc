#include<bits/stdc++.h>
using namespace std;

void printSub(int ind,vector<int> &ds, int arr[], int n)
{
    if(ind==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        if(ds.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    printSub(ind+1, ds, arr, n);
    ds.pop_back();
    printSub(ind+1, ds, arr, n);
}
int main()
{
    int n;
    cin>>n;
    vector<int> ds;
    int arr[] = {3,1,2};
    printSub(0,ds,arr,n);
    return 0;
}
