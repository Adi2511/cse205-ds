class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int,vector<int>,greater<int>> q;
        int count = 0;
        int i=0;
        while(i<k && i<nums.size())
            q.push(nums[i++]);
        while(i<nums.size()){
            if(q.top()<nums[i]){
                q.pop();
                q.push(nums[i]);
            }
            i++;
        }
        return q.top();
    }
};