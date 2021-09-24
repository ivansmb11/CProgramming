#include <stdio.h>    
     
int main()    
{    

    int arr[] = {11,59,29,67,99,16,17,67,81,92,97,78,60,13,92,65,89,42,58,2,31,79,1,7,2,26,97};     
    int temp = 0;

    int length = sizeof(arr)/sizeof(arr[0]);    
  
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}     