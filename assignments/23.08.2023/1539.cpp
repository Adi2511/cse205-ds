class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int i=1,j=0;
        while(k>0){
            if(i!=arr[j]){
                --k;
                if(k==0)
                   break;
            }
            else {
                if(j!=arr.size()-1)
                   ++j;
            }
            i++;
        }
        return i;  
    }
};