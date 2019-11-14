#include <stdio.h>
main (){
	float s, ns, tx;
	printf("Digite o valor do seu salario: ");
	scanf("%f", &s);
	printf("Digite a taxa do aumento (%): ");
	scanf("%f", &tx);
	ns = s + ((s * tx) / 100);
	printf("O seu salario reajustado sera %.2f", ns);
}
