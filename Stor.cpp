#include<stdio.h>
int aut(),extrn(),reg(),stat(),statext(),type();
aut()
{
	FILE *aa;
	aa=fopen("auto.txt","r+");
	if(aa==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(aa))
	{
		printf("%c",fgetc(aa));
	}
}
extrn()
{
	FILE *bb;
	bb=fopen("extrn.txt","r+");
	if(bb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(bb))
	{
		printf("%c",fgetc(bb));
	}
}
reg()
{
	FILE *cc;
	cc=fopen("reg.txt","r+");
	if(cc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(cc))
	{
		printf("%c",fgetc(cc));
	}
}
stat()
{
	FILE *dd;
	dd=fopen("stat.txt","r+");
	if(dd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(dd))
	{
		printf("%c",fgetc(dd));
	}
}
statext()
{
	FILE *ee;
	ee=fopen("statext.txt","r+");
	if(ee==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ee))
	{
		printf("%c",fgetc(ee));
	}
}
type()
{
	FILE *ff;
	ff=fopen("type.txt","r+");
	if(ff==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ff))
	{
		printf("%c",fgetc(ff));
	}
}
