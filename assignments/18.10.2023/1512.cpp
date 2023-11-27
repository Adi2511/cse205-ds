class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>hash;
        int ans=0;
        for(int i=0;i<nums.size();i++)hash[nums[i]]++;
        for(auto i:hash)
        {
            int n=i.second;
            if(n>1)ans+=n*(n-1)/2;
        }
        return ans;
    }
};