#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int vetor[], int tam) {
  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
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
  bubble_sort(vetor, 1000);
  fim = clock();

  for (int i = 0; i < 1000; i++) {
    printf("%d\n", vetor[i]);
  }

  tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
  printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

  return 0;
}
