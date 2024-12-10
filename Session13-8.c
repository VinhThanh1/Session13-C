#include<stdio.h>
int maxGCD(int a, int b){
int temp;
while(b!=0){
	 temp = b;
     b = a % b;
     a = temp;
}
return a;
}
int main(){
	int num1,num2;
printf("Nhap so thu 1 : ");
scanf("%d",&num1);
printf("Nhap so thu 2 : ");
scanf("%d",&num2);
int res=maxGCD(num1,num2);
printf("%d la UCLN cua 2 so %d va %d ",res,num1,num2);
return 0;
}
