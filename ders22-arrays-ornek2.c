#include<stdio.h>

int main()
{
	
	float sayilar[5];
	float toplam=0.0;
	int i;
	
	for(i=0;i<=4;i++)
	{
		printf("%d. Sayiyi Giriniz: ",i);
		scanf("%f",&sayilar[i]);
	}
	
	for(i=0;i<5;i++){
		
		toplam+=sayilar[i];
	}
	printf("Girdiginiz sayilarin aritmetik ortalamasi= %.2f'dir",toplam/5);
	
	
	
	return 0;
}
