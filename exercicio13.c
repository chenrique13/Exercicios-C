#include <stdio.h>
main(){
float pes, polegadas, jardas, milhas;
printf("Digite a quantidade de pes que voce quer converter: ");
scanf("%f", &pes);
polegadas = pes *12;
jardas = pes / 3;
milhas = jardas / 1760;
printf("Os pes foram convertidos em %.2f polegadas.\n", polegadas);
printf("Os pes foram convertidos em %.2f jardas.\n", jardas);
printf("os pes foram convertidos em %f milhas.\n", milhas);
}
