#include <stdio.h>

main()
{
	float n1,n2,n3,media;
	char nome[10];

	printf("Informe o nome \n");
	scanf("%s",&nome);
	
	printf("Informe a nota 1 \n");
	scanf("%f",&n1);
	
	printf("Informe a nota 2 \n");
	scanf("%f",&n2);

	printf("Informe a nota 3 \n");
	scanf("%f",&n3);

	media = ((n1*2)+(n2*4)+(n3*4))/10;		

	printf("A media de %s foi %.2f \n", nome, media);		

	if (media >= 7 && media<=10)
	{
		printf("Aprovado");
	}	
	else{
		if (media >= 5 && media<7)
        {
		printf("Recuperacao");
    	}
    	else{
    	  	if (media >= 0 && media<5)
        	{
		printf("Reprovado");
	}  
    	}
	}
	
}
