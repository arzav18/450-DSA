#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);
    vector<int>::iterator itr1 = vec.begin();
    vector<int>::iterator itr2 = vec.end();

    for(vector<int>::iterator itr = itr1 ; itr!=itr2;++itr)
        cout<<*itr<<" "<<endl;
    sort(itr1,itr2);
    return 0;
}
