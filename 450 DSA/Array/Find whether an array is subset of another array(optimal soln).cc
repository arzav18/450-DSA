#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[],int arr2[],int m,int n)
{
    map<int,int> frequency;
    for(int i=0;i<m;i++)
    {
        frequency[arr1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(frequency[arr2[i]]>0)
            frequency[arr2[i]]--;
            else{
                return false;
            }


    }
    return true;

}


int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[]");

    getchar();
    return 0;

}
