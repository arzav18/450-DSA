#include<bits/stdc++.h>
using namespace std;

void printReverse(int i,int n)
{
    if(i<1)
        return;
    cout<<i<<" ";
    printReverse(i-1,n);
}

int main()
{
    int n;
    cin>>n;
    printReverse(n,n);
    return 0;
}
