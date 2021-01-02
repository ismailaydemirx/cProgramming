#include<stdio.h>

int main()
{
	
	printf("[1] - Basamak degerleri topla\n");
	printf("[2] - Basamak degerlericCarp\n");
	printf("[3] - Ters yuz sayi mi?\n");
	printf("[4] - Palindrom sayi mi?\n");
	
	int sayi, secenek;
	int b1,b2,b3,b4;//sayinin basamak degerlerini tutar
	int ab,cd,ba,dc;//4 basamakli sayiya cevirme
	printf("Lutfen menuden bir secim yapiniz: ");
	scanf("%d",&secenek);
		if(secenek>4)
	{
		printf("Menuden Dogru Bir Secim Yapmadiginiz icin program sonlandiriliyor...");
		return 0;
	}
	else if(secenek<0)
	{
		printf("Menuden Dogru Bir Secim Yapmadiginiz icin program sonlandiriliyor...");
		return 0;
	}
	
	printf("Lutfen 4 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	

	
	if(sayi > 999)
{
		if(sayi<10000)
	{
				
	b1= sayi%10;
	sayi-=b1;
	sayi/=10;
	b2 = sayi%10;
	sayi-=b2;
	sayi/=10;
	b3= sayi % 10;
	sayi-=b3;
	sayi/=10;
	b4= sayi%10;

	switch(secenek)
	{
		
		case 1://basamak degerlerini toplar
			printf("Sayinizin rakamlari toplami = %d",b1+b2+b3+b4);
			break;

		case 2://basamak degerlerini carpar
			printf("Sayinizin rakamlari carpimi = %d",b1*b2*b3*b4);
			break;

		case 3://ters yüz sayi mi kontrol eder
			
			ab = b4*10+b3;
			cd = b2*10+b1;
			ba = b3*10+b4;
			dc = b1*10+b2;
			
			if(ab*cd == ba*dc)
			{
				printf("Sayiniz Ters yuz sayidir.");
			}
			else
			{
				printf("Sayiniz Ters yuz sayi degildir.");
			}
			break;		

		case 4://palindrom sayi mi kontrol eder
			if(b1==b4)
			{
				if(b2==b3)
				{
					printf("Sayiniz bir palindrom sayidir.");
				}
				else{
				printf("Sayiniz bir palindrom sayi degildir.");
			}
			}
			else{
				printf("Sayiniz bir palindrom sayi degildir.");
			}
			break;		
			
					
		default:
			printf("Eksik Ya da Yanlis tusladiniz lutfen tekrar deneyiniz");
			break;
		}
	
	}
	else
	{
		printf("Yanlis Bir deger Girdiniz.Lutfen 4 basamakli bir sayi giriniz.");
	}
}
	else
	{
		printf("Yanlis Bir deger Girdiniz.Lutfen 4 basamakli bir sayi giriniz.");
	}
	
	
	return 0;
}
