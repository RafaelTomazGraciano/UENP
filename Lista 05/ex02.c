/*Faca um programa que receba do usuario um vetor de “n” numeros inteiros e, em seguida,
imprima o vetor na ordem inversa.*/

#include <stdio.h>

int main(){
  int n, vetor[n];
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    printf("Digite o numero da posicao %d: ", i);
    scanf("%d", &vetor[i]);
  }
  for(int i = n; i >= 0; i--){
    printf("\n%d", vetor[i]);
  }
  return 0;
}