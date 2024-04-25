class Solution {
public:
    int hIndex(vector<int>& citations) {
       int count=0;
       for(int i=0;i<citations.size();i++){
        int x=citations.size()-i;
        for(int j=0;j<citations.size();j++){
            if(citations[j]>=x){count++;}
        }
        if(count>=x){return x;}
        count=0;
       } 
       return 0;
    }
};