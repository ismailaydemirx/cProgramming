#include<stdio.h>

char *gunismi(char *gundizisi[],int uzunluk,int hangigun){
		
	if(hangigun>=1 && hangigun<=7){
		return gundizisi[hangigun-1];
	}
	else{
		return NULL;
	}
}

int main(){
	
	char *gunler[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	
	int n;
	scanf("%d",&n);

	
	char *p = gunismi(gunler,7,n);
	
	if ( p == NULL){
		
		printf("Yanlis deger girdiniz 1-7 arasinda deger giriniz.");
	}
	else{
		
		printf("Belirlediginiz Gun: %s",p);
	}
	
	
	return 0;
}
