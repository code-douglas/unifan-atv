#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSort(int vetor[], int tam) {
  int i, j, grupo, troca;

  if(tam < 2) {
    return;
  }

  grupo = vetor[tam / 2];

  for(i = 0, j = tam - 1; ; i++, j--) {
    while(vetor[i] < grupo) {
      i++;
    };

    while(grupo < vetor[j]) {
      j--;
    };

    if(i >= j) {
      break;
    }

    troca = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = troca;
  }

  quickSort(vetor, i);
  quickSort(vetor + i, tam - i);
}

int main() {
  int vetor[1000];
  srand(time(NULL));

  for (int i = 0; i < 1000; i++) {
    vetor[i] = rand() % 10000 + 1;
  }

  clock_t inicio, fim;
  double tempo_execucao;

  inicio = clock();
  quickSort(vetor, 1000);
  fim = clock();

  for (int i = 0; i < 1000; i++) {
    printf("%d\n", vetor[i]);
  }

  tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
  printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

  return 0;
}