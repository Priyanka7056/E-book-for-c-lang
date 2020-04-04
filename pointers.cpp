#include<stdio.h>
#include<conio.h>
int pntr(),feat(),pntadd(),pntr_decl(),pntropr();
int ch;
int eg1(),eg2(),eg3();
eg1()
{
	int num;
	
printf("Enter a Number = ");

scanf("%d",&num);

printf("Value of num =%d\n",num);

printf("Address of num=%u\n",&num);

getche();
}
eg2()
{
	char c;

int i;

float f;

printf("Enter alphabet, number, float=");

scanf("%c %d %f",&c,&i,&f);

printf("Value of c=%c i=%d f=%f\n",c,i,f);

printf("\nAddress of(c)%c =%u",c,&c);

printf("\nAddress of(i)%d =%u",i,&i);

printf("\nAddress of(f)%.2f =%u",f,&f);

getche();
}
eg3()
{
	int x,*x1;

char y,*y1;

float z,*z1;

printf("Enter integer, character, float Values \n");

scanf("%d %c %f",&x,&y,&z);

x1=&x;

y1=&y;

z1=&z;

printf("Address of x = %u\n",x1);

printf("Address of y = %u\n",y1);

printf("Address of z = %u\n",z1);

x1++;

y1++;

z1++;

printf("\nAfter Increment in Pointers\n");

printf("\nNow Address of x=%u\n",x1);

printf("Now Address of y=%u\n",y1);

printf("Now Address of z=%u\n",z1);

printf("\nSize of Integer: %d",sizeof(x));

printf("\nSize of Character: %d",sizeof(y));

printf("\nSize of Float: %d",sizeof(z));
}

pntr()
{
	FILE *ea;
	ea=fopen("pntr.txt","r+");
	if(ea==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ea))
	{
		printf("%c",fgetc(ea));
	}
}
feat()
{
	FILE *eb;
	eb=fopen("feat.txt","r+");
	if(eb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(eb))
	{
		printf("%c",fgetc(eb));
	}
}
pntadd()
{
	FILE *ec;
	ec=fopen("pntadd.txt","r+");
	if(ec==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ec))
	{
		printf("%c",fgetc(ec));
	}
		scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		eg1(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
pntr_decl()
{
	FILE *ed;
	ed=fopen("pntr decl.txt","r+");
	if(ed==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ed))
	{
		printf("%c",fgetc(ed));
	}
		scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		eg2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
pntropr()
{
		FILE *ee;
	ee=fopen("pntr opr.txt","r+");
	if(ee==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ee))
	{
		printf("%c",fgetc(ee));
	}
		scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		eg3(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
