#include<stdio.h>

int main(){
	int a[100];
	int n;
	int i;
	
	
	while(n < 1 || n >100){
		printf("Moi ban nhap vao so phan tu cua mang: ");
		scanf("%d", &n);
	}
	 
	for(int i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Mang vua nhap: ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
