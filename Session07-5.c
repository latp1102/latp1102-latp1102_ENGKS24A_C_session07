#include<stdio.h>

int main(){
	int a[5] = {1,2,3,4,6};
	int n;
	int i;
	int max=a[0];
	
	for(i = 1; i < 5; i++){
		if(a[i]>max){
			max = a[i];
		}	
	}
	
	printf(" phan tu lon nhat = %d\n ",max);
	
	return 0;
}
