#include<stdio.h>
#include<process.h>
int form(),flag(),conv(),unform(),lib(),points();
int exa1(),exa2();
int ch;
exa1()
{
	printf("\nOUTPUT-");
	printf("\n%.2s","abcdef");

printf("\n%.3s","abcdef");

printf("\n%.4s","abcdef");
}
exa2()
{
	int a=1,b=a+1,c=b+1,d=c+1;
	printf("\nOUTPUT-");
printf("\tA=%d\nB=%d \'C=%d\'",a,b,c);

printf("\n\b***D=%d**",d);

printf("\n*************");

printf("\rA=%d B=%d",a,b);
}

form()
{
	FILE *ab;
	ab=fopen("form.txt","r+");
	if(ab==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ab))
	{
		printf("%c",fgetc(ab));
	}
}
flag()
{
	FILE *ac;
	ac=fopen("flag.txt","r+");
	if(ac==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ac))
	{
		printf("%c",fgetc(ac));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: exa1(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
conv()
{
	FILE *ad;
	ad=fopen("conv.txt","r+");
	if(ad==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ad))
	{
		printf("%c",fgetc(ad));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: exa2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
unform()
{
	FILE *ae;
	ae=fopen("unform.txt","r+");
	if(ae==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ae))
	{
		printf("%c",fgetc(ae));
	}
}
lib()
{
	FILE *af;
	af=fopen("lib.txt","r+");
	if(af==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(af))
	{
		printf("%c",fgetc(af));
	}
}
points()
{
	FILE *ag;
	ag=fopen("points.txt","r+");
	if(ag==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ag))
	{
		printf("%c",fgetc(ag));
	}
}
