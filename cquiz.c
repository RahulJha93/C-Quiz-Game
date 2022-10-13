#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void c();
void python();
void java();
void gk();
void help();
void start();
void homepage();
int main()
{
	system("color 2F");
     char name[10];
     mainmenu:
     printf("\t\t\t\t     <<      QUIZ GAME     >>\n");
     sleep(1);

     printf("\n\t\t\t\t****************************************");
     printf("\n\t\t\t\t           WELCOME\n ");
     sleep(1);
     printf("\n\t\t\t\t             to\n ");
     sleep(1);
     printf("\n\t\t\t\t         THE QUIZ GAME ");
     printf("\n\t\t");
     printf("\n\t\t\t\t****************************************");
     sleep(2);
     printf("\n\t\t\t\t         ENTER YOUR NAME                      ");
     printf("\n\t\t\t\t****************************************\n");
     printf("\n\t\t\t\t          ");gets(name);
     printf("\n\t\t\t\t****************************************\n");
    fflush(stdin);
    sleep(2);
    system("cls");
     
      homepage();
     return 0;
 }
 
  void homepage()
     {
  char choice;
  	system("cls");
     printf("\n\t\t\t\t________________________________________\n");
     printf("\n\t\t\t\t  > Press S to start the game");
     printf("\n\t\t\t\t  > press H for help            ");
     printf("\n\t\t\t\t  > press Q to quit             ");
     printf("\n\t\t\t\t________________________________________\n\n");
     printf("\t\n\t\t\t ENTER   YOUR  CHOICE:");
     fflush(stdin);
     scanf("\n%c",&choice);
     
     
     if(choice=='H'|| choice=='h')
	 {
         system("cls");
         help();
         getch();
         system("cls");  
	 }
	 
    else if(choice=='S'||choice=='s')
    {
    system("cls");
         start();
         getch();
         system("cls");
	    	
	}
	else if(choice=='Q'||choice=='q')
	{    
	    exit(0);
	}
	else
	{   system("cls");
		printf("please input valid option:\n");
		  sleep(1);
		
		homepage();
	}
}

void start()
{   
    int p;
    system("cls");
        printf("\n\t\t\t> PRESS 1 FOR C QUESTIONS");
	printf("\n\t\t\t> PRESS 2 FOR PHYTON QUESTIONS");
	printf("\n\t\t\t> RESSS 3 FOR JAVA QUESTIONS");
	printf("\n\t\t\t> PRESS 4 FOR GK QUESTIONS");
	printf("\n\t\t\t> PRESS 5 TO GO BACK");
	printf("\nEnter Your Choice:");
	scanf("%d",&p);
	if(p==1)
	{
	   c();
	}
	else if(p==2)
	{
	    python();	
	}
	else if(p==3)
	{
		java();
	}
	else if(p==4)
	{
		gk();
		 
	}
	else if(p==5)
	{
	  homepage();
	}
	else
	{
			system("cls");
		printf("INVALID CHOICE !!!");
		sleep(1);
		system("cls");
		 start();
	}
}

void gk()
{   
	int i,n,m;
	for(i=1;i<=5;i++)
 {
  switch(i)
  {
  case 1:
  	g:
  	system("cls");
 printf("\nHERE IS YOUR FIRST QUESTION");
printf("\n _____________________________");    
printf("\n|Q.1 what is capital of India?|");
printf("\n|_____________________________|");
printf("\n|a.NEW DELHI | b.KOLKATA      |");
printf("\n|____________|________________|");
printf("\n|c.MUMBAI    | d.BIHAR        |");
printf("\n|____________|________________|\n");
printf("ENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='a')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS...........");
     sleep(2);
   }
   else if(n=='b'||n=='c'||n=='d')
   {
    printf("\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
	printf("\n\nCORRECT ANSWER IS:a.NEW DELHI ");
	    sleep(2);
    printf("\n\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   	system("cls");
   	printf("\nINVLAID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto g;
   }
   break;
  case 2:
  	h:
  		system("cls");
  	 printf("\nHERE IS YOUR SECOND QUESTION");
   printf("\n ----------------------------------------------------");    
printf("\n|Q.2 At Which Monument in Delhi did the British forces |\n|     arrest Bahadur Shah Zafar in September 1857?     |");
printf("\n ------------ ------------------------------------------");
printf("\n|a.Humayun’s Tomb | b.Nizamuddin Dargah     |");
printf("\n -------------------------------------------");
printf("\n|c.Purana Qila    | d.Tughlaqabad fort      |");
printf("\n --------------------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='a')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS...........");
     sleep(2);
   }
   else if(n=='b'||n=='c'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:a.Humayun's Tomb");
    sleep(2);
    printf("\n\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   }
   else
   {
   	system("cls");
   	printf("\nINVLAID\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto h;
   }
   break;
   
   case 3:
   	qt:
   		system("cls");
   	printf("\nHERE IS YOUR THIRD QUESTION");
   	 printf("\nQ.3 What is the minimum age to be appointed as the Chief Minister of a state?|");
printf("\n ----------------------------");
printf("\n|a.20 Years | b.30 Years      |");
printf("\n ----------------------------");
printf("\n|c.25 Years | d.18 Years      |");
printf("\n -----------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);

   if(n=='c')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS...........");
     sleep(2);
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:c.25 Years");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   }
   else
   {
   	system("cls");
   	printf("\nINVLAID\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto qt;
   }
   break;
   
   case 4:
   	qf:
   		system("cls");
   printf("\nHERE IS YOUR FOURTH QUESTION");	
   printf("\nQ.4 Who determines the salary and allowances of the Chief Minister?|");
printf("\n -----------------------------------");
printf("\n|a.Parliament | b.President         |");
printf("\n -----------------------------------");
printf("\n|c.Governer   | d.State Legislature |");
printf("\n -----------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);

   if(n=='d')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS...........");
     sleep(2);
   }
   else if(n=='a'||n=='b'||n=='c')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:d.State Legislature");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
}
else
{
	system("cls");
   	printf("\nINVLAID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto qf;
}
break;

  case 5:
  	j:
  		system("cls");
  	 printf("\nHERE IS YOUR FIFTH QUESTION");
 printf("\n-------------------------------------------------") 	 ;
printf("\nQ.5 The International Literacy Day is observed on?|");
printf("\n -------------------------------------------------");
printf("\n|a.Sep 8 | b.Nov 28      |");
printf("\n ------------------------");
printf("\n|c.May 2 | d.Sep 22      |");
printf("\n ------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='a')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points ",i);
     sleep(2);
     system("cls");
     sleep(2);
     rah:
     	system("cls");
      printf("\nDO YOU WANT TO PLAY AGAIN: Y/N");
      printf("\nPLEASE SELECT:");
   fflush(stdin);
   scanf("%c",&m);
   if(m=='y'||m=='Y')
   {
   	 start();
   }else  if(m=='N'||m=='n')
   {
    homepage();
   }
   else
   {
   	printf("please choose correct option:");
   	goto rah;
   }
   }
   else if(n=='b'||n=='c'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:a.Sep 8");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   }
   else
   {
   system("cls");
   	printf("\nINVALID!!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto j;
   }
   break;
  
  default:
   break;
   }
   }   
}

void c()
{
	 int i,n,m;
	 for(i=1;i<=5;i++)
 {
    switch(i)
  {
  case 1:
  	cqo:
  	system("cls");
   printf("\nHERE IS YOUR FIRST QUESTION");
printf("\n ----------------------------------------------------");    
printf("\n|Q.1  What is the built in library function to adjust|         \n|      the allocated dynamic memory size?            |");
printf("\n ------------ ---------------------------------------");
printf("\n|a.malloc 	| b.calloc  |");
printf("\n ------------ ---------------");
printf("\n|c.realloc 	| d.resize  |");
printf("\n -----------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='c')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTION.........");
     sleep(2);
     system("cls");
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT%d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:c.realloc");
    sleep(2);
    printf("\n\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto cqo;
   }
   break;
  case 2:
  	cqt:
  	system("cls");
  	 printf("\nHERE IS YOUR SECOND QUESTION");
printf("\n ----------------------------------------------------------------------");    
printf("\n|Q.2 A bitwise operator & can turn-off a particular bit into a number.?|");
printf("\n ----------------------------------------------------------------------");
printf("\n|a.yes | b.&&   |");
printf("\n ---------------"); 
printf("\n|c.*   | d.  |  |");
printf("\n ---------------"); 
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='a')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTION.........");
     sleep(2);
   }
   else if(n=='c'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:a.yes");
    sleep(2);
    printf("\n\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto cqt;
   }
   break;
   case 3:
  	cqte:
  	system("cls");
  	 printf("\nHERE IS YOUR THIRD QUESTION");
printf("\n ----------------------------------------------------------------------");    
printf("\n|Q.3 C is the successor of programming language?|");
printf("\n ----------------------------------------------------------------------");
printf("\n|a.C++ | b.B++   |");
printf("\n -----------------"); 
printf("\n|c.B   | d.Mini C|");
printf("\n -----------------"); 
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='c')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTION................");
     sleep(2);
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:c.B");
	sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto cqte;
   }
break;

case 4:
  	cqf:
  	system("cls");
  	 printf("\nHERE IS YOUR FOURTH QUESTION");
printf("\n ----------------------------------------------------------------------");    
printf("\n|Q.4 Choose the invalid identifier from the below?|");
printf("\n ----------------------------------------------------------------------");
printf("\n|a.Int      | b.volatile     |");
printf("\n ----------------------------"); 
printf("\n|c.DOUBLE   | d._ _0_ _      |");
printf("\n ----------------------------"); 
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='b')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS.........");
     sleep(2);
   }
   else if(n=='a'||n=='c'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:b.volatile");
	sleep(2);
    printf("\n\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto cqf;
   }
break;
   
  case 5:
  	cqt1:
  	system("cls");
  	 printf("\nHERE IS YOUR FIFTH QUESTION");
printf("\n------------------------------------------------------------------");
   printf("\nQ.5 To print a double value which format specifier can be used?|");
printf("\n------------------------------------------------------------------");
printf("\n|a.percent L       | b.percent IF                 |");
printf("\n--------------------------------------------------");
printf("\n|c.percent LF      | d.None of the above          |");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
printf("\n--------------------------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);

   if(n=='b')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
    // printf("\n\nLOADING NEXT QUESTION...........");
     sleep(2);
     ra:
     	system("cls");
     printf("\nDO YOU WANT TO PLAY AGAIN: Y/N");
     printf("\nPLEASE SELECT:");
   fflush(stdin);
   scanf("%c",&m);
   if(m=='y'||m=='Y')
   {
   	 start();
   }
   else if(m=='N'||m=='n')
   {
   		homepage();
   }
   else
   {
   	printf("please choose correct option:");
   	goto ra;
   }
   }
   else if(n=='a'||n=='d'||n=='c')
   {
    printf("\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT%d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:b.percent IF");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto cqt1;
   }

   break;
   
   default:
   break;
   }
}
}

  
void java()
{
	int i,n,m;
	for(i=1;i<=5;i++)
 {
  switch(i)
  {
  case 1:
jqo:
	system("cls");
   printf("\nHERE IS YOUR FIRST QUESTION");
printf("\n ---------------------------------------");    
printf("\n|Q.1 what is the size of long variable ?|");
printf("\n ------------ --------------------------");
printf("\n|a.8 bit     | b.16 bit      |");
printf("\n ------------ ---------------");
printf("\n|c.32 bit    | d.64 bit      |");
printf("\n -----------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='a')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS.........");
     sleep(2);
   }
   else if(n=='c'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:a.8 bit");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto jqo;
   }
   break;
  
  case 2:
jqto:
	system("cls");
printf("\nHERE IS YOUR SECOND QUESTION");
printf("\n ------------------------------------------------");    
printf("\n|Q.2 what is the default value of byte variable ?|");
printf("\n ------------ -----------------------------------");
printf("\n|a.0       | b.0.0              |");
printf("\n ------------ ------------------");
printf("\n|c.null    | d.not defined      |");
printf("\n -------------------------------"); 
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='a')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS.........");
     sleep(2);
   }
   else if(n=='c'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
     printf("\n\nCORRECT ANSWER IS:a.0");
	sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(3); 
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto jqto;
   }
   break;
  
  case 3:
jqt:
	system("cls");
printf("\nHERE IS YOUR THIRD QUESTION");
printf("\n---------------------------------");
printf("\nQ.3 java.util.collections is a:|");
printf("\n-------------------------------");
printf("\n a.object | b.interface        |");
printf("\n-------------------------------");
printf("\n c.class  | d.none of the above|");
printf("\n-------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='c')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS.........");
     sleep(2);
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:c.class");
	sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(3);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVLAID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto jqt;
   }
   break;
case 4:
jqf:
	system("cls");
printf("\nHERE IS YOUR FOURTH QUESTION");
printf("\n-----------------------------------------------------------------");
printf("\nQ.4 Choose the appropriate data type for this field: isSwimmer?|");
printf("\n---------------------------------------------------------------");
printf("\n a.double      | b.boolean     |");
printf("\n-------------------------------");
printf("\n c.string      | d.int         |");
printf("\n-------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='b')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS..........");
     sleep(2);
   }
   else if(n=='a'||n=='c'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:b.boolean");
	sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto jqf;
   }
   break;

case 5:
jqfi:
	system("cls");
printf("\nHERE IS YOUR FIFTH QUESTION");
printf("\n-----------------------------");
printf("\nQ.5 An object could be... |");
printf("\n--------------------------------------");
printf("\n a.an algorithm  | b.a data container |");
printf("\n--------------------------------------");
printf("\n c.a program     | d.anything         |");
printf("\n--------------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='d')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     sleep(2);
     rahu:
     	system("cls");
     printf("\nDO YOU WANT TO PLAY AGAIN: Y/N");
      printf("\nPLEASE SELECT:");
   fflush(stdin);
   scanf("%c",&m);
   if(m=='y'||m=='Y')
   {
   	 start();
   }else if(m=='N'||m=='n')
   {
    homepage();
   }
   else
   {
   	printf("please choose correct option:");
   	goto rahu;
   }
   }
   
   else if(n=='a'||n=='c'||n=='b')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:d.anything");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(3);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto jqfi;
   }
   break;
   
  default:
   break;
   }
   }   
}	


void python()
{
		int i,n,m;
	for(i=1;i<=5;i++)
	{
	switch(i)
  {
  case 1:
  	pqo:
  	system("cls");
   printf("\nHERE IS YOUR FIRST QUESTION");
printf("\n ----------------------------------------");    
printf("\n|Q.1 Which operator is right-associative?|");
printf("\n ----------------------------------------");
printf("\n|a.*   | b.=  |");
printf("\n ------------");
printf("\n|c.+  | d.@  |");
printf("\n ------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='b')
   {
     printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTIONS...........");
     sleep(2);
   }
   else if(n=='a'||n=='c'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:b.=");
	sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(3);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
	      	goto pqo;
   }
   break;
   
  case 2:
  	pqs:
  		system("cls");
  	 printf("\nHERE IS YOUR SECOND QUESTION");
printf("\n --------------------------------------------------------------");    
printf("\n|Q.2 Which among them is incorrect for set s={100,101,102,103}?|");
printf("\n --------------------------------------------------------------");
printf("\n|a.Len(s)       | b.Sum(S)   |");
printf("\n -----------------------------");
printf("\n|c.Print(s[3]) 	| d.Max(s)   |");
printf("\n ------------------------------"); 
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='c')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTION............");
     sleep(2);
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:c.Print(s[3])");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto pqs;
   }
   break;
    case 3:
pqt:
system("cls");
printf("\nHERE IS YOUR THIRD QUESTION");
printf("\n ------------------------------------------");    
printf("\n|Q.4 Which of these in not a core data type?|");
printf("\n -------------------------------------------");
printf("\n|a. lists    | b. class      |");
printf("\n ---------------------------");
printf("\n|c. Tuples   | d. Dictionary |");
printf("\n ---------------------------"); 
  printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='b')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTION...........");
     sleep(2);
   }
   else if(n=='a'||n=='c'||n=='d')
   {
    printf("\nYou have entered the wrong answer Better Luck Next Time\nYOU GOT%d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:b.class");
	sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(3);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto pqt;
   }
   break;
   
    case 4:
pqf:
system("cls");
printf("\nHERE IS YOUR FOURTH QUESTION");
printf("\n ------------------------------------------");    
printf("\n|Q.4 What is the return type of function id?|");
printf("\n -------------------------------------------");
printf("\n|a.bool | b. float |");
printf("\n ------------------");
printf("\n|c.int  | d. dict  |");
printf("\n ------------------"); 
  printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);
   if(n=='c')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     printf("\n\nLOADING NEXT QUESTION............");
     sleep(2);
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\nYou have entered the wrong answer Better Luck Next Time\nYOU GOT %d0 points",i-1);
    printf("CORRECT ANSWER IS:c.int");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(3);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto pqf;
   }
   break;
  case 5:
  	pqfi:
  	system("cls");
printf("\nHERE IS YOUR FIFTH QUESTION");
printf("\n---------------------------------------------------------------------------------");
printf("\nQ.5 suppose you are given a set(s1={1,2,3}) then what is the output for the code?|");
printf("\n---------------------------------------------------------------------------------");
printf("\na.(1,1,2,2,3,3) | b.[1,1,2,2,3,3] |");
printf("\n---------------------------------");
printf("\nc.Illegal 	| d.(1,2,3,1,2,3) |");                      
printf("\n---------------------------------");
printf("\nENTER YOUR OPTION:");
fflush(stdin);
scanf("\n%c",&n);
 printf("\nSELECTED OPTION IS:%c",n);
 sleep(1);

   if(n=='c')
   {
      printf("\n\nYou have entered the correct answer\n\nYOU GOT %d0 points",i);
     sleep(2);
     system("cls");
     sleep(2);
     rahul:
     	system("cls");
     printf("\nDO YOU WANT TO PLAY AGAIN: Y/N");
     printf("\nPLEASE SELECT:");
   fflush(stdin);
   scanf("%c",&m);
   if(m=='y'||m=='Y')
   {
   	 start();
   }else if(m=='N'||m=='n')
   {
   	homepage();
   }
   else
   {
   	printf("please choose correct option:");
   	goto rahul;
   }
   }
   else if(n=='a'||n=='b'||n=='d')
   {
    printf("\n\nYou have entered the wrong answer Better Luck Next Time\n\nYOU GOT %d0 points",i-1);
    printf("\n\nCORRECT ANSWER IS:c.ILLEGAL");
    sleep(2);
    printf("\nReturning to HOMEPAGE.........");
    sleep(2);
    system("cls");
    homepage();
   } 
   else
   {
   system("cls");
   	printf("\nINVALID!!!!\n PLEASE CHOOSE CORRECT OPTION:");
   	sleep(2);
   	goto pqfi;
   }

   break;
   
    default:
   break;
   }
}
}






























void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are 4 Sets of QUIZ");
    printf("\n    Each set contains 5 questions.");
    printf("\n >> For each right answer you will get 10 points,");
    printf("\n    For wrong answer you will get 0 points and  ");
    printf("\n    you will be out of the game...........");
    printf("\n >> Total game is of 50 points in each set.");
   
    printf("\n >> You will be given 4 options and you have to press a, b ,c or d for the");
    printf("\n    right option");
    printf("\n >> REMEMBER: You can't enter OPTION in UPPERCASE,");
    printf("\n              It will show Invalid!!!!!");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> ONE WRONG ANSWER WILL TAKE YOU OUT OF THE GAME");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by Amit Pandey & Group of FYBCA Of Sahyog College********");
	getch();
	printf("\nPRESS ANY KEY TO GO HOMEPAGE");
        getch();
        system("cls");
        homepage();
       
        
        
	}

