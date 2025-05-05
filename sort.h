//Function to do selection sort for a list of numbers

void selection_sort(int * arr, int len){
    int min,index;
    for(int i=0;i<len;i++){
        min=arr[i];
        index=i;
        for(int j=i;j<len;j++){
            if(min>arr[j]){
                min=arr[j];
                index=j;
            }
        }
        if(index!=i){
            arr[i]=arr[i]+arr[index];
            arr[index]=arr[i]-arr[index];
            arr[i]=arr[i]-arr[index];
        }
    }
}

//Function to do insertion sort for a list of numbers

void insertion_sort(int* arr, int len){
    for(int i=1;i<len;i++){
        int j=i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                arr[j]=arr[j-1]+arr[j];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]=arr[j]-arr[j-1];
                j--;
            }
            else{break;}
        }
    }
}

//Function to do bubble sort for a list of numbers

void bubble_sort(int * arr, int len){
    for (int i=len-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i]<arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}