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
	int deleteIndex;
	printf("Nhap vao vi tri muon xoa : ");
	scanf("%d",&deleteIndex);
	if(deleteIndex < 0 || deleteIndex > n){
		printf("Vi tri xoa khong hop le");
	}
	for(int i = deleteIndex - 1 ; i < n ; i++){
		arr[i] = arr[i+1];
	}
	n--;
	printf("Mang sau khi xoa la \n");
	for(int i = 0 ; i < n ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
