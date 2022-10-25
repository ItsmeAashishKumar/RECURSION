#include<bits/stdc++.h>

int stringToNumber(char input[]) {
    // Write your code here
    static int sum=0;
    if(strlen(input)==0){
        return sum;
    }
    sum=sum+((input[0]-'0')*pow(10,strlen(input)-1));
    
    stringToNumber(input+1);

}


