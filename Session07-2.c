#include<stdio.h>

int main(){
	int array[5] = {6,7,8,9,10};
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Moi ban nhap vao phan tu: ",i + 1);
		scanf("%d",&array[i]);
	}
    printf("Cac phan tu trong mang: ");
	for(i = 0;i<5;i++){
		printf("%d",array[i]);
	}
	


	
	return 0;
}




	
