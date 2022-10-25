// input - input array
// size - length of input array
// element - value to be searched
int f(int input[],int index,int size,int element){
    
    if(index==size){
        return -1;
    }
    
    int mid=(index+size)/2;
    
    if(input[mid]==element){
        return mid;
    }
    
    if(element>input[mid]){
        index=mid+1;
        f(input,index,size,element);
    }
    else{
        size=mid-1;
        f(input,index,size,element);
    }
    
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
    
    if(size==0){
        return -1;
    }
   	if(size==1){
       if(input[0]==element){
           return 0;
       }
        else{
            return -1;
        }
    }
    
    int ans=f(input,0,size,element);
    return ans;

}
