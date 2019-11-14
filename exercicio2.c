# include <stdio.h>
int main(){
	float n1, n2, n3, m;
	printf("Digite a sua nota 1: ");
	scanf("%f", &n1);
	printf("Digite a sua nota 2: ");
	scanf("%f", &n2);
	printf("Digite a sua nota 3: ");
	scanf("%f", &n3);
	m = (n1 + n2 + n3) / 3;
	printf("A media entre as notas vale %f", m);
}
