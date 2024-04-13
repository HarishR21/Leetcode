class Solution {
public:
    int reverse(int x) {
        if(x==0){return 0;}
        long result=0,t=x,r=0;
        while(t!=0){
            r=t%10;
            result=result*10+r;
            t=t/10;
        }
        if(numeric_limits<int>::min()<result && result<numeric_limits<int>::max()){
            return result;
        }else{
            return 0;
        }
    }
};