#include<stdio.h>

int main(){
	
	int tamanho, casas, i;
	
	printf("Informe o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	printf("Informe a quantidade de casas para rotacionar: \n");
	scanf("%d",&casas);
	
	int vetor1[tamanho];
	int vetor2[tamanho];
	
	for(i=0;i<tamanho;i++){
		printf("Informe o valor: %d\n",i);
		scanf("%d",&vetor1[i]);
	}
	
	for(i=casas;i<tamanho-casas;i++){
		vetor2[i-casas]=vetor1[i];
	}
	
	vetor2[tamanho-casas]=vetor1[0];
	
	printf("Vetor informado\n");
	for(i=0;i<tamanho;i++){
		printf("%d\t",vetor1[i]);
	}
	
	printf("\nVetor rotacionado para esquerda\n");
	for(i=0;i<tamanho;i++){
		printf("%d\t",vetor2[i]);
	}
	
	return 0;
}