class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n=nums.size();
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){ 
        arr[nums[i]]++;
    }
    vector<int> v(2);
    for(int i=1;i<=n;i++){
        if(arr[i]==2) v[0]=i;
        if(arr[i]==0) v[1]=i;
    }
    if(arr[v[0]]==0){
        swap(v[0],v[1]);
    }
    return v;
    }
};