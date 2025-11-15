#include <stdio.h>
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

    //lógica criada 
  printf("--- Tabuleiro de Batalha Naval ---\n");
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      printf("%2d", tabuleiro[i][j]);
    }
    printf("\n");
  }
  return 0;
}
