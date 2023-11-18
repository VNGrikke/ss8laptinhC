#include<stdio.h>
int main(){
	int i,n,deleteIndex;
	printf("nhap vao so luong cua mang:");
	scanf("%d",&n);
	int oldNumbers[n],newNumbers[n-1];
	for (i=0;i<n;i++){
		printf("oldNumbers[%d]=",i);
		scanf("%d",&oldNumbers[i]);
	}
	printf("nhap vao vi tri can xoa:");
	scanf("%d",&deleteIndex);

	for (i=0; i<deleteIndex; i++){
		newNumbers[i] = oldNumbers[i];
	}	
	for (i=(deleteIndex); i<n; i++){
		newNumbers[i] = oldNumbers[i+1];
	}
	for (i=0;i<n-1;i++){
			printf("%d",newNumbers[i]);		
	}
	printf("\nnhap vi tri muon xem:");
	scanf("%d",&i);
	printf("newNumbers[%d]=%d",i,newNumbers[i]);
}

