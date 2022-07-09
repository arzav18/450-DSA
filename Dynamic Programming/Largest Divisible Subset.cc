class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int>v(n, 1);
        vector<int>ch(n, -1);
        v[0] = 1;
        int numi = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[i] % nums[j] == 0 && v[i] < v[j] + 1) {
                    v[i] = v[j] + 1;
                    ch[i] = j;
                }
            }
            if(v[i] > v[numi]) { numi = i; }
        }
        vector<int> ans;
        while(numi != -1) {
            ans.push_back(nums[numi]);
            numi = ch[numi];
        }
        return ans;
    }
};
