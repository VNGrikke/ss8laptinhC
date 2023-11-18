#include<stdio.h>
int main(){
	int i,n,updateValue,updateIndex;
	printf("nhap vao so luong cua mang:");
	scanf("%d",&n);
	int numbers[n];
	for (i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	printf("nhap vao gia tri update:");
	scanf("%d",&updateValue);
	printf("nhap vao gia tri can update:");
	scanf("%d",&updateIndex);
	for (i=0;i<n;i++){
		if (numbers[i]==updateIndex){
			numbers[i]=updateValue;
		}
	}
	for (i=0;i<n;i++){
		printf("%d",numbers[i]);
	}
}
