class Twitter {
public:
    unordered_map<int,vector<pair<int,int>>> tweets;
    unordered_map<int,unordered_set<int>> follows;
    vector<int> ans;
    int time;
	
    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) 
    {
        tweets[userId].push_back({time,tweetId});
        time++;
    }
    
    vector<int> getNewsFeed(int userId) 
    {
        ans.clear();
        priority_queue<pair<int,int>> prq;
        follows[userId].insert(userId);
		
        for (auto x:follows[userId])
            for (auto y:tweets[x])
                prq.push(y);
        
        for (int i=0;i<10 && !prq.empty();i++)
        {
            ans.push_back(prq.top().second);
            prq.pop();
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) 
    {
        follows[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) 
    {
        follows[followerId].erase(followeeId);
    }
};