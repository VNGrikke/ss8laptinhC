#include <stdio.h>
int main() {
  int n,i;
  printf("Nhap so phan tu cua mang 1 chieu:");
  scanf("%d", &n);
  float numbers [n];
  i = 0;
  for (; i < sizeof(numbers)/sizeof(float); i++) {
    printf("numbers[%d]=",i);
    scanf("%f",&numbers[i]); 
  }
  float sumNumbers = 0;
  i = 0;
  for(; i < sizeof(numbers)/sizeof(float); i++) {
    sumNumbers +=  numbers[i];
  }
  float avgNumbers = sumNumbers/(sizeof (numbers)/sizeof(float)); 
  printf("Trung binh cong cac phan tu trong mang la: %.2f\n", avgNumbers);
}
