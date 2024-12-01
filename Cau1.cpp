#include<stdio.h>

int main(){
	int arr[100];
	int n;
	printf("Nhap vao so phan tu : \n");
	scanf("%d",&n);
	if(n < 0 || n > 100){
		printf("Vui long nhap so phan tu > 0 va < 100");
		return 1;
	}  
	for(int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	int value , addIndex;
	printf("Nhap gia tri muon them vao mang : ");
	scanf("%d",&value);
	printf("Nhap vi tri muon them vao trong mang : ");
	scanf("%d",&addIndex);	
	if(addIndex <= 0){
		addIndex = 0;
	}
	if(addIndex >= n){
		addIndex = n;
	}
	for(int i = n ; i > addIndex ; i--){
		arr[i] = arr[i-1];
	}
	arr[addIndex] = value;
	n++;
	printf("Mang sau khi them la : \n");
	for(int i = 0 ; i < n ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
