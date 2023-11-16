#include <stdio.h>
int main() {
  int row, col,i,j;
  printf("Nhap so dong va so cot cua mang 2 chieu:"); 
  scanf("%d %d", &row, &col);
  int numbers[row][col];
  i = 0;
  for (; i < row; i++){
  	j = 0;
    for (; j < col; j++){
      printf("numbers[%d][%d]=",i,j);
      scanf("%d", &numbers[i][j]);
    }
  }
  printf("Gia tri cac phan tu mang 2 chieu:\n"); 
  i = 0;
  for(; i < row ; i++){
  	j = 0;
    for (; j < col; j++){
      printf("%d\t" , numbers[i][j]);
    }
    printf("\n");
  }
}
