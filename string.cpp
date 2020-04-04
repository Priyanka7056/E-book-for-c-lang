#include<stdio.h>
#include<conio.h>
#include<string.h>
int str(),decl(),dis(),strfunc();
int ch;
int EXA1(),EXA2(),EXA3();
EXA1()
{
	char name1[6]={'S','A','N','J','A','Y'};

char name2[7]={'S','A','N','J','A','Y'};

printf("Name1 = %s",name1);

printf("\nName2 = %s",name2);
}
EXA2()
{
	char text[15]="PRABHAKAR";

printf("%s\n",text);

printf("%.5s\n",text);

printf("%.8s\n",text);

printf("%.15s\n",text);

printf("%-10.4s\n",text);

printf("\n%11s",text);
}
EXA3()
{
	char text[20];

int len;

printf("Type Text Below.\n");

gets(text);

len=strlen(text);

printf("Length of String =%d",len);
}

str()
{
	FILE *ya;
	ya=fopen("str.txt","r+");
	if(ya==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ya))
	{
		printf("%c",fgetc(ya));
	}
}
decl()
{
	FILE *yb;
	yb=fopen("decl.txt","r+");
	if(yb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(yb))
	{
		printf("%c",fgetc(yb));
	}
		scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		EXA1(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
dis()
{
	FILE *yc;
	yc=fopen("dis.txt","r+");
	if(yc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(yc))
	{
		printf("%c",fgetc(yc));
	}
		scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		EXA2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
strfunc()
{
	FILE *yd;
	yd=fopen("strfunc.txt","r+");
	if(yd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(yd))
	{
		printf("%c",fgetc(yd));
	}
		scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		EXA3(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}

