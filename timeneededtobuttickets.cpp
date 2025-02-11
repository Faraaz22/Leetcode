class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        // BRUTE 
    // while(tickets[k] > 0){
    //     for(int i =0; i < tickets.size(); i++){
    //         if(tickets[i] == 0) continue;
    //         if(tickets[i] > 0){
    //             tickets[i]--;
    //             time++;
    //         }
    //     }
    // }
    //     return time;

    //OPTIMAL 
    int value=tickets[k];
        for(int i=0;i<tickets.size();i++) {
            if(i<k) {
                time=time+min(tickets[i],value);
            } else if(i==k) {
                time=time+value;
            } else {
                if(tickets[i]<value)
                    time=time+tickets[i];
                else
                    time=time+value-1;
            }
        }
        return time;
    }
};