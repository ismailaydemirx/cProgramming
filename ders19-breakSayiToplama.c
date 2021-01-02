#include<stdio.h>
#include<stdbool.h>

int main()
{
	
	int i,sayi,toplam=0;
	
	for(i=0; true ;i++)
	{
		printf("Sayi Giriniz (Cikmak icin -3'e basin')");
		scanf("%d",&sayi);
		
		if(sayi==-3)
		{
			break;
		}
		toplam=toplam+sayi;
	}
	printf("%d",toplam);
	
	
	return 0;
}
