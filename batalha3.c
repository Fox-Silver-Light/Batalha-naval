#include <stdio.h>
#include <stdlib.h>
int main(){
  int tabuleiro [10][10];
  int navio1 [3] = {3, 3, 3};
  int navio2 [3] = {3, 3, 3};
  
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      tabuleiro [i][j] = 0;
    }
  }
  int linha1 = 2;
  int coluna1 = 1;
  for (int i = 0; i < 3; i++){
    tabuleiro[linha1] [coluna1 + i] = navio1[i];
  }

  int linha2 = 1;
  int coluna2 = 7;
  for (int i = 0; i < 3; i++){
    tabuleiro[linha2 + i] [coluna2] = navio2[i];
  }
  int linha3 = 6;
  int coluna3 = 5;
  for (int i = 0; i < 4; i++){
    tabuleiro[linha3 + i][coluna3 + i] = 3;
  }
  int linha4 = 7;
  int coluna4 = 0;
  for (int i = 0; i < 5; i++){
    tabuleiro[linha4 - i][coluna4 + i] =3;
  }
  // criar matrizes de habilidade usando condicionais 
  int cone[3][3];
  int cruz[5][5];
  int octaedro[5][5];
    //matriz em formato de cone
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (j >= 1 - i && j <= 1 + i)
        cone[i][j] = 1;
      else cone [i][j] = 0;
    }
  }
  int origem_cone_linha = 7, origem_cone_coluna = 4;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (cone[i][j] == 1) {
        int linha5 = origem_cone_linha + (i - 1);
        int coluna5 = origem_cone_coluna + (j - 1);
        if (linha5 >= 0 && linha5 < 10 && coluna5 >= 0 && coluna5 < 10) {
          tabuleiro[linha5][coluna5] = 1;
        } 
      }
    }
  }
    // matriz em formato de cruz 
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      if (i == 2 || j == 2)
        cruz[i][j] = 1;
      else cruz[i][j] = 0;
    }
  }
  int origem_cruz_linha = 3, origem_cruz_coluna = 2;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      if (cruz[i][j] == 1){
        int linha6 = origem_cruz_linha + (i - 2);
        int coluna6 = origem_cruz_coluna + (j - 2);
        if (linha6 >= 0 && linha6 < 10 && coluna6 >= 0 && coluna6 < 10){
          tabuleiro[linha6][coluna6] = 1;
        }
      }
    }
  }
    // matriz em formato de octaedro vou usar a distancia manhattam para criar essa lógica.
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      if (abs(2 - i) + abs(2 - j) <= 2)
        octaedro[i][j] = 1;
      else octaedro[i][j] = 0;
    }
  }
  int origem_octaedro_linha = 2, origem_ocaedro_coluna = 7;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      if (octaedro[i][j] == 1){
        int linha7 = origem_octaedro_linha + (i - 2);
        int coluna7 = origem_ocaedro_coluna + (j - 2);
        if (linha7 >= 0 && linha7 < 10 && coluna7 >= 0 && coluna7 < 10){
          tabuleiro[linha7][coluna7] = 1;
        }
      }
    }
  }





  //lógica criada 
  printf("--- Tabuleiro de Batalha Naval com habilidades ---\n");
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      printf("%2d", tabuleiro[i][j]);
    }
    printf("\n");
  }
  return 0;
}
