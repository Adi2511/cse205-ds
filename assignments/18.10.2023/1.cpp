class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i+1;
        }
        for(int i=0;i<nums.size();i++){
            int j=mp[target-nums[i]]-1;
            if(j+1!=0 && j!=i){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        return ans;
    }
};