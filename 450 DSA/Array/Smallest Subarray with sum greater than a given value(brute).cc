#include<bits/stdc++.h>
using namespace std ;

int getMinLength(int arr[],int n,int x)
{
    int min_length = n+1;
    for(int i=0;i<n;i++)
    {
        int curr_sum = arr[i];
        if(curr_sum>x)
            return 1;
        for(int j=i+1;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum>x && (j-i+1)<min_length)
                min_length = j-i+1;
        }
    }
    return min_length;
}

int main()
{
    int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int res1 = getMinLength(arr1, n1, x);
    (res1 == n1+1)? cout << "Not possible\n" :
                    cout << res1 << endl;

    int arr2[] = {1, 10, 5, 2, 7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    x  = 9;
    int res2 = getMinLength(arr2, n2, x);
    (res2 == n2+1)? cout << "Not possible\n" :
                    cout << res2 << endl;

    int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    x  = 280;
    int res3 = getMinLength(arr3, n3, x);
    (res3 == n3+1)? cout << "Not possible\n" :
                    cout << res3 << endl;

    return 0;
}
