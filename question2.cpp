#include <stdio.h>
#include "sort.h"
#include "search.h"

//Function prototypes:
void include_input(int *,int);

int main(){

    //Asking array input from the user:
    int len;
    printf("Enter the number of elements you want to enter in an array: ");
    scanf("%d",&len);
        
    int arr[len];

    include_input(arr,len);

    while(1){
        //Getting the element in the array you want to search:
        int element;
        printf("Enter the element you want to search in the array: ");
        scanf("%d",&element);
        
        //Menu Driven program
        int choice;
        
        printf("1.Linear search\n2.Binary Search\n3.Exit\n");
        printf("Enter the choice from the appropriate options: ");
        scanf("%d",&choice);
        
        if (choice==3){break;}
        
        int check_variable;
        switch (choice){
            
            case 1:
                check_variable=linear_search(arr,len,element);
                if(check_variable==1){printf("The element %d is present in the list.\n",element);}
                else{printf("The element %d is not present in the list.\n",element);}
                break;
            
            case 2:
                selection_sort(arr,len);
                check_variable=binary_search(arr,len,element);
                if(check_variable==1){printf("The element %d is present in the list.\n",element);}
                else{printf("The element %d is not present in the list.\n",element);}
                break;
            
            default:
                printf("You have entered an invalid option. Please try again.\n");

        }
    }
}

//Function to get the array inputs from the user:
void include_input(int * arr, int len){
    for(int i=0;i<len;i++){
            printf("Enter the element %d: ",i+1);
            scanf("%d",&(arr[i]));
        }
}
