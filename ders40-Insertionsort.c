#include<stdio.h>


#define MAX 50


void insertionsort(int arr[],int size){
	int i,j;
	int element;
	
	for (i=1;i<size;i++){
		element = arr[i];
		j=i-1;
		
		while(j>=0 && arr[j] > element){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = element;
		
	}
}


int main(){
	/*
	int i;
	int array[MAX],size;
	printf("Kac Elemanli Dizi istiyorsunuz? : ");
	scanf("%d",&size);
	printf("%d sayisi kadar eleman giriniz.",size);
	
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	(array,size);
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}	
	
	return 0; */

	int dizi[MAX],size;
	int i;
	printf("Dizi Kac Elemanli?...");
	scanf("%d",&size);
	printf("Belirlediginiz %d adet dizi elemanini giriniz.",size);
	for(i=0;i<size;i++){
		scanf("%d",&dizi[i]);
	}
	
	insertionsort(dizi,size);
	
	for(i=0;i<size;i++){
		printf("%d ",dizi[i]);
	}
	
	return 0;
	
	
}
