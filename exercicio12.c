#include <stdio.h>
#include <math.h>
main() {
	float numero1, numero2, resultado1, resultado2;
	printf("Digite um numero: ");
	scanf("%f", &numero1);
	printf("Digite outro numero: ");
	scanf("%f", &numero2);
	resultado1 = pow(numero1, numero2);
	resultado2 = pow(numero2, numero1);
	printf("O primeiro numero elevado ao segundo vale %.2f\n", resultado1);
	printf("O segundo numero elevado ao primeiro vale %.2f\n", resultado2);
}
