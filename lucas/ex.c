#include<stdio.h>

void geraMapEntrada(int n, int mapEntrada[][n]){
    int i, j, valor;
    for(i=0;i<n*2;i++){
        for(j=0;j<n;j++){
            printf("Informe o valor de mapEntrada[%d][%d]\n",i,j);
            scanf("%d",&valor);
            mapEntrada[i][j] = valor;
        }
    }
}

void geraMapSaida(int n, int mapEntrada[][n], int mapSaida[][n]){
    int i, j, valor;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mapSaida[i][j] = mapEntrada[i][j] + mapEntrada[i+n][j];
        }
    }
}

void printMap(int lin,int col,int map[lin][col]){
    int i, j;
    for (i=0; i< lin; i++){
        for(j=0;j<col;j++){
            printf("%d \t", map[i][j]);
        }
        printf("\n");
    }    
}

int estatisticas(int n, int mapSaida[][n], int *pMaior, int *pMenor, float *pMedia){
    int i, j, valor, total=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            valor = mapSaida[i][j];
            if(valor>*pMaior || *pMaior == 0){ *pMaior = valor; }
            if(valor<*pMenor || *pMenor == 0){ *pMenor = valor; }
            total += valor;
        }
    }
    *pMedia = total/(n*n);
    return total;
}

int main(){
	int n, total, pMaior=0, pMenor=0;
    float pMedia=0;
	
	printf("Informe o tamanho² da região: \n");
	scanf("%d",&n);
	
	int mapEntrada[2*n][n];
	int mapSaida[n][n];

    geraMapEntrada(n, mapEntrada);
	printf("MapEntrada: \n");
    printMap(n*2, n, mapEntrada);
	
    geraMapSaida(n, mapEntrada, mapSaida);
	printf("MapSaida: \n");
    printMap(n, n, mapSaida);
 
    total = estatisticas(n, mapSaida, &pMaior, &pMenor, &pMedia);
	printf("Total: %d\n", total);
	printf("Menor: %d\n", pMenor);
	printf("Maior: %d\n", pMaior);
	printf("Media: %.2f\n", pMedia);
    
	return 0;
}

