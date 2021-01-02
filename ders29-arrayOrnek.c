#include<stdio.h>


	void bastir(int ourmatris[][3],int size){
		
		int i,j;
		
		for(i=0;i<size;i++){
			
			for(j=0;j<4;j++){
				
				printf("%d",ourmatris[i][j]);
				
			 }
			printf("\n");
		}
	}
	
	




int main()
{
	
	int matris[4][3];
	int i,j;
	
	printf("Matrisi Doldurunuz: ");
	
	for(i=0;i<4;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&matris[i][j]);
		}

	}
	bastir(matris,3 );
	
	
	
	
	return 0;
}
