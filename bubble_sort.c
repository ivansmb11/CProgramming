#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* filePtr = fopen("numbers.txt","r");
    if (filePtr==NULL)
    {
        printf("no such file.");
        return 0;
    }
 
   
    char numberFromFile[10];
    int numbersArray[100] = {0};
    int arraySize = 0;  
    printf("The original content of the array is:\n", numberFromFile);
    while (fscanf(filePtr,"%s", &numberFromFile)==1)
    {
        printf("%s, ", numberFromFile);
        numbersArray[arraySize++]=atoi(numberFromFile);
        //fill the array with the numbers from the file here
    }
        
    if(filePtr!=NULL)
        fclose(filePtr);

    printf("\b\b  ");
    int temp = 0;
    //sort the array here
    for (int i = 0; i < arraySize; i++) {     
        for (int j = i+1; j < arraySize; j++) {     
           if(numbersArray[i] > numbersArray[j]) {    
               temp = numbersArray[i];    
               numbersArray[i] = numbersArray[j];    
               numbersArray[j] = temp;    
           }     
        }     
    }    

    printf("The sorted array is: \n");
    //print the sorted array here

    filePtr = fopen("sorted.txt","w");
    if (filePtr==NULL)
    {
        printf("no such file to store the sorted array.");
        return 0;
    }   

    for(int i=0;i<arraySize; i++)
    {
        printf("%d, ", numbersArray[i]);
        fprintf(filePtr, "%d\n", numbersArray[i]);
    }
        
    printf("\b\b  ");
    fclose(filePtr);

    return 0;
}