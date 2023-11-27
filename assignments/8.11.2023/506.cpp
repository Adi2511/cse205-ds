class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, string>mp;
        int n = score.size();
        priority_queue<int>q;
        for(int i = 0 ; i < n ; i++)
        {
            q.push(score[i]);
        }    
        int i = 1;
        while(!q.empty())
        {
            int a = q.top();
            q.pop();
            mp[a] = to_string(i);
            i++;
        }
        vector<string>ans;
        for(int i = 0 ; i < n ; i++)
        {
            auto it = mp.find(score[i]);
            if(it->second == "1")
            {
                ans.push_back("Gold Medal");
            }
            else if(it->second == "2")
            {
                ans.push_back("Silver Medal");
            }
            else if(it->second == "3")
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                ans.push_back(it->second);
            }
        }
        return ans;
    }
};