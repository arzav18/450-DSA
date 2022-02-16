#include<iostream>
using namespace std;

int sortedOrNot(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(arr[n-1]<arr[n-2])
        return 0;

    return sortedOrNot(arr,n-1);
}
int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (sortedOrNot(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}
