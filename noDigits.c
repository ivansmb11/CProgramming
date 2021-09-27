#include <stdio.h>

int main(){
    
    while(1){
        long long num;
        int op;
        int counter = 0;
        printf("\n-- Menu --\n<1> Get # digits of a number.\n<2> EXIT.\n");
        printf(">>>\n");
        scanf("%d",&op);
        if (op=1){
            printf("Type the number.");
            scanf("%lld",&num);
            do {
                num /= 10;
                ++counter;
            } while (num != 0);

            printf("Number of digits: %d", counter);
        }
    }
}