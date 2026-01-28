#include<stdio.h>
int main()
{
	int a,b,t,h,ti;
	float th;
	
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	
	printf("\nTong = %d",t=a+b);
	printf("\nHieu = %d",h=a-b);
	printf("\nTich = %d",ti=a*b);
	printf("\nThuong = %.2f",th=a*1.0/b);
	
	return 0;
}

