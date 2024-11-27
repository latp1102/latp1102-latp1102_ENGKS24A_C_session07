#include<stdio.h>


int main (){
	
	int i,n;
	int a[n];
	int cout = 0;
	int k;
	printf("Moi ban nhap vao so phan tu mang: ");
	scanf("%d",&n);
	
	for (i = 0;i < n;i++){
		printf("Moi ban nhap vao so phan tu thu ", i + 1);
		scanf("%d",&a[i]);
	}
	
	printf("so nguyen to trong mang : ");
	
	for (i = 0;i < n;i++){
		if (a[i] == 1){
			continue;
		}
		for (k = 2;k <a [i];k++){
			if (a[i] % k == 0){
				cout++;
			}
		}
		if(cout == 0){
			printf("%d ", a[i]);
		}
		cout = 0;
	}
	
	
	return 0;
}
