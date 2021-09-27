#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
 
int bar();
 
bool cond = true;
 
int main(){
    do
    {
 
        printf("Cargando...");
        printf("%d", bar());
 
    } 
    while (cond != false);
 
 }
 
    bar(){
 
    int i,j,k,perc;
 
    printf("\n");
    for(i=0;i<=101;i++)
        {
 
        for (perc = 0; perc < i; perc++)
            printf("\r( %d %%) ",perc);
            usleep(60000);
            printf("[");
 
 
 
            for (j=0;j<i;j++)
                printf("=");
 
 
                for (k=0;k<1;k++)
                    printf("");
                    printf("]");
 
                    printf("\r");
 
                    fflush(stdout);
                    usleep(60000);
 
                }
            printf("\n");
 
}
