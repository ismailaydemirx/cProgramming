#include<stdio.h>

int main()
{
	
	int toplam,i;
	
	/*
	for(i=1;i<=10;i++)
	{
		
		if(i%2==1)
		{
			continue;
		}
		
		toplam+=i;
	}
	
	printf("%d",toplam);
	*/
	
	i=0;
	while(i<=10)
	{
		i++;	
		if(i%2==1)
		{
			continue;
		}
		toplam+=i;
	
	}
	printf("%d",toplam);
	return 0;
}
