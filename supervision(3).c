#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("project.txt","a");
	char data[100];
	if(p==NULL)
	{
		printf("Colude not open file.");
	}
	else
	{
		printf("Enter data=");
		gets(data);
		fputs(data,p);
		printf("Line add sucessfully");
		fclose(p);
	}
	p=fopen("project.txt","r");
	if(p==NULL)
	{
		printf("colude not open file.");
	}
	else
	{
		while(fgets(data,50,p) != NULL)
		{
			printf("%s",data);		
		}
		fclose(p);
	}
}
