#include<iostream>
#include<algorithm>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ma=INT_MIN;
    int max_till_here=0;
    for(int i=0;i<n;i++)
    {
        max_till_here=max_till_here + arr[i];
        if(max_till_here>ma)
        {
            ma=max_till_here;
        }
        if(max_till_here<0)
        {
            max_till_here=0;
        }

    }
    cout<<ma;
}

int main()
{
    solve();
        return 0;
}
