class Solution {
    public String firstPalindrome(String[] words) {
        boolean b=true;
        String str="";
        for(int i=0;i<words.length;i++){
            b=true;
            int j=0,k=words[i].length()-1;
            while(j<words[i].length() && k>=0){
                if(words[i].charAt(j)!=words[i].charAt(k)){
                    b=false;
                    break;
                }
                j++;k--;
            }
            if(b)
            {return words[i];}
        }
        return str;
    }
}