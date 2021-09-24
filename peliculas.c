#include <stdio.h>

int main(){
    int a,b,c;
    printf("ingrese los 3 precios de las peliculas: \n");
    scanf("%d%d%d", &a, &b, &c);

    int numeros[] = {a,b,c};
	int mayor, menor, medio;
	mayor = medio = menor = numeros[0];
    int compara;

	for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); ++i)
	{
        numeros[i] = compara;
		if (compara > mayor) mayor = numeros[i];
		if (compara < menor) menor = numeros[i];
        if ((compara >= menor) && (mayor >= numeros[i])) medio = numeros[i];
	}

    printf("%d\n", menor);
    printf("%d\n", medio);
    int total = menor+medio;
    printf("%d\n", total);
}



