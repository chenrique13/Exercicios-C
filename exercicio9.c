#include <stdio.h>
main() {
	float b, a, r;
	printf("Digite o valor da base do triangulo (m): ");
	scanf("%f", &b);
	printf("Digite o valor da altura do triangulo (m): ");
	scanf("%f", &a);
	r = (b * a) / 2;
	printf("A area do triangulo vale %.2f", r);
}
