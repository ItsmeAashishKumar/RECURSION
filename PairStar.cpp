// Change in the given string itself. So no need to return or print the changed string.
#include<bits/stdc++.h>

void helper(char input[],int size){
   if(size==0){
        return;
    }
    
    if(input[0]==input[1]){
        for(int i=size;i>0;i--){
            input[i+1]=input[i];
        }
        input[1]='*';
        size=size+1;
    }
    helper(input+1,size-1);
     
}
void pairStar(char input[]) {
    // Write your code here
    int size=strlen(input);
    helper(input,size);
    

}
