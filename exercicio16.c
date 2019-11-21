#include <stdio.h>
main(){
	float salariomin, horastrab, salariobru, salarioliq, valorhora;
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salariomin);
	printf("Quantas horas voce trabalhou: ");
	scanf("%f", &horastrab);
	valorhora = salariomin / 2;
	salariobru = valorhora * horastrab;
	salarioliq = salariobru * 0.97;
	printf("O seu salario a receber e de %.2f", salarioliq);
	
}
