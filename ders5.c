#include<stdio.h>

int main(){
	
	
	int x,y,sonuc;
	
	printf("1. Sayiyi Giriniz = ");
	
	scanf("%d",&x);
	
	printf("2. Sayiyi Giriniz = ");
	
	scanf("%d",&y);
	
	sonuc=x-y;
	
	printf("%d - %d = %d\n",x,y,sonuc);
	
	sonuc=x+y;
	
	printf("%d + %d = %d\n",x,y,sonuc);
	
	sonuc=x%y;
	
	printf("%d %% %d = %d\n",x,y,sonuc);
	
	return 0;
}
