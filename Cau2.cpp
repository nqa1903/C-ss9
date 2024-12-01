#include<stdio.h>

int main(){
	int n;
	if(n < 0){
		printf("Vui long nhap so phan tu > 0");
		return 1;
	}
	int arr[n];
	printf("Nhap vao so phan tu trong mang : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	int value , updateIndex;
	printf("Nhap gia tri muon sua : ");
	scanf("%d",&value);
	printf("Nhap vi tri muon sua : ");
	scanf("%d",&updateIndex);
	if(updateIndex < 0 || updateIndex > n){
		printf("Vi tri sua khong hop le \n");
	}
	arr[updateIndex] = value;
	printf("Mang sau khi sua la \n");
	for(int i = 0 ; i < n ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
