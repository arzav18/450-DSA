#include<iostream>
using namespace std;

void reverseArray(int arr[],int start,int end)
{
    if(start>=end)
        return;

        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        reverseArray(arr,start+1,end-1);
}

void printArray(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]= {1,2,3,4,5,6};
    cout<<"the original array is:";
    printArray(arr,6);
    reverseArray(arr,0,5);
    cout<<"the reversed array is:";
    printArray(arr,6);
    return 0;
}
