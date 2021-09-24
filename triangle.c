#include <stdio.h>

int main(){
    int a,b,c;
    printf("ingrese los 3 lados del triangulo: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ( (a + b) > c && (a + c) > b && (b + c) > a) {
    printf( " Es un Triangulo." );
    }
    
    else
    printf( " No es un Triangulo." );
}

