#include<stdio.h>

int main(){
	int num[5] = {1,2,3,4,5};
	int i;
	for(i = 0;i < 5;i++){
		if(num[i] % 2 ==0){
			num[i] += 3;
		} else {
			num[i] += 2;
		}
	}
	
	for(i = 0;i < 5;i++){
		printf("phan tu %d co gia tri: %d\n",i,num[i]);
	}
	
	return 0;
}
