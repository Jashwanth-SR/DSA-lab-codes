//Function to search an element in an list using linear search

int linear_search(int * arr, int len, int element){
    int check_variable=0;
    for(int i=0;i<len;i++){
        if (arr[i]==element){
            check_variable=1;
            break;
        }
    }
    return check_variable;
}

//Function to search an element using binary search

int binary_search(int * arr, int len, int element){
    int check_variable=0;
    int low=0,high=len-1;
    int mid=(low+high)/2;
    while(low<=high){
        if (arr[mid]==element){
            check_variable=1;
            break;
        }
        if (arr[mid]>element){
            high=mid-1;
            mid=(low+high)/2;
        }
        if (arr[mid]<element){
            low=mid+1;
            mid=(low+high)/2;
        }
    }
    return check_variable;
}