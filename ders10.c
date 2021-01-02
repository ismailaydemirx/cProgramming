#include<stdio.h>
/*
format if-else
if(koþul_sorgusu)
{
Yapýlacak iþlemler;
}
else
{
Koþul sorgusu doðru deðilse yapýlacak iþlemler;
}

format -> üçlü þart operatörü

koþul sorgusu ?  doðru ise yapýlacak iþlem : yanlýþ ise yapýlacak iþlem;


*/

int main (){
	
	int sayi;
	printf("Bir Sayi Giriniz : ");
	scanf("%d",&sayi);
	
	sayi % 3 == 0 ? printf("Sayinin 3'e bolumunden kalan 0'dir"):sayi % 3 == 1 ? printf("Sayinin 3'e bolumunden kalan 1'dir"): printf("Sayinin 3'e bolumunden kalan 2'dir");
/*
	sayi % 2 ==0 ? printf("Sayiniz Cift Sayidir"): printf("Sayiniz Tek Sayidir.");

	if(sayi %3 ==0)
	{
		printf("Sayini 3'e bolumunden kalan 0'dir''");
	}
	
	else if(sayi % 3 == 1)
	{
		printf("Sayinin 3'e bolumunden kalan 1'dir.");
	}
	else
	{
		
		printf("Sayinin 3'e bolumunden kalan 2'dir.");
	}
*/
	return 0;
}
