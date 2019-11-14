#include <stdio.h>
main (){
	float s, ns, i;
	printf("Digite o valor do seu salario: ");
	scanf("%f", &s);
	i = s * 0.1;
	ns = s + 50 - i;
	printf("O salario reajustado sera %.2f", ns);
}
