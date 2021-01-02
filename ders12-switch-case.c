#include<stdio.h>


int main()
{
	
	int sayi;
	printf("Lutfen 0-9 arasinda bir sayi giriniz: ");
	
	scanf("%d,",&sayi);
	
	switch(sayi)
	{
		case 0:
			printf("Sifir");
			break;
		case 1:
			printf("Bir");
			break;
		case 2:
			printf("Iki");
			break;
		case 3:
			printf("Uc");
			break;
		case 4:
			printf("Dort");
			break;
		case 5:
			printf("Bes");
			break;
		case 6:
			printf("Alti");
			break;
		case 7:
			printf("Yedi");
			break;
		case 8:
			printf("Sekiz");
			break;
		case 9:
			printf("Dokuz");
			break;
		default:
			printf("Yanlis deger girdiniz.\nLutfen 0-9 arasi bir sayi giriniz.");
			break;		
	}
	 
	
	
	
	
	
	return 0;
}
