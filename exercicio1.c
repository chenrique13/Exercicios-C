#include <stdio.h>
int main(){
	int n1, n2, n3, n4, s;	
	printf("Digite o valor 1: ");
	scanf("%d", &n1);
	printf("Digite o valor 2: ");
	scanf("%d", &n2);
	printf("Digite o valor 3: ");
	scanf("%d", &n3);
	printf("Digite o valor 4: ");
	scanf("%d", &n4);
	s = n1 + n2 + n3 + n4;
	printf("A soma entre os quatros valores vale %d", s);
	getch ();
}
