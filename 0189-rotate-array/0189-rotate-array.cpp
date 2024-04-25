class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*for(int i=0;i<k;i++){
            nums.insert(nums.begin(),nums[nums.size()-i-1]);
        }
        nums.erase(nums.begin()+nums.size()-k,nums.begin()+nums.size());
        for(int i=0;i<k;i++){
            int x=nums[nums.size()-1];
            for(int j=nums.size()-1;j>0;j--){
                nums[j]=nums[j-1];
            }
            nums[0]=x;
        }*/
        int x=nums.size();
        if(x>k){
            for(int i=0;i<x-k;i++){
                nums.push_back(nums[i]);
            }
            nums.erase(nums.begin(),nums.begin()+x-k);
        }else{
            for(int i=0;i<k;i++){
                nums.insert(nums.begin(),nums[nums.size()-i-1]);
            }
            nums.erase(nums.begin()+nums.size()-k,nums.begin()+nums.size());
        }
    }
};