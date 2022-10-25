int sumOfDigits(int n) {
    // Write your code here
    if(n==0){
        return n;
    }
    int dig=n%10;
    n=n/10;
    return dig+sumOfDigits(n);

}


