class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    int maxSize=0;
    KthLargest(int k, vector<int>& nums) {
        maxSize=k;
        while(!q.empty())
        {
            q.pop();
        }
        for(auto it:nums)
        {
            q.push(it);
            if(q.size()>k)
            {
                q.pop();
            }
        }
    }
    
    int add(int val) {
        q.push(val);
        if(q.size()>maxSize)
        {
            q.pop();
        }
        return q.top();
    }
};