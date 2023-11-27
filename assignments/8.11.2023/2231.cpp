class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>even;
        priority_queue<int>odd;
        string x=to_string(num);
        int n=x.length();
        for(int i=0;i<x.length();i++)
        {
            int p=x[i]-'0';
            if(p%2==0)
            {
                even.push(p);
            }
            else
            {
                
                odd.push(p);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=10*ans;
            int a=x[i]-'0';
             if(a%2!=0)
            {
                ans=ans+odd.top();
                odd.pop();
            }
            if(a%2==0)
            {
                ans=ans+even.top();
                even.pop();
            }
             
        }
        return ans;
    }
};