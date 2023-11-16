#include<stdio.h>
int main(){
	int n,i,addIndex,addValue;
	printf("nhap so luong phan tu co trong mang:");
	scanf("%d",&n);
	int oldNumbers[n],newNumbers[n+1];
	
	for (i=0;i<n;i++){
		printf("oldNumbers[%d]=",i);
		scanf("%d",&oldNumbers[i]);
	}
	printf("nhap vi tri va chu so ban muon chen:");
	scanf("%d %d",&addIndex,&addValue);
	
	for (i=0; i<addIndex; i++){
		newNumbers[i] = oldNumbers[i];
	}
	
	newNumbers[addIndex] = addValue;
	
	for (i=(addIndex+1); i<n+1; i++){
		newNumbers[i] = oldNumbers[i-1];
	}
	printf("mang moi la:");
	for (i=0;i<n+1;i++){
		printf("%d",newNumbers[i]);
	}
}
