#include<stdio.h>

int main(){
	
	int a[3];
	int i;
	
	
	for(i = 0;i< 3;i++){
		a[i]= i * 2;
	}
	printf("cac phan tu trong mang: ");
	for (i = 0; i <3; i++  ){
		printf("%d ",a[i]);
	}
	printf("\ndo dai cua mang:%d\n",sizeof(a)/sizeof(a[0]));
	

	

	return 0;
}

