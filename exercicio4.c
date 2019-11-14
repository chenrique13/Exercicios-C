#include <stdio.h>
int main() {
	float s, ns;
	printf("Digite o valor do seu salario: ");
	scanf("%f", &s);
	ns = s * (1.25);
	printf("O seu salario reajustado sera %.2f", ns);
}
