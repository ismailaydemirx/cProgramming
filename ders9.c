#include<stdio.h>

int main(){
	
	int sayi;
	printf("Lutfen bir tam sayi giriniz = ");
	scanf("%d",&sayi);
	if(sayi>10)
	{
		printf("Girdiginiz sayi 10 dan buyuktur.");
	}
	else if(sayi ==0)
	{
		printf("Girdiginiz sayi sifirdir.");
	}
	else if(sayi<0)
	{
		printf("Girdiginiz sayi negatif bir sayidir. ");
	}
	else if(sayi==10)
	{
		printf("Girdiginiz Sayi 10'dur.");
	}
	else
	{
		printf("Girdiginiz sayi pozitiftir");
	}
	
	return 0;
}
