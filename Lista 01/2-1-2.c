#include <stdio.h>

int main () {
  int A[] = {4, 8, 9, 3, 5, 2};
  int ALength = 5;

  for (int j = 1; j < ALength; j++) {
    int key = A[j];
    int i = j-1;

    // printf("::%zu\n", sizeof A);
    fprintf(stdout, "linha 10\n");

    while (i >= 0 && A[i] < key) {
      A[i+1] = A[i];
      i = i - 1;
      fprintf(stdout, "linha 15\n");
    }

    A[i+1] = key;
  }

  for (int i = 0; i < ALength; i++)
    printf("%d-", A[i]);
}