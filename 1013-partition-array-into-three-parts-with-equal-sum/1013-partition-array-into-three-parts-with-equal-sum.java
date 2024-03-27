class Solution {
    public boolean canThreePartsEqualSum(int[] arr) {
        /*for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                for(int k=j+1;k<arr.length;k++){
                    int sum1=0,sum2=0,sum3=0;
                    for(int x=0;x<j;x++)
                        sum1=sum1+arr[x];
                    for(int x=j;x<k;x++)
                        sum2=sum2+arr[x];
                    for(int x=k;x<arr.length;x++)
                        sum3=sum3+arr[x];
                    if(sum1==sum2 && sum1==sum3){
                        System.out.print(i+" "+j+" "+k+" "+sum1+" "+sum2+" "+sum3+" ");
                        return true;
                    }
                }
            }
        }
        return false;*/
        int sum=0,sum1=0;
        for(int i=0;i<arr.length;i++)
        {sum=sum+arr[i];}
        if(sum%3!=0)
        {return false;}
        sum=sum/3;
        for(int i=0;i<arr.length;i++){
            sum1=sum1+arr[i];
            if(sum1==sum){
                int sum2=0;
                for(int j=i+1;j<arr.length;j++){
                    sum2=sum2+arr[j];
                    if(sum2==sum){
                        int sum3=0;
                        for(int k=j+1;k<arr.length;k++){
                            sum3=sum3+arr[k];
                            if(sum3==sum){
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
}