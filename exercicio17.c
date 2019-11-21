 #include <stdio.h>
 main(){
 	float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
 	printf("Digite o valor do seu salario: ");
 	scanf("%f", &salario);
 	printf("Digite o valor do primeiro cheque: ");
 	scanf("%f", &cheque1);
 	printf("Digite o valor do segundo cheque: ");
 	scanf("%f", &cheque2);
 	cpmf1 = cheque1 * 0.38 / 100;
 	cpmf2 = cheque2 * 0.38 / 100;
 	saldo = salario - (cheque1 + cheque2 + cpmf1 + cpmf2);
 	printf("Seu saldo atual e de %.2f", saldo);
 }
