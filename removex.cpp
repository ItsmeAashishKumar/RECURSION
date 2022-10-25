// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>
void removeX(char input[]) {
    
    if(strlen(input)==0){
        return;
    }
    
    removeX(input+1);
    
    if(input[0]=='x'){
        for( int i = 0; i< strlen(input); i++){
            input[i] = input[i+1];
        }
    }
}
