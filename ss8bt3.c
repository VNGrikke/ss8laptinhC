#include<stdio.h>
int main(){
	int findNumber,n,i,sum=0;
	printf("nhap so phan tu co trong mang ");
	scanf("%d",&n);
	int numbers[n];
	
	for (i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	printf("nhap vao so can tim:");
	scanf("%d",&findNumber);
	
	for (i=0;i<n;i++){
		if(findNumber==numbers[i]){
			printf("so can tim o vi tri numbers[%d]\n",i);
			sum += numbers[i];
		}
	}
	printf("tong cac so tim dc=%d",sum);
}
