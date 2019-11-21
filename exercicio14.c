#include <stdio.h>
main(){
	int ano_atual, ano_nascimento, idade_atual, idade_2050;
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	idade_atual = ano_atual - ano_nascimento;
	idade_2050 = 2050 - ano_nascimento;
	printf("Voce tem %d anos de idade.\n", idade_atual);
	printf("Voce tera %d anos de idade em 2050.", idade_2050);
}
