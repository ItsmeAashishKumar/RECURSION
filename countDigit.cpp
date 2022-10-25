int count(int n){
    //write your code here
    int digit=0;
    if(n==0){
        return digit;
    }
    digit++;
    n=n/10;
    return digit+count(n);
    
}
