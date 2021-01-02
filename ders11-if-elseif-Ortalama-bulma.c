#include<stdio.h>

int main(){
	
	int vize1,vize2,final;
	printf("Merhaba Hosgeldiniz.\n2 Vize ve 1 Final notunuzu girdikten sonra\naldiginiz notun hangi harfe denk geldigini bulalim!\nHadi Baslayalim!\n");
	printf("1. Vize Notunuzu Giriniz: ");
	scanf("%d",&vize1);
	
	printf("2. Vize Notunuzu Giriniz: ");
	scanf("%d",&vize2);
	
	printf("Final Notunuzu Giriniz: ");
	scanf("%d",&final);
	
	float ort;
	
	ort = (vize1 + vize2 + final) / 3;
	
	if(ort>0)
{
		if(ort<=50)
	{ 
	
	printf("Aldiginiz not: %f ve harfiniz 'FF'dir.",ort);	
	}
	
	else if(ort<=55)
	{
		printf("Aldiginiz not: %f ve harfiniz 'DD'dir.",ort);
	}
	
	else if(ort<=60)
	{
		printf("Aldiginiz not: %f ve harfiniz 'DC'dir.",ort);
	}
	
	else if(ort<=65)
	{
		printf("Aldiginiz not: %f ve harfiniz 'CC'dir.",ort);
	}
	
	else if(ort<=70)
	{
 		printf("Aldiginiz not: %f ve harfiniz 'CB'dir.",ort);		
	}
	
	else if(ort<=75)
	{
		printf("Aldiginiz not: %f ve harfiniz 'BB'dir.",ort);
	}
	
	else if(ort<=85)
	{
		printf("Aldiginiz not: %f ve harfiniz 'BA'dir.",ort);
	}
	
	else if(ort<=100)
	{
		printf("Aldiginiz not: %f ve harfiniz 'AA'dir.",ort);
	}
	else
	{
	printf("Notunuz %f olarak hesaplanmistir.Bu degere karsilik bir harf notu bulunmamaktadir.Lutfen tekrar deneyiniz.",ort);
	}
}	
	else
	{
	printf("Notunuz %f olarak hesaplanmistir.Bu degere karsilik bir harf notu bulunmamaktadir.Lutfen tekrar deneyiniz.",ort);
	}


	
	return 0;
}
