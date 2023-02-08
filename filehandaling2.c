#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("demo.txt","w");
	char data[100];
	if(p==NULL)
	{
		printf("open file.");
	}
	else
	{
		printf("enter data");
		gets(data);
		fputs(data,p);
		fclose(p);
	}
	
		
}
