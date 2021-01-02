#include<stdio.h>
#include<string.h>

void terscevir(char dizi[]){
	
	int i,uzunluk,gecici;
	
	uzunluk = strlen(dizi);
	
	for(i=0; i < uzunluk/2; i++){
		
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-(1+i)];
		
		dizi[uzunluk-(1+i)]=gecici;
	}
}
	
	

int main(){

	char name[190];
	printf("Tersini istediginiz yaziyi giriniz: ");
	scanf("%s",name);
	
	
	
	terscevir(name);
	printf("%s",name);
	
	
	
	return 0;
}
