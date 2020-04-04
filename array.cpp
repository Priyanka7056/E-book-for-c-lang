#include<stdio.h>
int introa(),arrinit(),termi(),charac(),oned(),operarr(),twod();
int ch;
int EX1(),EX2(),EX3(),EX4();
EX1()
{
	int num[5]={1,2,3,2,5};

printf("\n num[0] = %d Address : %u",num[0],&num[0]);

printf("\n num[1] = %d Address : %u",num[1],&num[1]);

printf("\n num[2] = %d Address : %u",num[2],&num[2]);

printf("\n num[3] = %d Address : %u",num[3],&num[3]);

printf("\n num[4] = %d Address : %u",num[4],&num[4]);

return 0;
}
EX2()
{
	int sumo=0,sume=0,i=0,odd[5],even[5],a=-1,b=-1;

for (i=1;i<=10;i++)

{

  if(i%2==0)

  even[++a]=i;

  else

  odd[++b]=i;

}

printf("\n\tEven \t\tOdd");

for(i=0;i<5;i++)

{

  printf("\n\t %d\t\t %d",even[i],odd[i]);

  sume=sume+even[i];

  sumo=sumo+odd[i];

}

printf("\n\t=====================\n");

printf("Addition: %d %14d",sume,sumo);
}
EX3()
{
	int num[5],j,k,s=0;

printf("\n Enter five Elements :");

for(j=0;j<5;j++)

{

  scanf("%d",&num[j]);

  s=s+num[j];

}

for(k=0;k<s;k++)

{

  for(j=0;j<5;j++)

  {

    if(num[j]==k)

    printf("%d",num[j]);

  }

}
}
EX4()
{
unsigned int *p,num[2][2]={4,5,6,7},j;

p=&num[0][0];

for(j=0;j<4;j++)

printf(" %d %u\n",*(p+j),(p+j));

}

introa()
{
	FILE *za;
	za=fopen("introa.txt","r+");
	if(za==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(za))
	{
		printf("%c",fgetc(za));
	}
}
arrinit()
{
	FILE *zb;
	zb=fopen("arrinit.txt","r+");
	if(zb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(zb))
	{
		printf("%c",fgetc(zb));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		EX1(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
termi()
{
	FILE *zc;
	zc=fopen("termi.txt","r+");
	if(zc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(zc))
	{
		printf("%c",fgetc(zc));
	}
}
charac()
{
	FILE *zd;
	zd=fopen("charac.txt","r+");
	if(zd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(zd))
	{
		printf("%c",fgetc(zd));
	}
}
oned()
{
	FILE *ze;
	ze=fopen("oned.txt","r+");
	if(ze==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ze))
	{
		printf("%c",fgetc(ze));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		EX2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
operarr()
{
	FILE *zf;
	zf=fopen("operarr.txt","r+");
	if(zf==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(zf))
	{
		printf("%c",fgetc(zf));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		EX3(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
twod()
{
	FILE *zg;
	zg=fopen("twod.txt","r+");
	if(zg==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(zg))
	{
		printf("%c",fgetc(zg));
	}
}

