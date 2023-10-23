class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> resArr;
        int currDiff =INT_MAX;
        short t;
        for(int i=0;i<arr.size()-1;++i){
             t=abs(arr[i]-arr[i+1]);
            if(t<=currDiff){
                if(t<currDiff){currDiff = t; resArr.clear();}
                resArr.push_back({arr[i],arr[i+1]});
            }
        }
     return resArr;   
    }
};