#include<stdio.h>

int main(){
	int n; 
	int num[n];
	int i;
	
	printf("Moi ban nhap vao so phan tu mang: ");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		printf("Moi ban nhap vao phan tu so le thu %d: ",i + 1);
		scanf("%d",&num[i]);
		while(num[i] % 2 == 0){
			printf("Moi ban nhap vao phan tu so le thu %d : ", i + 1);
            scanf("%d", &num[i]);
		}
	}
	
	return 0;
}
