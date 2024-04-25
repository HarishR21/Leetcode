class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*vector<int>profits={0};
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i;j<prices.size();j++){
                profits.push_back(prices[j]-prices[i]);
                //if(prices[j]-prices[i]>max){
                //    max=prices[j]-prices[i];
                //}
            }
        }
        return *max_element(profits.begin(), profits.end());*/
        if(prices.size()<2){return 0;}
        int diff=prices[1]-prices[0],cur_diff=diff,max_diff=cur_diff;
        for(int i=1;i<prices.size()-1;i++){
            diff=prices[i+1]-prices[i];
            if(cur_diff>0)
                cur_diff+=diff;
            else
                cur_diff=diff;
            
            if(cur_diff>max_diff)
                max_diff=cur_diff;
        }
        if(max_diff<0){return 0;}
        return max_diff;
    }
};