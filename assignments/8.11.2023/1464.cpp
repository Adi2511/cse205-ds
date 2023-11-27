class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        int ans = q.top();
        q.pop();
        int vans = q.top();
        return (ans-1)*(vans-1);
    }
};