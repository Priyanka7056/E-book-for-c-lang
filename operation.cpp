#include<stdio.h>
#include<process.h>
int com(),arith(),relatn(),assign(),gol(),bit(),ex2(),ex3(),ex4(),ex5(),ex6();
int ch;
ex2()
{
	int a,z,x=10,y=20;
	z=x*++y;

a=x*y;

printf("\n%d %d",z,a);

	printf("\n\nIn the above program, the equation z=x*y++ gives the result 200 because ‘y’ does not get incremented. After multiplication, ‘y’ incremented to 21. The second equation gives the result, i.e. 210. This can be verified by executing the above program.\n");
}
ex3()
{
	printf("OUTPUT-\n");
	printf("\nCondition : Return Values\n" );

printf("\n10!=10 : %5d",10!=10);

printf("\n10==10 : %5d",10==10);

printf("\n10>=10 : %5d",10>=10);

printf("\n10<=100: %5d",10<=100);

printf("\n10!=9 : %5d",10!=9);
printf("\n\nIn the above program, the true conditions return 1 and false 0. In this example, the first condition is false and remaining are true. Hence, the return value for the first is 0 and for remaining it is 1.\nAssume a program to perform certain steps on the basis of a condition. If A > 5, then some action will be performed. The example, which is illustrated below, uses the relational operator.");
}
ex4()
{
	int a,b;
	printf("OUTPUT-\n");
	printf("Enter Any Integer either above 5 or below 5 :-");

scanf("%d", &a);

b=(a>5 ? 3 : 4);

printf("Calculated Value of b is :- %d",b);
}
ex5()
{
	printf("\nOUTPUT-");
	printf("\nCondition : Return Values\n" );

    printf("\n5>3 && 5<10 : %5d",5>3 && 5<10);

printf("\n 8>5 || 8<2 : %5d",8>5 || 8<2);

printf("\n !(8==8) : %5d",!(8==8));
}
ex6()
{
	printf("\nOUTPUT-");
	int x,y;
printf("Read The Integer from keyboard (x) :-");

scanf("%d", &x);

x>>=2;

y=x;

printf("The Right shifted data is = %d",y);
}

com()
{
	FILE *aaaa;
	aaaa=fopen("com.txt","r+");
	if(aaaa==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(aaaa))
	{
		printf("%c",fgetc(aaaa));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:  printf("\nOUTPUT:\nResult = %d",2==3 ? 4 : 5 );
		printf("\n\nIn the above-mentioned program, the two equations are separated by commas. The results are obtained by solving the expressions separated by commas. The result obtained is printed through printf() statement.\n");
		printf("In the above-given program, the condition 2= =3 is false. Hence, 5 is printed.");
		break;
		case 0 : 
		break;
		default: printf("INVALID INPUT");
	}
}
arith()
{
	FILE *bbbb;
	bbbb=fopen("arith.txt","r+");
	if(bbbb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(bbbb))
	{
		printf("%c",fgetc(bbbb));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ex2(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
relatn()
{
	FILE *cccc;
	cccc=fopen("relatn.txt","r+");
	if(cccc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(cccc))
	{
		printf("%c",fgetc(cccc));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ex3(); 
		break;
		case 0 : 
		break;
		default: printf("INVALID INPUT");
	}
}
assign()
{
	FILE *dddd;
	dddd=fopen("assign.txt","r+");
	if(dddd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(dddd))
	{
		printf("%c",fgetc(dddd));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ex4(); 
		break;
		case 0 : 
		break;
		default: printf("INVALID INPUT");
	}
}
gol()
{
	FILE *eeee;
	eeee=fopen("log.txt","r+");
	if(eeee==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(eeee))
	{
		printf("%c",fgetc(eeee));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ex5(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
bit()
{
	FILE *ffff;
	ffff=fopen("bit.txt","r+");
	if(ffff==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ffff))
	{
		printf("%c",fgetc(ffff));
	}
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ex6(); 
		break;
		case 0 :
		break;
		default: printf("INVALID INPUT");
	}
}
