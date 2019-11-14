#include <stdio.h>
main() {
	float s, sa, i, ns;
	printf("Digite o valor do seu salario: ");
	scanf("%f", &s);
	sa = s * 0.05;
	i = s * 0.07;
	ns = s + sa - i;
	printf("O seu salario com o ajuste e impostos sera %.2f", ns);
}
