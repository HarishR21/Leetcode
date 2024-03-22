int lengthOfLongestSubstring(char* s) {
    int count=0,length=0,i=0,largestcount=0,alpha[127],itrplace[127];
    for(int j=0;j<127;j++){alpha[j]=0;}
    
    while(s[i]!='\0'){
        length++;
        i++;
    }

    for(i=0;i<length;i++){
        alpha[(s[i])]++;
        if(alpha[(s[i])]>1){
            if(count>largestcount){largestcount=count;}
            count=0;
            for(int j=0;j<127;j++){alpha[j]=0;}
            i=itrplace[(s[i])];
        }else{
            count++;
            itrplace[(s[i])]=i;
        }
    }

    if(largestcount==0||(i==length && count>largestcount)){largestcount=count;}
    return(largestcount);
}