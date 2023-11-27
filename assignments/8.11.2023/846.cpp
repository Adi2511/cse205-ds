class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n = hand.size();

        if(groupSize==1) return true; 
        if(n%groupSize != 0) return false; 

        unordered_map<int,int> mp; 
        priority_queue< int , vector<int>, greater<int>> hp;

        for( auto it : hand ){
            mp[it]++;
            hp.push(it);
        }   

        while(hp.size()!=0){
            while( hp.size() != 0 && mp.find (hp.top()) == mp.end() ) hp.pop();
            if( hp.size() == 0) return true;
            int a = hp.top();
            for(int i = 0 ; i < groupSize ;i++){
                if( mp.count(a+i) == 0 ) return false; 
                if( --mp[a+i] == 0 ) mp.erase(a+i);
            }
            hp.pop();  
        }
        return true;
    }
};