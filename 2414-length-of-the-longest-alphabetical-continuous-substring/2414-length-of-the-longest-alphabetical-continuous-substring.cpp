class Solution {
public:
    int longestContinuousSubstring(string s) {
        int j=0,x=0,count=0;
        for(int i=0;i<s.length();i++){
            j=i;
            x=1;
            while(j<(s.length()-1) && (s[j]+1)==s[j+1]){
                x++;
                j++;
            }
            if(x>count){count=x;}
            if(j==s.length()-1){break;}
        }
        return count;
    }
};