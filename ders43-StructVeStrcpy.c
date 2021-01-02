#include<stdio.h>
#include<string.h>

struct Adress{
	char mahalle[15];
	char cadde[20];
	char sokak[15];
};
struct student{
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	struct Adress adres;
};

int main(){
	
	struct student st1;
	strcpy(st1.isim,"ismail");	
	strcpy(st1.soyisim,"aydemir");
	st1.numara=132;
	st1.yas=24;
	
	strcpy(st1.adres.mahalle,"Bahcelievler");
	strcpy(st1.adres.cadde,"8. cad");
	strcpy(st1.adres.sokak,"2031 sok.");
	printf("%s %s %d %d %s %s %s",st1.isim,st1.soyisim,st1.numara,st1.yas,st1.adres.mahalle,st1.adres.cadde,st1.adres.sokak);
	
	
	return 0;
}
