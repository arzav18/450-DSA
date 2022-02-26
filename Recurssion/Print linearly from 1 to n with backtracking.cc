#include<bits/stdc++.h>
using namespace std;

void printNumbers(int i,int n)
{
    if(i<1)
        return ;
    printNumbers(i-1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    printNumbers(n,n);
    return 0;
}
