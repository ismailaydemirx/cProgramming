#include<stdio.h>

int max(int *a,int uzunluk){
	
	int maks = a[0];
	int i;
	
	for(i=1;i<uzunluk;i++){
		
		if(a[i]>maks){
			
			maks=a[i];
		}
	}
	return maks;
	
	
}



int main(){
	
	int sayilar[5]= {1,2,3,4,5};
	
	int maks=max(sayilar,6);
	
	printf("Sayilar Dizisinin En Buyuk elemani %d'dir.",maks);
	
	
	
	
	return 0;
}
