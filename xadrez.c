#include <stdio.h>


int main() {

  // bispo 5 casas diagonal superior direita
  // torre 5 casas para direita
  // rainha 8 casas para a esquerda
  // output exemplo: 
  // printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");
  // utilize cada uma das 3 estruturas mostradas.




  // bispo 
  int moves_up = 5;
  int moves_rigth = 0;
  printf("Bispo:\n");
  do {
    
    printf("Direita\n");
    printf("Cima\n");
    moves_up--;
  } while (moves_up > 0);

  // espacamento
  printf("\n\n\n");
  
  // torre
  printf("Torre:\n");
  for (int m = 0; m <= 5; m++) {
    
    printf("Direita\n");
  };


  // rainha
  printf("Rainha:\n");
  int r = 0;
  while(r < 8) { // nesse caso o zero ja conta 
    printf("Esquerda\n");
    r++;
  };
  
  return 0; 
}
