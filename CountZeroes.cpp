
int countZeros(int n) {
    // Write your code here
     if (n % 10 == 0 && n / 10 != 0)
        return 1 + countZeros(n / 10);
    else if (n / 10 != 0)
        return countZeros(n / 10);
    else if (n % 10 == 0 && n / 10 == 0)
        return 1;
    else
        return 0;
}


