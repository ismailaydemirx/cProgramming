#include<stdio.h>

int main(){
	
	int ilkendex,sonendex,fark;
	
	float tarife;
	
	printf("ilk endex degerini giirniz =");
	
	scanf("%d",&ilkendex);
	
	printf("Son endex degerini giriniz ");
	
	scanf("%d",&sonendex);
	
	fark= sonendex - ilkendex;
	
	printf("Lutfen tarifenizi giriniz =");
	
	scanf("%f",&tarife);
	
	printf("Bu ayki odemeniz gereken elektirik faturasi tutari = %f Turk Lirasidir'",fark*tarife);
	
	
	return 0;
	/*
	float yaricap,cevre,alan;
	 
	 printf("Lutfen Dairenin yaricapini giriniz = ");
	 
	 scanf("%f",&yaricap);
	 
	 cevre=2*3.14*yaricap;
	 
	 alan = 3.14*yaricap*yaricap;
	 
	 
	printf("Dairenizin Cevresi = %f\nDairenizin Alani = %f",cevre,alan);
	
	return 0;
	*/
}
