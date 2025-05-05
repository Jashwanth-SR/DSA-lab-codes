//Header files
#include <stdio.h>
#include "sort.h"

//Function prototypes:
void include_input(int *,int);
void printarr(int *, int);

//Main function
int main(){
    
    while(1){
        //Asking array input from the user:
        int len;
        printf("Enter the number of elements you want to enter in an array: ");
        scanf("%d",&len);
        
        int arr[len];

        include_input(arr,len);
        
        //Menu Driven program
        int choice;
        
        printf("1.Bubble sort\n2.Insertion sort\n3.Selection sort\n4.Exit\n");
        printf("Enter the choice from the appropriate options: ");
        scanf("%d",&choice);
        
        if (choice==4){break;}
        
        switch (choice){
            
            case 1:
                bubble_sort(arr,len);
                printf("The sorted array in ascending order is:\n");
                printarr(arr,len);
                break;
            
            case 2:
                insertion_sort(arr,len);
                printf("The sorted array in ascending order is:\n");
                printarr(arr,len);
                break;
            
            case 3:
                selection_sort(arr,len);
                printf("The sorted array in ascending order is:\n");
                printarr(arr,len);
                break;
            
            default:
                printf("You have entered an invalid option. Please try again.\n");

        }
    }
}

//Function to get the array input to the user:
void include_input(int * arr, int len){
    for(int i=0;i<len;i++){
            printf("Enter the element %d: ",i+1);
            scanf("%d",&(arr[i]));
        }
}

//Function to print the elements of the given array:
void printarr(int * arr, int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}