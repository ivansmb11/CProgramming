#include <stdio.h>

int main(){
    int n, i;
    float calificaciones[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter cali: ", i + 1);
        scanf("%f", &calificaciones[i]);
        sum += calificaciones[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
	int mayor, menor;
    
	mayor = menor = calificaciones[0];

	for (int i = 1; i < sizeof(calificaciones) / sizeof(calificaciones[0]); ++i)
	{
		if (calificaciones[i] > mayor) mayor = calificaciones[i];
		if (calificaciones[i] < menor) menor = calificaciones[i];
	}
	printf("El mayor es %d y el menor es %d\n", mayor, menor);

    
}

