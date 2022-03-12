#include <stdio.h>

int main(void) {
  int A[4] = {1, 1, 0, 1};
  int B[4] = {1, 0, 1, 1};
  int Cout = 0;

  int C[5];
  int C_length = 5;

  for (int i = 3; i >= 0; i--) {
    if (A[i] != B[i]) {
      printf("A != B\t");
      printf("A[%d]: %d B[%d]: %d\t\t", i, A[i], i, B[i]);
      printf("Cout: %d\n", Cout);
      C[i+1] = Cout ? 0 : 1;
      Cout = C[i+1] ? 0 : 1;
    }

    if (A[i] == 1 && B[i] == 1) {
      printf("A == B\t");
      printf("A[%d]: %d B[%d]: %d\t\t", i, A[i], i, B[i]);
      printf("Cout: %d\n", Cout);
      C[i+1] = 0 + Cout;
      Cout = 1;
    }

    if (A[i] == 0 && B[i] == 0) {
      printf("A == B\t");
      printf("A[%d]: %d B[%d]: %d\t\t", i, A[i], i, B[i]);
      printf("Cout: %d\n", Cout);
      C[i+1] = Cout;
      Cout = 0;
    }
  }

  C[0] = Cout;

  for (int i = 0; i < C_length; i++)
    printf("%d-", C[i]);
    
  return 0;
}