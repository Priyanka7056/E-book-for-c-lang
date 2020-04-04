#include<stdio.h>
#include<process.h>
#include<conio.h>
int ifstat(),ifelse(),ifelselad(),brk(),swtch();
int ch;
int e1(),e2(),e3(),e4(),e5();
e1()
{
	int v;
printf("Enter the number :");

scanf("%d", &v);

if(v<10)

printf("\nNumber entered is less than 10");

}
e2()
{
	int s,d;
printf("\n Enter a Number :");

scanf("%d",&s);

d=s%10;

if(d==5)

{

  s=s/10;

  printf("\n Square = %d%d",s*s++,d*d);

}

else

  printf("\n Invalid Number");
}
e3()
{
	int initial,final,consumed;

float total;

printf("\n Initial & Final Readings :");

scanf("%d %d", &initial, &final);

consumed = final-initial;

if(consumed>=200 && consumed<=500)

total=consumed * 3.50;

else if(consumed>=100 && consumed<=199)

total= consumed * 2.50;

else if(consumed<100)

total=consumed*1.50;

printf("Total bill for %d unit is %f",consumed,total);

getche();
}
e4()
{
	int nc;

printf("\nEnter Number of Calls :");

scanf("%d",&nc);

if(nc<100)

goto free;

else if(nc>99 && nc<200)

goto charge1;

else if(nc>199 && nc<300)

goto charge2;

else

goto charge3;

free :

printf("\n No charges.");

return 0;

charge1:

printf("\n Total Charges : %d Rs.",nc*1);

return 0;

charge2:

printf("\n Total Charges : %d Rs.",nc*2);

return 0;

charge3:

printf("\n Total Charges : %d Rs.",nc*3);
}
e5()
{
	int a,b,c,R;

printf("\t =================");

printf("\n\t MENU");

printf("\n\t =================");

printf("\n\t[1] ADDITION");

printf("\n\t[2] SUBTRACTION");

printf("\n\t[3] MULTIPLICATION");

printf("\n\t[4] DIVISION");

printf("\n\t[5] REMAINDER");

printf("\n\t[6] LARGER OUT OF TWO");

printf("\n\t=================");

printf("\n\n\t ENTER YOUR CHOICE :");

scanf("%d", &ch);

if(ch<=6 & ch>0)

{

   printf("Enter Two Numbers :");

   scanf("%d %d",&a,&b);

}

   switch ( ch)

   {

      case 1 :

      c=a+b;

      printf("\n Addtion : %d",c);

      break;

      case 2 :

      c=a-b;

      printf("\n Subtraction : %d",c);

      break;

      case 3 :

      c=a*b;

      printf("\n Multiplication : %d",c);

      break;

      case 4 :

      c=a/b;

      printf("\n Division : %d",c);

      break;

      case 5 :

      c=a%b;

      printf("\n Remainder : %d",c);

      break;

      case 6 :

      if(a>b)

      printf("\n\t %d (a) is larger than %d (b).",a,b);

      else

      if(b>a)

      printf("\n\t %d (b) is larger than %d (a).",b,a);

      else

      printf("\n\t %d (a) & %d (b) are same.",a,b);

      break;

      case 0 :

      printf("\n Terminated by choice");

      break;

      default :

      printf("\n Invalid Choice");
}
}

ifstat()
{
	FILE *ba;
	ba=fopen("ifstat.txt","r+");
	if(ba==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ba))
	{
		printf("%c",fgetc(ba));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		e1(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
ifelse()
{
	FILE *bb;
	bb=fopen("ifelse.txt","r+");
	if(bb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(bb))
	{
		printf("%c",fgetc(bb));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		e2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
ifelselad()
{
	FILE *bc;
	bc=fopen("ifelselad.txt","r+");
	if(bc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(bc))
	{
		printf("%c",fgetc(bc));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		e3(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
brk()
{
	FILE *bd;
	bd=fopen("brk.txt","r+");
	if(bd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(bd))
	{
		printf("%c",fgetc(bd));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		e4(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
swtch()
{
	FILE *be;
	be=fopen("swtch.txt","r+");
	if(be==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(be))
	{
		printf("%c",fgetc(be));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nOUTPUT-\n");
		e5(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
