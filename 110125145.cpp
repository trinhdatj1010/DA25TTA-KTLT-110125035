#include<stdio.h>

int main()
{
	int a, b;
	int tong, hieu, tich;
	float thuong;
	
	printf("nhap so nguyen a:");
	scanf("%d", &a);
	printf("nhap so nguyen b:");
	scanf("%d", &b);
	
	//tinh
	tong= a+b;
	hieu= a-b;
	tich= a*b;
	thuong= 1.0*a/b;
	printf("\ntong %d",tong);
	printf("\nhieu %d",hieu);
	printf("\ntich %d",tich);
	printf("\nthuong %.2f",thuong);
	
	return 0;
}