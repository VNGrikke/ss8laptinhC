#include<stdio.h>
int main(){
	int n,i;
	printf("nhap so phan tu cua mang 1 chieu:");
	scanf("%d",&n);
	int max,min,numbers[n];
	
	for (i = 0; i < n ; i++) {
    printf("numbers[%d]=",i);
    scanf("%d",&numbers[i]); 

	}
	max = numbers[0];
    for (i = 1;i< n ;i++){
    	if (max < numbers[i]){
    		max = numbers[i];
		}
	}
	printf("max: %d ",max);
	min = numbers[0];	
	for (i = 1;i< n ;i++){
    	if (min > numbers[i]){
    		min = numbers[i];
    	}
	}
	printf("\nmin: %d ",min);
}

