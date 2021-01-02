#include<stdio.h>

struct student{
	char name[10];
	char surname[10];
	int number;
};

void show(struct student a){
	printf("Student Infos: %s %s %d",a.name,a.surname,a.number);
}

struct student getinfo(){
		
		struct student neww;
		printf("Tell us your name , surname and number:");
		scanf("%s %s %d",&neww.name,&neww.surname,&neww.number);
		
		return neww;
		
};


int main(){
	
	struct student newstudent=getinfo();
	
	show(newstudent);
	
	
	
	return 0;
}
