#include <stdio.h>

int main() {
    int a, b, c;
    printf("ingrese 2 numeros: \n");
    scanf("%d%d", &a, &b);
    c=a%b;
    if ((b<a) && (c==0)) {
        printf("es divisible\n");
    }

    return 0;
}