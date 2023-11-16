#include <stdio.h>
int main() {
    int numbers[5];
    int i=0;
    for (; i < 5; i++) {
      printf("numbers[%d]=",i);
      scanf("%d", &numbers[i]);
  }
    printf("Gia tri cac phan tu trong mang:\n");
	i = 0;
    for ( ; i < 5; i++){ 
      printf("%d\t", numbers[i]);
    }
}
