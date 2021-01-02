#include<stdio.h>

struct Araba{
	int tekerleksayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;
}araba1,araba2;

int main(){
	
	struct Araba araba1 ={3,2,5,4.0,44};
	araba2=araba1;
	printf("%d %d %d %f %d",araba2.tekerleksayisi,araba2.vitessayisi,araba2.model,araba2.motor,araba2.vitessayisi);
	
}
