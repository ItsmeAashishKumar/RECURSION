void merge(int input[],int l,int mid,int r){
    int b[r];
    int i=l;
    int k=l;
    int j=mid+1;
    while(i<=mid && j<=r){
        if(input[i]<input[j]){
           b[k]=input[i]; 
            i++;
        }
        else{
            b[k]=input[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k++]=input[j];
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k++]=input[i];
            i++;
        }
    }
    for(int k=l;k<=r;k++){
        input[k]=b[k];
    }
}

void Mergesort(int input[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        Mergesort(input,l,mid);
        Mergesort(input,mid+1,r);
        merge(input,l,mid,r);
    }
    
}

void mergeSort(int input[], int size){
	// Write your code here
    Mergesort(input,0,size-1);
    
}
