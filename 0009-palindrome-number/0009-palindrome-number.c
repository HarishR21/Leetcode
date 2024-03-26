bool isPalindrome(int x){
    if(x<0)
    return false;
    long y=x,z=0;
    int r=0;
    while(y!=0){
        r=y%10;
        y=y/10;
        z=z*10+r;
    }
    if(z==x)
    return true;
    else
    return false;
}