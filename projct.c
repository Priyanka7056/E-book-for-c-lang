#include<stdio.h>
#include<conio.h>
#include<process.h>
#include"Cbasics.cpp"
#include"Stor.cpp"
#include"declaration.cpp"
#include"operation.cpp"
#include"input_output.cpp"
#include"decision.cpp"
#include"loop_control.cpp"
#include"array.cpp"
#include"string.cpp"
#include"function.cpp"
#include"pointers.cpp"
#include"adding_info.cpp"


int ch1(),ch2(),ch3(),ch4(),ch5(),ch6(),ch7(),ch7(),ch9(),ch10(),ch11(),add();
int index(),main_work();
int n;
int option1,option2;
add()
{
	index();
	printf("\nENTER THE TOPIC NO. IN WHICH YOU WANT TO ADD ANYTHING OR\nPRESS 0 TO EXIT\n\n");
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1: chapter1();
		break;
		case 2: chapter2();
		    break;
		case 3: chapter3();
			break;
		case 4: chapter4();
		    break;
		case 5: chapter5();
		 break;
		case 6: chapter6();
		 break;
		 case 7: chapter7();
		 break;
		 case 8: chapter8();
		 break;
		 case 9: chapter9();
		 break;
		 case 10: chapter10();
		 break;
		 case 11: chapter11();
		 break;
		 case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		 exit(0);
		 break;
		 default: printf("INVALID INPUT\n");
	}
		 printf("\n\nDO YOU WANT TO GO TO MAIN INDEX\n");
		 printf("PRESS 1 FOR YES OR 0 FOR NO...\n\n");
		 int option2;
		 scanf("%d",&option2);
		 switch(option2)
		 {
		 	case 1: main_work();
		 	break;
		 	case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		 exit(0);
		 break;
		 default: printf("INVALID INPUT\n");
		 }
}
main_work()
{
	printf("\t\t\t----------------------------\n");
	printf("\t\t\t E-BOOK OF PROGRAMMING IN C\n");
	printf("\t\t\t----------------------------\n");
	index();
	printf("\n");
	printf("ENTER 12 FOR ADDING INFO OR PROGRAM IN ANY SECTION\n");
	printf("ENTER THE RESPECTIVE NO. TO GET IN THE TOPIC OR PRESS 0 TO EXIT\n\n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: ch1();
		    break;
		case 2: ch2();
		    break;
		case 3: ch3();
			break;
		case 4: ch4();
		    break;
		case 5: ch5();
		 break;
		case 6: ch6();
		 break;
		 case 7: ch7();
		 break;
		 case 8: ch8();
		 break;
		 case 9: ch9();
		 break;
		 case 10: ch10();
		 break;
		 case 11: ch11();
		 break;
		 case 12 :add();
		 break;
		 case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		 exit(0);
		 break;
		 default: printf("Incorrect input");
	}

}

index()
{
   FILE *fq;
	fq=fopen("Index.txt","r+");
	if(fq==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fq))
	{
		printf("%c",fgetc(fq));
	}	
}

ch1()
{
	FILE *fp;
	fp=fopen("Basics of C.txt","r+");
	if(fp==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fp))
	{
		printf("%c",fgetc(fp));
	}
	printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: printf("\t\t\t------------------\n");
	           printf("\t\t\tIntroduction to C\n");
	           printf("\t\t\t------------------\n");
	           introC();
	   break;
	   case 2: printf("\t\t\t------------------------\n");
	           printf("\t\t\tAbout ANSI C Standard\n");
	           printf("\t\t\t------------------------\n");
	           ANSI();
	   break;
	   case 3: printf("\t\t\t---------------------------------------------\n");
	           printf("\t\t\tMachine , Assembly and High-level language\n");
	           printf("\t\t\t---------------------------------------------\n");
	           language();
	   break;
	   case 4: printf("\t\t\t--------------------------------------\n");
	           printf("\t\t\tAssembler ,Compiler and Interpreter\n");
	           printf("\t\t\t--------------------------------------\n");
			   lang_converter();
	   break;
	   case 5:printf("\t\t\t----------------------------\n");
	           printf("\t\t\tStructure of a C program\n");
	           printf("\t\t\t---------------------------\n");
			    structure();
	   break;
	   case 6: printf("\t\t\t------------------\n");
	           printf("\t\t\tProgramming Rules\n");
	           printf("\t\t\t------------------\n");
			   rules();
	   break;
	   case 7:  printf("\t\t\t----------------------\n");
	           printf("\t\t\tExecuting the C program\n");
	           printf("\t\t\t------------------------\n");
			   execution();
	   break;
	   case 8: printf("\t\t\t----------------\n");
	           printf("\t\t\tAdvantages of C\n");
	           printf("\t\t\t----------------\n");
			   advant();
	   break;
	   case 9: printf("\t\t\t-------------\n");
	           printf("\t\t\tHeader files\n");
	           printf("\t\t\t-------------\n");
			   header();
	   break;
	   case 0:printf("\t\t\tTHANKS FOR VISITING US\n"); 
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch1();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}
}
	
ch2()
{
	printf("\t\t\t---------------\n");
	printf("\t\t\tC DECLARATIONS\n");
	printf("\t\t\t---------------\n");
	 FILE *fw;
	fw=fopen("C declarations.txt","r+");
	if(fw==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fw))
	{
		printf("%c",fgetc(fw));
	}	
	printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: printf("\t\t\t--------------------\n");
	           printf("\t\t\tThe C character set\n");
	           printf("\t\t\t--------------------\n");
			   c_char();	
	   break;
	   case 2: printf("\t\t\t-----------\n");
	           printf("\t\t\tDelimiters\n");
	           printf("\t\t\t-----------\n");
			   del();
	   break;
	   case 3: printf("\t\t\t----------------\n");
	           printf("\t\t\tTypes of Tokens\n");
	           printf("\t\t\t----------------\n");
			   token();
	   break;
	   case 4: printf("\t\t\t---------------\n");
	           printf("\t\t\tThe C keywords\n");
	           printf("\t\t\t---------------\n");
			   ckey();
	   break;
	   case 5: printf("\t\t\t------------\n");
	           printf("\t\t\tIdentifiers\n");
	           printf("\t\t\t------------\n");
			   idn();
	   break;
	   case 6: printf("\t\t\t----------\n");
	           printf("\t\t\tConstants\n");
	           printf("\t\t\t----------\n");
			   cons();
	   break;
	   case 7: printf("\t\t\t----------\n");
	           printf("\t\t\tVariables\n");
	           printf("\t\t\t----------\n");
			   var();
	   break;
	   case 8: printf("\t\t\t-----------------------------\n");
	           printf("\t\t\tRules for defining variables\n");
	           printf("\t\t\t-----------------------------\n");
			   rule();
	   break;
	   case 9: printf("\t\t\t------------\n");
	           printf("\t\t\tC Datatypes\n");
	           printf("\t\t\t------------\n");
	           cdat();
	   break;
	   case 10: printf("\t\t\t------------------------------------\n");
	           printf("\t\t\tDeclaring and Initializing Variables\n");
	           printf("\t\t\t-------------------------------------\n");
			   decin();
	   break;
	   case 11: printf("\t\t\t--------------\n");
	           printf("\t\t\tType modifiers\n");
	           printf("\t\t\t---------------\n");
			   mod();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch2();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}
}

ch3()
{
	printf("\t\t\t---------------------------\n");
	printf("\t\t\t OPERATORS AND EXPRESSIONS\n");
	printf("\t\t\t---------------------------\n");
	 FILE *fe;
	fe=fopen("operators.txt","r+");
	if(fe==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fe))
	{
		printf("%c",fgetc(fe));
	}
	printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: printf("\t\t\t--------------------------------\n");
	           printf("\t\t\tComma and conditional operators\n");
	           printf("\t\t\t--------------------------------\n");
			   com();	
	   break;
	   case 2: printf("\t\t\t---------------------\n");
	           printf("\t\t\tArithmetic operators\n");
	           printf("\t\t\t---------------------\n");
			   arith();
	   break;
	   case 3: printf("\t\t\t---------------------\n");
	           printf("\t\t\tRelational operators\n");
	           printf("\t\t\t---------------------\n");
			   relatn();
	   break;
	   case 4: printf("\t\t\t-------------------------------------\n");
	           printf("\t\t\tAssignment operators and expressions\n");
	           printf("\t\t\t-------------------------------------\n");
			   assign();
	   break;
	   case 5: printf("\t\t\t-----------------\n");
	           printf("\t\t\tLogical operators\n");
	           printf("\t\t\t------------------\n");
			   gol();
	   break;
	   case 6: printf("\t\t\t------------------\n");
	           printf("\t\t\tBitwise operators\n");
	           printf("\t\t\t------------------\n");
			   bit();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch3();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}	
	
}

ch4()
{
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\t FORMATTED AND UNFORMATTED FUNCTIONS\n");
	printf("\t\t\t-------------------------------------\n");
	 FILE *fr;
	fr=fopen("input.txt","r+");
	if(fr==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fr))
	{
		printf("%c",fgetc(fr));
	}
	printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: printf("\t\t\t--------------------\n");
	           printf("\t\t\tFormatted functions\n");
	           printf("\t\t\t--------------------\n");
			   form();	
	   break;
	   case 2: printf("\t\t\t------------------------------------------------\n");
	           printf("\t\t\tFlags, widths and precision with format strings\n");
	           printf("\t\t\t------------------------------------------------\n");
			   flag();
	   break;
	   case 3: printf("\t\t\t----------------------------------------\n");
	           printf("\t\t\tConversion symbols and Escape sequences\n");
	           printf("\t\t\t----------------------------------------\n");
			   conv();
	   break;
	   case 4: printf("\t\t\t----------------------\n");
	           printf("\t\t\tUnformatted functions\n");
	           printf("\t\t\t----------------------\n");
			   unform();
	   break;
	   case 5: printf("\t\t\t--------------------------------\n");
	           printf("\t\t\tCommonly used library functions\n");
	           printf("\t\t\t--------------------------------\n");
			   lib();
	   break;
	   case 6: printf("\t\t\t------------------------------------\n");
	           printf("\t\t\tStrong points for understandability\n");
	           printf("\t\t\t------------------------------------\n");
			   points();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch4();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}	
}

ch5()
{
	 FILE *ft;
	ft=fopen("decision statements.txt","r+");
	if(ft==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ft))
	{
		printf("%c",fgetc(ft));
	}
	printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: ifstat();	
	   break;
	   case 2: ifelse();
	   break;
	   case 3: ifelselad();
	   break;
	   case 4: brk();
	   break;
	   case 5: swtch();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch5();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}		
}

ch6()
{
	 FILE *fy;
	fy=fopen("loop control.txt","r+");
	if(fy==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fy))
	{
		printf("%c",fgetc(fy));
	}
		printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: what();	
	   break;
	   case 2: fr();
	   break;
	   case 3: nestfor();
	   break;
	   case 4: whi();
	   break;
	   case 5: dowhi();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch6();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}		
}

ch7()
{
	 FILE *fu;
	fu=fopen("array.txt","r+");
	if(fu==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fu))
	{
		printf("%c",fgetc(fu));
	}
		printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: introa();	
	   break;
	   case 2: arrinit();
	   break;
	   case 3: termi();
	   break;
	   case 4: charac();
	   break;
	   case 5: oned();
	   break;
	   case 6: operarr();
	   break;
	   case 7: twod();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch7();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}		
}

ch8()
{
	 FILE *fi;
	fi=fopen("strings.txt","r+");
	if(fi==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fi))
	{
		printf("%c",fgetc(fi));
	}	
		printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: str();	
	   break;
	   case 2: decl();
	   break;
	   case 3: dis();
	   break;
	   case 4: strfunc();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch8();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}	
}

ch9()
{
	 FILE *fo;
	fo=fopen("pointers.txt","r+");
	if(fo==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fo))
	{
		printf("%c",fgetc(fo));
	}
		printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: pntr();	
	   break;
	   case 2: feat();
	   break;
	   case 3: pntadd();
	   break;
	   case 4: pntr_decl();
	   break;
	   case 5: pntropr();
	    break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch9();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}		
}

ch10()
{
	 FILE *fa;
	fa=fopen("functions.txt","r+");
	if(fa==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fa))
	{
		printf("%c",fgetc(fa));
	}
		printf("\n\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: func_intro();	
	   break;
	   case 2: funcdef();
	   break;
	   case 3: retrn();
	   break;
	   case 4: typefunc();
	   break;
	   case 5: call();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch10();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}		
}

ch11()
{
	 FILE *fs;
	fs=fopen("storage classes.txt","r+");
	if(fs==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(fs))
	{
		printf("%c",fgetc(fs));
	}	
	printf("\nEnter your topic no. you want to read or press 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
	   case 1: type();	
	   break;
	   case 2: aut();
	   break;
	   case 3: extrn;
	   break;
	   case 4: stat();
	   break;
	   case 5: statext();
	   break;
	   case 6: reg();
	   break;
	   case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
	   exit(0);
	   break;
	   default: printf("invalid input");
	}
	printf("\n\nDo you want to go to previous menu, main menu or want to exit ?");
	printf("\n[1] main menu\n[2] previous menu\n[0] exit\n\n");
	scanf("%d",&option1);
	switch(option1)
	{
		case 1: system("cls");
		main_work();
		break;
		case 2: ch11();
		break;
		case 0: printf("\t\t\tTHANKS FOR VISITING US\n");
		exit(0);
		break;
		default: printf("invalid input");
	}
}

main()
{
	main_work();
}
