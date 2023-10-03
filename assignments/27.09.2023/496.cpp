class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v,ans;
        stack<int>s;
        int n=nums2.size();
        for(int i=n-1; i>=0; i--)
        {
            while(s.empty()==false && s.top()<=nums2[i])
            {
                s.pop();
            }
            if(s.empty()==true)
            {
                v.push_back(-1);
            }
            else v.push_back(s.top());
            
            s.push(nums2[i]);
        }
        reverse(v.begin(),v.end());
        for(int j=0; j<nums1.size();j++)
        {
            auto it=find(nums2.begin(),nums2.end(),nums1[j]);
            ans.push_back(v[it-nums2.begin()]);
        }
        return ans;
        
    }
};