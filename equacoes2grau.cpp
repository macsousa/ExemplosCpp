#include <stdio.h>
# include <math.h> // Biblioteca com as funções matemáticas

main() {
	
	int a,b,c;
	float delta, x1, x2;
	
	printf("Resolucao de equacoes do 2 grau.\n");
	printf("Digite valor de a: ");
	scanf("%d", &a);

	printf("Digite valor de b: ");
	scanf("%d", &b);

	printf("Digite valor de c: ");
	scanf("%d", &c);
	
	delta = ( b*b ) - ( 4*a*c ); 
	
	if(delta > 0 ) {
	   x1 = (-b + sqrt(delta)) / (2*a);
	   x2 = (-b - sqrt(delta)) / (2*a);
	   
	   printf("x1 = %f\nx2 = %f", x1,x2);
	} else if (delta == 0) {
	   x1 = -b/(2*a);
	   x2=x1;
	   printf("x1 = x2 = %f", x1);	
	} else {  //delta < 0
		printf("Delta Negativo. Nao possui raízes reais.", x1);	
	}
	
}
