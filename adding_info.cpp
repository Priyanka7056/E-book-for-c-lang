#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int chapter1(),chapter2(),chapter3(),chapter4(),chapter5(),chapter6(),chapter7(),chapter8(),chapter9(),chapter10(),chapter11();
chapter1()
{
	FILE *ch1;
	char c;
	ch1=fopen("chapter1.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter1\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch1);
	}
	fclose(ch1);
	printf("\n\nHERE ARE THE CONTENTS IN THE FILE OF CHAPTER 1\n");
	ch1=fopen("chapter1.txt","r+");
	while(!feof(ch1))
	{
		printf("%c",fgetc(ch1));
	}
}
chapter2()
{
		FILE *ch2;
	char c;
	ch2=fopen("chapter2.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter2\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch2);
	}
	fclose(ch2);
	printf("\n\nHERE ARE THE CONTENTS IN THE FILE OF CHAPTER 2\n");
	ch2=fopen("chapter2.txt","r+");
	while(!feof(ch2))
	{
		printf("%c",fgetc(ch2));
	}
}
chapter3()
{
		FILE *ch3;
	char c;
	ch3=fopen("chapter3.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter3\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch3);
	}
	fclose(ch3);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 3\n");
	ch3=fopen("chapter3.txt","r+");
	while(!feof(ch3))
	{
		printf("%c",fgetc(ch3));
	}
}
chapter4()
{
		FILE *ch4;
	char c;
	ch4=fopen("chapter4.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter4\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch4);
	}
	fclose(ch4);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 4\n");
	ch4=fopen("chapter4.txt","r+");
	while(!feof(ch4))
	{
		printf("%c",fgetc(ch4));
	}
}
chapter5()
{
		FILE *ch5;
	char c;
	ch5=fopen("chapter5.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter5\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch5);
	}
	fclose(ch5);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 5\n");
	ch5=fopen("chapter5.txt","r+");
	while(!feof(ch5))
	{
		printf("%c",fgetc(ch5));
	}
}
chapter6()
{
		FILE *ch6;
	char c;
	ch6=fopen("chapter6.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter6\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch6);
	}
	fclose(ch6);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 6\n");
	ch6=fopen("chapter6.txt","r+");
	while(!feof(ch6))
	{
		printf("%c",fgetc(ch6));
	}
}
chapter7()
{
		FILE *ch7;
	char c;
	ch7=fopen("chapter7.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter7\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch7);
	}
	fclose(ch7);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 7\n");
	ch7=fopen("chapter7.txt","r+");
	while(!feof(ch7))
	{
		printf("%c",fgetc(ch7));
	}
}
chapter8()
{
		FILE *ch8;
	char c;
	ch8=fopen("chapter8.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter8\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch8);
	}
	fclose(ch8);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 8\n");
	ch8=fopen("chapter8.txt","r+");
	while(!feof(ch8))
	{
		printf("%c",fgetc(ch8));
	}
}
chapter9()
{
		FILE *ch9;
	char c;
	ch9=fopen("chapter9.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter9\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch9);
	}
	fclose(ch9);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 8\n");
	ch9=fopen("chapter9.txt","r+");
	while(!feof(ch9))
	{
		printf("%c",fgetc(ch9));
	}
}
chapter10()
{
		FILE *ch10;
	char c;
	ch10=fopen("chapter10.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter10\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch10);
	}
	fclose(ch10);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 10\n");
	ch10=fopen("chapter10.txt","r+");
	while(!feof(ch10))
	{
		printf("%c",fgetc(ch10));
	}
}
chapter11()
{
		FILE *ch11;
	char c;
	ch11=fopen("chapter11.txt","a");
	printf("\nENTER YOUR PROGRAM CODE AND PRESS ` TO SAVE IT\n");
	printf("YOUR PROGRAM WILL BE SAVED IN TEXT FILE NAMED chapter11\n\n");
	while(c!='`')
	{
		c=getche();
		fputc(c,ch11);
	}
	fclose(ch11);
	printf("\n\nHERE ARE THE CONTENTS U ADDED IN THE FILE OF CHAPTER 11\n");
	ch11=fopen("chapter11.txt","r+");
	while(!feof(ch11))
	{
		printf("%c",fgetc(ch11));
	}
}

