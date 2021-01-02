#include<stdio.h>

#define MAX 30

void selectionsort(int arr[],int size){
	int i,j;
	int minind;
	for(i=0;i < size; i++){
		minind=i;
		for(j=i+1; j<size;j++){
			if(arr[j] < arr[minind]){
				minind=j;
			}
		}
		int temp=arr[i];
		arr[i] = arr[minind];
		arr[minind] = temp;
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
	
	selectionsort(array,size);
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}	
	
	return 0;

}
