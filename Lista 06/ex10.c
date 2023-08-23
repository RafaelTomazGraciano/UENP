/*Faca um programa que leia uma matriz 3 X 7 com valores inteiros, calcule e mostre quantos
elementos dessa matriz estao no intervalo entre 10 e 50, desconsiderando os extremos. Em
seguida, gere uma segunda matriz com os elementos diferentes de 10 e 50, completando a
matriz com zero no lugar desses numeros.*/

#include <stdio.h>

int main(){
  int matriz[3][7];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 7; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 7; j++){
      if(matriz[i][j] > 10 && matriz[i][j] < 50){
        printf(" %d", matriz[i][j]);
      }
      else{
        printf(" 0");
      }
    }
    printf("\n");
  }
  return 0;
}