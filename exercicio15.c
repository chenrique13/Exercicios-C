#include <stdio.h>
main(){
	float preco, perlucro, perimpostos, lucro, impostos, precof;
	printf("Digite o valor do carro: ");
	scanf("%f", &preco);
	printf("Digite o percentual de lucro do distribuidor: ");
	scanf("%f", &perlucro);
	printf("Digite o percentual dos impostos: ");
	scanf("%f", &perimpostos);	
	lucro = preco * (perlucro / 100);
	impostos = preco * (perimpostos / 100);
	precof = preco + lucro + impostos;
	printf("O lucro do distribuidor e %.2f\n", lucro);
	printf("O valor dos impostos sao de %.2f\n", impostos);
	printf("O preco final do carro e %.2f", precof);	
}
