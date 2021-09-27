#include <stdio.h>
#include <stdlib.h>

int main(){
    int burgercounter = 0;
    int friescounter = 0;
    int pizzacounter = 0;
    int sandwichcounter = 0;
    float cuenta = 0;
    float cuentaIVA = 0;
    while (1) {
        char op;
        usleep(1000000);
        printf("\n--- M E N U ---\n<H or h> HAMBURGER ....... $10.50.\n<F or f> Fries ....... $4.99.\n<P or p> Pizza ....... $19.99.\n<S or s> Sandwich ....... $7.25.\n<E or e> Exit.");
        printf("\n>>> ");
        op = getchar();

        switch(op){
            case 'H':
            printf("Pediste una burger.");
            burgercounter++;
            cuenta = cuenta + 10.5;
            break;

            case 'h':
            printf("Pediste una burger.");
            burgercounter++;
            cuenta = cuenta + 10.5;
            break;

            case 'F':
            printf("Pediste unas fries.");
            friescounter++;
            cuenta = cuenta + 4.99;
            break;

            case 'f':
            printf("Pediste unas fries.");
            friescounter++;
            cuenta = cuenta + 4.99;
            break;

            case 'P':
            printf("Pediste una pizza.");
            pizzacounter++;
            cuenta = cuenta + 19.99;
            break;

            case 'p':
            printf("Pediste una pizza.");
            pizzacounter++;
            cuenta = cuenta + 19.99;
            break;

            case 'S':
            printf("Pediste un sandwich.");
            sandwichcounter++;
            cuenta = cuenta + 7.25;
            break;

            case 's':
            printf("Pediste un sandwich.");
            sandwichcounter++;
            cuenta = cuenta + 7.25;
            break;

            case 'E':
            cuentaIVA = cuenta*1.0825;
            printf("Exiting...");
            printf("Pediste:\n");
            printf("%d Burgers.\n",burgercounter);
            printf("%d Fries.\n",friescounter);
            printf("%d Pizza.\n",pizzacounter);
            printf("%d Sandwiches.\n",sandwichcounter);
            printf("\nEl total es %d",cuentaIVA);
            exit(0);

            case 'e':
            cuentaIVA = cuenta*1.0825;
            printf("Exiting...");
            printf("Pediste:\n");
            printf("%d Burgers.\n",burgercounter);
            printf("%d Fries.\n",friescounter);
            printf("%d Pizza.\n",pizzacounter);
            printf("%d Sandwiches.\n",sandwichcounter);
            printf("\nEl total es %f",cuentaIVA);
            exit(0);
        }

    }
    
    
}