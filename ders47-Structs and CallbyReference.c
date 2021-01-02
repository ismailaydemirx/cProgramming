#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	char sname[20];
	int no;	
	
};
void  getpoint(struct student *p){
	strcpy(p->name,"Ersin");
	strcpy(p->sname,"bayar");
	p->no = 12;

	
}

void show(struct student *p){
	printf("Student Infos:\nName:%s\nSurname:%s\nNumber:%d\n",p->name,p->sname,p->no);
}

int main(){
	
	
	struct student st1 = {"ismail","aydemir",502};
	
	getpoint(&st1);
	
	printf("%s %s %d",st1.name,st1.sname,st1.no);
	
	
	
	
	
	return 0;
}
