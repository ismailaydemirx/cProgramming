#include<stdio.h>

void degerdegis(int a,int b){
	
	int gecici=a;
	
	a=b;
	b=gecici;
	
	printf("a: %d  b: %d\n",a,b);
}



int main(){
	
	int x=5,y=10;
	
	degerdegis(x,y);
	
	printf("x: %d  y: %d\n",x,y);	
	
	
	
	
	return 0;
}    
