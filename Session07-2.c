#include<stdio.h>

int main(){
	int array[5] = {6,7,8,9,10};
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Moi ban nhap vao phan tu: ",i + 1);
		scanf("%d",&array[i]);
	}
	
	printf("phan tu thu 1 = %d\n",array[0]);
	printf("phan tu thu 2 = %d\n",array[1]);
	printf("phan tu thu 3 = %d\n",array[2]);
	printf("phan tu thu 4 = %d\n",array[3]);
	printf("phan tu thu 5 = %d\n",array[4]);
	
	return 0;
}
