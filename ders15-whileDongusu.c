#include<stdio.h>


int main()
{
	
		
	/*
	döngü baþlatma
	
	while( kosul )
	
	{
	
	yapýlacak iþlemler;
	
	arttýrma
	}
	
	*/
	
	int n;
	int fact=1;
	printf("Faktoriyelini istediginiz sayiyiyi giriniz: ");
	scanf("%d",&n);
	
	while(n !=0)
	{
	printf("%d\n",n);

	fact=fact*n;
	n--;
	}
	printf("Faktoriyel Degeriniz = %d",fact);
	
	
	
	/* 
		int i;
	
	i=0;
	
	while(i<10)
	{
		printf("%d. Merhaba Dunya\n",i);
		
		
	i++;
	}
	
	printf("%d. Dongu Bitti",i);

	*/
	 
	
	
	
	
	
	 return 0;
}
