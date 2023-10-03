class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>stak;
        int n = nums.size();
        vector<int>result(n);
        if(n==0) return result;

        for(int i=n-1;i>=0;i--)
            stak.push(nums[i]);
    
        for(int i=n-1;i>=0;i--)
        {
            while(!stak.empty() && stak.top()<=nums[i])
                stak.pop();
            if(stak.empty())
                result[i] = -1;
            else
                result[i] = stak.top();
            stak.push(nums[i]);
        }        
        return result;
    }
};