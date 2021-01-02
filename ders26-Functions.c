#include<stdio.h>


void hatayibas(int hata){
	
	
	printf("Hata Kodu %d",hata);
	
}


int main(){
	
	int sayi;
	printf("Lutfen Negatif Olmayan Bir Sayi Giriniz: ");
		scanf("%d",&sayi);
		
		if(sayi<0){
			
			hatayibas(404);
		}
	else
	{
		printf("Tesekkurler Negatif Olmayan Bir Sayi Girdiniz: Sayiniz: %d",sayi);  
	}
	
	
	return 0;
}
