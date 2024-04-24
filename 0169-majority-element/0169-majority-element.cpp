class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=nums[0],max_count=0,count=0,val=0;
        bool avail=false;
        for(int i=0;i<nums.size()-1;i++){
            val=nums[i];
            for(int j=0;j<i;j++){
                if(nums[j]==val||i==0||val==max){
                    avail=true;
                    break;
                }
            }
            if(!avail){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==val){
                        count++;
                    }
                }
                if(count>max_count){
                    max_count=count;
                    max=val;
                }
                count=0;
            }
            avail=false;
        }
        return max;
    }
};