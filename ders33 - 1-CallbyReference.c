#include<stdio.h>

void degerdegis(int *a,int *b){
	
	
	int bosbardak= *a;
	
	*a=*b;
	*b = bosbardak;
}



int main(){
	
	int x,y;
	printf("1. Sayinin Degerini giriniz: ");
	scanf("%d",&x);
	printf("2. Sayinin Degerini giriniz: ");
	scanf("%d",&y);	
	
	degerdegis(&x,&y);
	
	printf("1. sayi	: %d  2. sayi	: %d\n",x,y);
	
	
	
	
	return 0;
} 
