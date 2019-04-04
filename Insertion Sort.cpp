#include <stdio.h>

// Como funciona?
// O algoritmo captura o segundo valor do vetor.
// Esse valor é movido a esquerda até encontrar um valor menor ou igual a ele.
// Quando esse valor é encontrado, o valor é atribuido a posição do vetor depois do menor valor:
//[12, 2, 6] -> pega-se o valor 2;
//[2, 12, 6] -> move-se a esquerda;
//[2, 12, 6] -> pega-se o valor 12;
//[2, 12, 6] -> 12 é maior que 2;
//[2, 12, 6] -> pegas-se o valor 6;
//[2, 6, 12] -> move-se a esquerda;
//[2, 6, 12] -> 6 é maior que 2;

void sort(int *vec, int tam);

int main(){
	int vec[] = {12, 2, 1, 3, 9, 14, 33, 3, 9, 11};
	
	sort(vec, 10);
	
	for(int i = 0; i < 10;i++){
		printf("[%d] - %d\n", i, vec[i]);
	}
}

void sort(int *vec, int tam){
	int j, val;
	
	for(int i = 1; i < tam;i++){
		val = vec[i];
		
		for(j = i -1; j >= 0 && vec[j] > val; j--){
			vec[j+1] = vec[j];
		}
		
		vec[j+1] = val;
	}
}
