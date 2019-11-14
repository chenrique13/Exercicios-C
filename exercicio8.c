#include <stdio.h>
main (){
	float d, t, tot;
	printf("Digite o valor do deposito: ");
	scanf("%f", &d);
	printf("Digite a taxa de juros: ");
	scanf("%f", &t);
	tot = d + (d * (t / 100));
	printf("O valor total do deposito mais o rendimento sera %.2f", tot);
	
}
