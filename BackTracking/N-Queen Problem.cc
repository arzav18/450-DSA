#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,int x,int y,int n)
{
    for(int row=0;row<x;row++)                    //To check if there is any queen in column
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }

    int row = x;                           //To check left diagonal
    int col = y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
        {
             return false;
        }
        row--;
        col--;
    }
    row=x;                                //To check right diagonal
    col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** arr,int x,int n)             //Main function in which we call recurssivly and do Backtracking
{
    if(x>=n)
    {
        return true;
    }
    for(int col=0;col<n;col++)
    {
        if(isSafe(arr,x,col,n))
        {
            arr[x][col]=1;

            if(nQueen(arr,x+1,n))
            {
                return true;
            }
        arr[x][col]=0;                         //BackTracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    if(nQueen(arr,0,n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}
