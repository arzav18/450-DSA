//Subset Sum 1
class Solution{
public:
 void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubSet)
    {
        if(ind==N)
        {
            sumSubSet.push_back(sum);
            return;
        }
        func(ind+1, sum+arr[ind], arr, N, sumSubSet);
        func(ind+1, sum, arr, N, sumSubSet);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubSet;
        func(0,0,arr,N,sumSubSet);
        sort(sumSubSet.begin() , sumSubSet.end());
        return sumSubSet;
    }
};
