#include <stdio.h>
#include <math.h>
main(){
	float numero, quadrado, cubo, raizquadrada, raizcubica;
	printf("Digite um numero positivo: ");
	scanf("%f", &numero);
	quadrado = pow (numero, 2);
	cubo = pow (numero, 3);
	raizquadrada = sqrt(numero);
	raizcubica = cbrt(numero);
	printf("O quadrado do numero vale %.2f\n", quadrado);
	printf("O cubo do numero vale %.2f\n", cubo);
	printf("A raiz quadrada do numero vale %.2f\n",raizquadrada);
	printf("A raiz cubica do numero vale %.2f\n", raizcubica);
}
