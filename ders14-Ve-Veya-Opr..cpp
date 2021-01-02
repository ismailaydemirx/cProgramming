#include<stdio.h>

int main()
{
	/*
	
	|| --> Veya operatoru
	&& --> Ve operatoru

	*/

	
	int sayi1,sayi2;
	printf("1. Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	printf("2. Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	if(sayi1<12 || sayi2>46)
	{
		printf("Sayi1 12'den kucuktur veya Sayi2 46'dan buyuktur.");
	}
	
	/*
	if(sayi1>12 && sayi2<56)
	{
		printf("Sayi1 12'den buyuktur ve Sayi2 56'dan kucuktur.");
	}
	*/
	return 0;
}
