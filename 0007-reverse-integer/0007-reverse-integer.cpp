class Solution {
public:
    int reverse(int x) {
        if(x==0){return 0;}
        int result=0,t=x;
        while(t!=0){
            if((numeric_limits<int>::min()/10)>result|| result>(numeric_limits<int>::max()/10))
                return 0;
            result=result*10+t%10;
            t=t/10;
        }
        return result;
    }
};