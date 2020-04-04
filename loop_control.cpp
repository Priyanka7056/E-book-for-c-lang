#include<stdio.h>
#include<conio.h>
int what(),fr(),nestfor(),whi(),dowhi();
int ch;
int E1(),E2(),E3(),E4();
E1()
{
	int i;

for(i=1;i<=5;i++)

printf("\n Number: %5d it’s Square: %5d",i,i*i);
}
E2()
{
	int i,j,n,k;
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
		   printf("*");
        }
        printf("\n");
    }
}
E3()
{
	int a=1,sum=0;

while(a<=10)

{

  printf("%3d",a);

  sum=sum+a;

  a++;

}

printf("\n Sum of 10 numbers :%d",sum);
}
E4()
{
	int i=1;

do

{

  printf("\n This is a program of do while loop.");

  i++;

}

while(i<=5);
}

what()
{
	FILE *az;
	az=fopen("what.txt","r+");
	if(az==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(az))
	{
		printf("%c",fgetc(az));
	}
}
fr()
{
	FILE *ay;
	ay=fopen("fr.txt","r+");
	if(ay==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ay))
	{
		printf("%c",fgetc(ay));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		E1(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
nestfor()
{
	FILE *ax;
	ax=fopen("nestfor.txt","r+");
	if(ax==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ax))
	{
		printf("%c",fgetc(ax));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		E2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
whi()
{
	FILE *aw;
	aw=fopen("whi.txt","r+");
	if(aw==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(aw))
	{
		printf("%c",fgetc(aw));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		E3(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
dowhi()
{
	FILE *av;
	av=fopen("dowhi.txt","r+");
	if(av==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(av))
	{
		printf("%c",fgetc(av));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		E4(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
