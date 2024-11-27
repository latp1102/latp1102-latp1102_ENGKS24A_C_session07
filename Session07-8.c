#include<stdio.h>
int main(){
	int a, b;
	
	printf ("Moi ban nhap vao so hang: ");
	scanf("%d",&a);
	printf ("Moi ban nhap vao so cot: ");
	scanf("%d",&b);
	
	int list[a][b];
	
	int i, j;
	for(i = 0;i < a;i++){
		for (j = 0;j < b;j++){
			printf("So %d hang %d: ",(j + 1),(i + 1));
			scanf("%d", &list[i][j]);
		} 
	} 
	for(i = 0;i < a;i++){
		for (j = 0;j < b;j++){
			printf("%d ", list[i][j]);
		} 
		printf("\n");
	} 
	
	return 0;
}
