#include<bits/stdc++.h>
using namespace std;

void printReverse(int i,int n)
{
    if(i>n)
        return;
    printReverse(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    printReverse(1,n);
    return 0;
}
