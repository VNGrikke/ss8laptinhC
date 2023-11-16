#include<stdio.h>
int main(){
	int n,m,i,j,sum=0;
	printf("nhap so cot so hang cua mang: ");
	scanf("%d %d",&n,&m);
	int numbers[n][m];
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("numbers[%d][%d]=",i,j);
      		scanf("%d", &numbers[i][j]);
		}
	}
	printf("cac so chan co trong mang ");
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if(numbers[i][j]%2==0){
				printf("%d,",numbers[i][j]);
				sum += numbers[i][j];
			}
		}
	}
	printf("tong cac so chan: %d",sum);
}
