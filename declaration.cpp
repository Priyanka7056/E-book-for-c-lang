#include<stdio.h>
int c_char(),del(),token(),ckey(),idn(),cons(),var(),rule(),cdat(),decin(),mod();
c_char()
{
	 FILE *aaa;
	aaa=fopen("c_char.txt","r+");
	if(aaa==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(aaa))
	{
		printf("%c",fgetc(aaa));
	}	
}
del()
{
	 FILE *bbb;
	bbb=fopen("del.txt","r+");
	if(bbb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(bbb))
	{
		printf("%c",fgetc(bbb));
	}	
}
token()
{
	 FILE *ccc;
	ccc=fopen("token.txt","r+");
	if(ccc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ccc))
	{
		printf("%c",fgetc(ccc));
	}	
}
ckey()
{
	 FILE *ddd;
	ddd=fopen("ckey.txt","r+");
	if(ddd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ddd))
	{
		printf("%c",fgetc(ddd));
	}	
}
idn()
{
	 FILE *eee;
	eee=fopen("idn.txt","r+");
	if(eee==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(eee))
	{
		printf("%c",fgetc(eee));
	}	
}
cons()
{
	 FILE *fff;
	fff=fopen("const.txt","r+");
	if(fff==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fff))
	{
		printf("%c",fgetc(fff));
	}	
}
var()
{
	 FILE *ggg;
	ggg=fopen("var.txt","r+");
	if(ggg==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ggg))
	{
		printf("%c",fgetc(ggg));
	}	
}
rule()
{
	 FILE *hhh;
	hhh=fopen("rule.txt","r+");
	if(hhh==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(hhh))
	{
		printf("%c",fgetc(hhh));
	}	
}
cdat()
{
	 FILE *iii;
	iii=fopen("cdat.txt","r+");
	if(iii==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(iii))
	{
		printf("%c",fgetc(iii));
	}	
}
decin()
{
	 FILE *jjj;
	jjj=fopen("decin.txt","r+");
	if(jjj==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(jjj))
	{
		printf("%c",fgetc(jjj));
	}	
}
mod()
{
	 FILE *kkk;
	kkk=fopen("mod.txt","r+");
	if(kkk==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(kkk))
	{
		printf("%c",fgetc(kkk));
	}	
}

