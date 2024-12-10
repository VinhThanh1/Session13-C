#include<stdio.h>
int arr(int a, int b){
	int array[a][b];
	for(int i =0;i<a;i++){
		for(int j =0;j<b;j++){
			printf("nhap gia tri arr[%d][%d] \n",i,j);
			scanf("%d",&array[i][j]);	
		}
	}
	for(int i =0;i<a;i++){
		for(int j =0;j<b;j++){
			printf("array[%d][%d] = %d\n",i,j,array[i][j]);
		}
	}
}
int main(){
	int rows;
	int colums;
	printf(" nhap so hang\n");
	scanf("%d",&rows);
	printf("nhap so cot\n");
	scanf("%d",&colums);
	arr(rows,colums);
return 0;

}

