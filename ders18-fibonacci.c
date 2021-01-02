#include<stdio.h>

/*

Fibonacci Serisi
1,1,2,3,5,8,13,21.....


*/


int main()
{
	int sayi1=1;
	int sayi2=1;
	int i;
	
	printf("%d\n%d\n",sayi1,sayi2);
	for(i=0;i<12;i++)
	{
		
		int temp = sayi2;
		sayi2+=sayi1;
		sayi1=temp;
		
		printf("%d\n",sayi2);
	}
	
	return 0;
}
