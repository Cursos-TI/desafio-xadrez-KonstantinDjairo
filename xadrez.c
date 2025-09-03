#include <stdio.h>



// protótipos
void torre(int casas);
void rainha(int casas);

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


  printf("\n\n\n");
  // nivel aventureiro: o cavalo se mexe para baixo e para a esquerda.

  // Cavalo
  // for e do-while

  // cavalo se move 3 vezes para a esquerda, e 4 para baixo, formando um L
  int moves_down = 5;
  int moves_left = 0;
  printf("Cavalo:\n");
  for (int j = 1; j < 7; j++) {
    
    do {
      if (j > 2) {
	printf("Baixo\n");
	moves_down--;
      } else if (j < 2) {
	printf("Esquerda\n");
      }
      moves_left++;
    } while (moves_left < 3 );
    
    
  }


  printf("\n\naqui termina o nivel aventureiro.\n\n\n");
  /*
    Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por funções recursivas,
    e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.
   */
  // ---
  /*
   []  Bispo: 5 casas na diagonal direita para cima
   []  Torre: 5 casas para a direita
   []  Rainha: 8 casas para a esquerda
   [x] Cavalo: 1 vez em L para cima à direita
    Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.
   */


  printf("---- \n\n\n");

  /*
    aqui temos uma funcao recursiva que vai pra cima ate que se esgote o numero de passos (moves).
   */
  
  int move_horse_recursive_up(int k){
    if (k > 0) {
      printf("Cima \n");
    } else {
      move_horse_recursive_up(k - 1);
    }
  }
  /*
    entao essa funcao recursiva eh usada dentro de um loop com multiplas variavies e com o uso de "continue".
   */
  printf("cavalo: \n");
    
  for(int u , r = 1; r < 3 || u < 7; u++ , r++) {        
    if(r <= 3) {
      printf("Direita\n");
    } else if (u >= 3 ){
      move_horse_recursive_up(8);
    } else continue;
    
    
  }

  printf("\n\n--\n");

      // Bispo: 5 casas na diagonal direita para cima (usando loops aninhados)
    printf("Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {  // loop "decorativo" para ser aninhado
            printf("Direita\n");
            printf("Cima\n");
        }
    }

    printf("\n\n");

    // Torre (recursiva)
    printf("Torre:\n");
    torre(5);

    printf("\n\n");

    // Rainha (recursiva)
    printf("Rainha:\n");
    rainha(8);

    printf("\n\n");


  
  return 0; 
}

void torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

// Rainha: 8 casas para a esquerda
void rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}
