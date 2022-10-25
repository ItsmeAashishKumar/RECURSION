#include<bits/stdc++.h>

bool f(char input[],int i,int size){
    if(i>=size){
        return true;
    }
    if(input[i]!=input[size]){
        return false;
    }
    return f(input,i+1,size-1);
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int size=strlen(input);
    bool ans=f(input,0,size-1);
    return ans;
    

}

