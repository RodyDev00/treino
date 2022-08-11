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
	
	for(i=0;i<tamanho;i+=1){
        vetor2[i] = vetor1[(i+casas)%tamanho];
    }
	
	printf("Vetor informado\n");
	for(i=0;i<tamanho;i++){
		printf("%d  \t",vetor1[i]);
	}
	
	printf("\nVetor rotacionado para esquerda\n");
	for(i=0;i<tamanho;i++){
		printf("%d  \t",vetor2[i]);
	}
	
	return 0;
}