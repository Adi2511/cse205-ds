class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         queue <int> q; int time = 0; 
     for( int i=0; i<tickets.size(); i++) {
         q.push(i);
     }
     while(tickets[k] != 0){
         time++;
         int temp = q.front(); 
         tickets[temp]--;
         q.pop();
         if(tickets[temp] != 0) q.push(temp) ;
     }

        return time; 
    }
};