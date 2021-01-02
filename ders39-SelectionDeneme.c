#include<stdio.h>

int dizi[100];
int temp;
int min;

void selectionSort(int dizi[],int elemanSayisi){
	int i,j;
	
	for(i=0;i<elemanSayisi-1;i++){
		min = i;
		for(j=i;j<elemanSayisi;j++){
			if(dizi[j] < dizi[min]){
				min = j;
				
			}
		}
		temp=dizi[i];
		dizi[i]= dizi[min];
		dizi[min] = temp;
	}
}



int main(){
	int adet,i;
	printf("\n Kac adet sayi gireceksiniz...");
	scanf("%d",&adet);
	
	for(i=0;i<adet;i++){
		printf("Lutfen %d. sayiyi giriniz...",i+1);
		scanf("%d",&dizi[i]);
	}
	
	selectionSort(dizi,adet);
	
	for(i=0;i<adet;i++){
		printf("%d ",dizi[i]);
	}
	
	
	return 0;
}
