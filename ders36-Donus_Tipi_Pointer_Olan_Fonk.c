#include<stdio.h>
#include<string.h>
char *dondur(char *p,int index){
	int uzunluk = strlen(p);
	
	if (index > uzunluk){
		
		return NULL;
	}
	else{
		return p+index;
	}
	
	
}


int main(){
	
//	int *p = NULL; // null = 0 demektir  *p=0 da yapabilirdik sorun olmaz.
	
	
	char dizi[]="yazilim"; 
		
	char *p = dondur(dizi,2); 
	
	if(p == NULL){
		
		printf("Pointer = Null' dur");
	}
	else{
		printf("%s",p);
		
	}
	
	
	return 0;
}
