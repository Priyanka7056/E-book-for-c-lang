#include<stdio.h>
int introC(),ANSI(),language(),lang_converter(),structure(),rules(),execution(),advant(),header();

introC()
{
	FILE *a;
	a=fopen("introduction to c.txt","r+");
	if(a==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(a))
	{
		printf("%c",fgetc(a));
	}
}
ANSI()
{
    FILE *b;
	b=fopen("about ansi c.txt","r+");
	if(b==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(b))
	{
		printf("%c",fgetc(b));
	}	
}
language()
{
	FILE *c;
	c=fopen("language.txt","r+");
	if(c==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(c))
	{
		printf("%c",fgetc(c));
	}
}
lang_converter()
{
	FILE *d;
	d=fopen("assembler.txt","r+");
	if(d==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(d))
	{
		printf("%c",fgetc(d));
	}
}
structure()
{
	FILE *e;
	e=fopen("Structure of c.txt","r+");
	if(e==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(e))
	{
		printf("%c",fgetc(e));
	}
}
rules()
{
	FILE *f;
	f=fopen("prorules.txt","r+");
	if(f==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f))
	{
		printf("%c",fgetc(f));
	}
}
execution()
{
	FILE *g;
	g=fopen("execute.txt","r+");
	if(g==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(g))
	{
		printf("%c",fgetc(g));
	}
}
advant()
{
	FILE *h;
	h=fopen("advantage.txt","r+");
	if(h==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(h))
	{
		printf("%c",fgetc(h));
	}
}
header()
{
	FILE *i;
	i=fopen("head.txt","r+");
	if(i==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(i))
	{
		printf("%c",fgetc(i));
	}
}

