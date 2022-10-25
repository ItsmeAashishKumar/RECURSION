// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>

void f(char input[],int size){
    if(size==0){
        return;
    }
    if(input[0]=='p' && input[1]=='i'){
        for(int i=size;i>=2;i--){
            input[2+i]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        size=size+2;
    }
    f(input+1,size-1);
}

void replacePi(char input[]) {
	// Write your code here
    int size=strlen(input);
    f(input,size);

}


