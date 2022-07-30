#include<iostream>
#include<algorithm>
using namespace std;

int kthSmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int main()
{

    int arr[] = {4,2,6,22,66,33,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter k:";
    cin>>k;
    cout<<"element is:"<<kthSmallest(arr,n,k);
    return 0;
}
//
