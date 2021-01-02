#include<stdio.h>


#define MAX 22

void bubblesort(int arr[],int size){
	
	int i,k;
	
	for(i=0;i<size;i++){
		for(k=1;k<size;k++){
			if (arr[k-1]>arr[k]){
				int temp= arr[k];
				arr[k] = arr[k-1];
				arr[k-1]=temp;
			}
		}
		
	}
	
}



int main(){
	int i;
	int array[MAX],size;
	printf("Kac Elemanli Dizi istiyorsunuz? : ");
	scanf("%d",&size);
	printf("%d sayisi kadar eleman giriniz.",size);
	
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	bubblesort(array,size);
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	
	
	
	
	return 0;
}
