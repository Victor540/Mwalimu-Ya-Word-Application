//
//  main.cpp
//  Mwalimu Ya Word - Application -
//
//  Created by 137368 Victor Mwendwa on 12/15/21.
//
#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

static int x=1;//used for x cursor co-ordinate
#define pos gotoxy(33,x++) /*for cursor movement*/
#define ln  printf(".......................");
//.......................................................................................................................................................................
 COORD coord={0,0};
 void gotoxy(int x,int y);
void gotoxy(int x,int y)//function to set the cursor position
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
//.......................................................................................................................................................................
void delay(unsigned int mseconds)//function for delay
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}
//.............................................................................................................................................................................
void setcolor(int ForgC) //function to change setcolor
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
 }

//.................................................................................................................................................................................
int c =0;
char name[5000];
void getscore(int score,int level);
void startgame();  //to start the game
void scorecard();  //to update high score
void About_me();
void help();
//...............................................................................................................................................................................
void rectangle(int x,int y,int l,int b)//to create a rectangle
{
    int i,m;
    gotoxy(x,y); printf("%c",201);
    for(i=x+1;i<l-1;i++)
    {
        gotoxy(i,y);
        printf("%c",205);
    }
    gotoxy(i,y); printf("%c",187);

    for (m=y+1;m<b;m++)
    {
        gotoxy(x,m);
        for(i=x;i<l;i++)
        {
            if(i==x||i==l-1)
            {
                gotoxy(i,m); printf("%c",186);
            }

        }

    }

    gotoxy(x,m); printf("%c",200);
    for(i=x+1;i<l-1;i++)
    {
        gotoxy(i,m);
        printf("%c",205);
    }
    gotoxy(i,m); printf("%c",188);
}

//...............................................................................................................................................................................
void start()//Splash Screen at the Start
{

printf("\t\t\t\t\t Welcome To Mwalimu Ya Word Application \n\n \t\t\t\t\t#......Rules Of The Game......# \n \t\t\t\t\t=-> Enter your Full Name as player name \n\n \t\t\t\t\t=-> Select the level and get started \n \n \t\t\t\t\t> Type / Enter ( 1 ) to Start Game / Play Easy Mode \n \t\t\t\t\t> Type / Enter ( 2 ) to see Scoreboard / Play Normal Mode \n \t\t\t\t\t> Type / Enter ( 3 ) to see Help / Play Hard Mode  \n \t\t\t\t\t> Type / Enter ( 4 ) to see about game \n \t\t\t\t\t> Type / Enter ( 0 ) to go back / Back To Main Menu \n \n \t\t\t\t\t=-> Characters are displayed and you have to type them as fast as you \n \t\t\t\t\t> Type / Enter Y or N to go back. \n\n \n \t\t\t\t\t Created by - 137368 - Victor Mwendwa Muasya \n");
    printf("\n\n\t\t\t\t\t Type Any Key & Enter To Continue...");
	char chi, ch;
	cin>>chi;
	ch = ' ';
  	chi=ch;	
    if (isspace(ch)){
    	system("cls");
	  //d = 1;
	  pos;
    setcolor(14) ;
		  printf(" - Welcome To Mwalimu Ya Word - ");
   
    pos;
	printf(" Enter Your Name :: ");
	cin>>name;
	
	return;
	}
      //d = 1;
	delay(25000);
	system("cls");
	pos;
    setcolor(14) ;
	  printf(" - Welcome To Mwalimu Ya Word - ");
   
    pos;
	printf(" Enter Your Name :: ");
	cin>>name;
	
	return;
    
}


//................................................................................................................................................................................
//            main function
int main()
{       
	    if(c==0)
       {    
	   start(); 
}
	int ch;

    time_t t;
    time(&t);
    
//    rectangle(0,0,70,15);
    x=1;
    system("cls");
    pos;
    setcolor(14) ;
    printf(" - Welcome To Mwalimu Ya Word - ");
   
    pos;
   // printf("%s",ctime(&t));
    pos;
    ln pos;
    setcolor(14) ;
    

	printf(" Your Name is :: ");
	    cout<<name;
    
       
       
    
       c++;
    pos;ln pos;
     setcolor(14) ;
     	
        printf("#..MAIN MENU..#");pos;
        ln
        pos;
         setcolor(9) ;
        printf("( 1 ) - Start Game");
        pos;
        printf("( 2 ) - Scorecard");
        pos;
        
        printf("( 3 ) - Help");
        pos;
        printf("( 4 ) - About");
        pos;
        printf("( 0 ) - Exit");
        pos;
        printf("Enter Your Choice::");
        scanf("%d",&ch);
        pos;
        switch(ch)
        {       case 1:startgame();break;
            case 2:scorecard();break;

            case 3:help();break;
            case 4:About_me();break;
            case 0:system("cls");gotoxy(17,10);printf(" - This Game is created by Victor Mwendwa Muasya - ");delay(1000);exit(1);
            default:main();
        }

getch();
}
//.....................end of main function.................................

               //startgame
//..........................................................................
void startgame()
{ 
int score=0, level=1;
//mode=100,count=0, r,letter;
//    clock_t begin;int time_spent,speed;
//
int ch;
rectangle(0,0,70,15);
    delay(200);
   system("cls");
    srand(time(NULL)) ; //initilizes random function and seed with time
    x=2;
   pos;
    char words[10][50]= { "Splendiferous", "Captivating", "Junoesque", "Knowledgeable", "Flabbergasting.", "Magnanimous.", "Pulchritudinous.", "Consanguineous.", "Psychotomimetic.", "Grandiloquent."};
    char sentences[10][5000]= { "Mrs Elizebeth sat at the head of the long dining table, her three daughters on her left.", 
	                        "She watched him climb stiffly into his wagon and knew a moment of sadness when she remembered that before long she would be leaving and she would never see him again.", 
							 "Into the suitcase, I carelessly threw a pair of ripped jeans, my favorite sweater from high school, an old pair of tube socks with stripes, and $20,000 in cash.", 
							 "Closing her eyes for a few precious moments, she breathed deeply and let her breath out in a long, relaxing sigh.", 
							 "I cleaned up a few paper details and left the office for home, driving around town the long way, just to clear my head.", 
							 "I looked for Mary and Samantha at the bus station, but they arrived at the station before noon and left on the bus before I arrived.", 
							 "I quickly put on my red winter jacket, black snow pants, waterproof boots, homemade mittens, and hand-knit scarf.", 
							 "Did you know that, along with gorgeous architecture, it's home to the largest tamale?", 
							 "I hope that, when I've built up my savings, I'll be able to travel to Mexico.", 
							 "I'd like to see the North Pole, but I will never go where it is that cold!"};
							 
char paragraphs[10][50000]= { "After the popularization of print media in the late 18th Century, newspapers become a regular thing.\n The printing press brought with itself the advent of the era of informationand knowledge.\n The easiest way to transfer information about what was happening around the world was the newspaper.\n Newspapers begin printing early in the morning and are distributed in a systematic manner.", 
	                        "She watched him climb stiffly into his wagon and knew a moment of sadness when she remembered that before long she would be leaving and she would never see him again.", 
							 "The Solar System consists of the Sun Moon and Planets.\n It also consists of comets,meteoroids and asteroids.\n The Sun is the largest member of the Solar System.\n In order of distance from the Sun, the planets are Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune and Pluto; the dwarf planet.\n The Sun is at the centre of the Solar System and the planets, asteroids, comets and meteoroids revolve around it.", 
							 "In-plant science, a tree is a lasting plant with a lengthened stem, a trunk, branches, and also leaves in many species.\n In certain areas, the meaning of a tree might tend to be smaller, incorporating just woody plants having auxiliary development.\n These plants are used as timber or plants over a predetermined stature.\n In more extensive definitions, the taller palms, tree greeneries, bananas, and bamboos are likewise trees.", 
							 "One of the oldest forms of knowledge providers are books; therefore, they are also called the powerhouse of knowledge and information.\n Books provide us information without asking for anything in return, and often it is considered as the best company a human can have.\n Books are our ultimate helper when it comes to the gain of knowledge and eventually achieves wisdom.",
							 "Family is one of the most crucial parts of a human's life.\n A person is incomplete without the complete family.\n It plays an essential role in society.\n Humans are social being and thus needs companionship from others.\n Family makes the kids and children get to learn some of the important values and morals of life."};
							 
  string word;
  string sentence;
  string paragraph;
  char cont;
  time_t starttime;
  time_t endtime;
  int choice, i;
    setcolor(15);
    
  	printf("\t #select the Mode#");pos;
  	setcolor(12);
    cout << " \t ( 1 ) - Easy Mode - Words \n"; 
    cout << " \t\t\t\t\t ( 2 ) - Normal Mode - Sentences \n"; 
    cout << " \t\t\t\t\t ( 3 ) - Hard Mode - Paragraphs \n"; 
    printf("  \t\t\t\t\t ( 4 ) - #Back to main menu#");
	pos;
	scanf("%d",&level);
	//Easy Level
	 if(level==1){
	 	setcolor(14);
	 	system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[0] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Splendiferous"){
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  	score = 1;
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  if(cont!='N'){
  	setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[1] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Captivating"){
  	score = 1;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }  if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[2] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Junoesque"){
  	score = 3;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[3] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Knowledgeable"){
  	score = 4;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[4] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Flabbergasting"){
  	score = 5;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[5] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Magnanimous"){
  	score = 6;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[6] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Pulchritudinous"){
  	score = 7;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[7] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Consanguineous"){
  	score =8;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[8] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Psychotomimetic"){
  	score = 9;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< words[9] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, word);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(word == "Grandiloquent"){
  	score = 10;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }if(cont!='N'){
  	system("cls");
  	setcolor(11);
			printf("\t\t\t\t Game over!");
			pos;
			setcolor(5);
			if(score>5)
			{	printf("Good Work !Keep it up!");pos;

				printf("You got silver medal");
			}
			else
			if(score>8)
			{
				printf("Nice work! You got Gold medal");
			}
			else
			printf("Sorry no medal !you need practise..");
		
		pos;
		printf("Total score is ::%d out of 10",score);
		pos;

		getscore(score,level);//saves data to file
		++x;
		pos;
		printf(" 1. - Play Again - ");
		pos;
 
		printf(" 2. - Main menu - ");pos;
		printf(" 3. - Exit - "); pos;
		printf(" Enter your choice:: ");
		scanf("%d",&ch);
		switch(ch)
		{
		      case 1:startgame();break;//recursive call
		      case 2:main();break;
		      case 3:system("cls");gotoxy(17,10);printf(" - This Game is created by Victor Mwendwa Muasya - ");delay(1000);exit(1);
		      default:pos;printf("wrong choice!");pos;
				main();
		}
	}
	else
	main(); 
  }	//Normal Level
	 if(level==2){
	 	setcolor(14);
	 	system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[0] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "Mrs Elizebeth sat at the head of the long dining table, her three daughters on her left."){
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  	score = 1;
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  if(cont!='N'){
  		setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[1] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == " She watched him climb stiffly into his wagon and knew a moment of sadness when she remembered that before long she would be leaving and she would never see him again."){
  	score = 1;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }  if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[2] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == " Into the suitcase, I carelessly threw a pair of ripped jeans, my favorite sweater from high school, an old pair of tube socks with stripes, and $20,000 in cash."){
  	score = 3;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[3] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "Closing her eyes for a few precious moments, she breathed deeply and let her breath out in a long, relaxing sigh."){
  	score = 4;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[4] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " I took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "I cleaned up a few paper details and left the office for home, driving around town the long way, just to clear my head."){
  	score = 5;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[5] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "I looked for Mary and Samantha at the bus station, but they arrived at the station before noon and left on the bus before I arrived. "){
  	score = 6;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[6] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "I quickly put on my red winter jacket, black snow pants, waterproof boots, homemade mittens, and hand-knit scarf."){
  	score = 7;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[7] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "Did you know that, along with gorgeous architecture, it's home to the largest tamale?"){
  	score =8;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[8] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "I hope that, when I've built up my savings, I?ll be able to travel to Mexico."){
  	score = 9;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< sentences[9] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, sentence);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(sentence == "I'd like to see the North Pole, but I will never go where it is that cold!"){
  	score = 10;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }if(cont!='N'){
  	system("cls");
  	setcolor(11);
			printf("\t\t\t\t Game Over!");
			pos;
			setcolor(5);
			if(score>5)
			{	printf("Good Work !Keep it up!");pos;

				printf("You got silver medal");
			}
			else
			if(score>8)
			{
				printf("Nice work! You got Gold medal");
			}
			else
			printf("Sorry no medal !you need practise..");
		
		pos;
		printf("Total score is ::%d",score);
		pos;

		getscore(score,level);//saves data to file
		++x;
		pos;
		printf(" 1. - Play Again - ");
		pos;

		printf(" 2. - Main Menu - ");pos;
		printf(" 3. - Exit - "); pos;
		printf(" Enter your choice:: ");
		scanf("%d",&ch);
		switch(ch)
		{
		      case 1:startgame();break;//recursive call
		      case 2:main();break;
		      case 3:system("cls");gotoxy(17,10);printf("#This Game is created by Victor Mwendwa Muasya#");delay(1000);exit(1);
		      default:pos;printf("Wrong Choice!");pos;
				main();
		}
	}
	else
	main(); 
  }//Hard Level
	 if(level==3){
	 	setcolor(14);
	 	system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< paragraphs[0] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, paragraph);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(paragraph == "After the popularization of print media in the late 18th Century, newspapers become a regular thing. The printing press brought with itself the advent of the era of information and knowledge. The easiest way to transfer information about what was happening around the world was the newspaper. Newspapers begin printing early in the morning and are distributed in a systematic manner."){
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  	score = 1;
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  if(cont!='N'){
  	setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< paragraphs[1] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, paragraph);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(paragraph == "The Solar System consists of the Sun Moon and Planets. It also consists of comets, meteoroids and asteroids. The Sun is the largest member of the Solar System. In order of distance from the Sun, the planets are Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune and Pluto; the dwarf planet. The Sun is at the centre of the Solar System and the planets, asteroids, comets and meteoroids revolve around it."){
  	score = 1;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }  if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< paragraphs[2] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, paragraph);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(paragraph == "In-plant science, a tree is a lasting plant with a lengthened stem, a trunk, branches, and also leaves in many species. In certain areas, the meaning of a tree might tend to be smaller, incorporating just woody plants having auxiliary development. These plants are used as timber or plants over a predetermined stature. In more extensive definitions, the taller palms, tree greeneries, bananas, and bamboos are likewise trees."){
  	score = 3;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< paragraphs[3] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, paragraph);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(paragraph == "One of the oldest forms of knowledge providers are books; therefore, they are also called the powerhouse of knowledge and information. Books provide us information without asking for anything in return, and often it is considered as the best company a human can have. Books are our ultimate helper when it comes to the gain of knowledge and eventually achieves wisdom."){
  	score = 4;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  } if(cont!='N'){
  	   setcolor(14);
  		system("cls");
    	       cout << " Type the prompt then press enter, when done to continue to the next prompt...\n\n";
    	        setcolor(9) ;
    	       cout << " "<< paragraphs[4] << endl; 
  //  I'll add a pause here so your timer won't start before you're finishes reading
  cout<<endl<<endl<<" Type Here - >> ";
  setcolor(15) ;
  cin.get();
/*  cout <<*/ time(&starttime);
  // This will also not get the whole sentence, only the first word.
//  cin >> sentence;
  //  So I suggest using this instead:
  getline(cin, paragraph);
/*  cout <<*/ time(&endtime);
setcolor(14);
  cout << "\n";
 cout << " It took you this many whole seconds:" << endtime-starttime<<endl;
  cout<<" \n";
  if(paragraph == "Family is one of the most crucial parts of a human's life. A person is incomplete without the complete family. It plays an essential role in society. Humans are social being and thus needs companionship from others. Family makes the kids and children get to learn some of the important values and morals of life."){
  	score = 5;
  	cout<<" Congratulations, your spelling is correct. Keep it up!!!";
  }else{
  	cout<<" Your spelling is incorrect, better luck next time.";
  }
  cout<<" Would you like to continue ? (Y/N) \n";
  cin>>cont;
  }else{
  	main();
  }if(cont!='N'){
  	system("cls");
  	setcolor(11);
			printf("\t\t\t\t Game Over!");
			pos;
			setcolor(5);
			if(score>4)
			{	printf("Good Work !Keep it up!");pos;

				printf("You got silver medal");
			}
			else
			if(score>2)
			{
				printf("Nice work! You got Gold medal");
			}
			else
			printf("Sorry no medal !you need practise..");
		
		pos;
		printf("Total score is ::%d out of 5",score);
		pos;

		getscore(score,level);//saves data to file
		++x;
		pos;
		printf(" 1. - Play Again - ");
		pos;

		printf(" 2. - Main Menu - ");pos;
		printf(" 3. - Exit - "); pos;
		printf(" Enter your choice:: ");
		scanf("%d",&ch);
		switch(ch)
		{
		      case 1:startgame();break;//recursive call
		      case 2:main();break;
		      case 3:system("cls");gotoxy(17,10);printf(" - This Game is created by 137368 - Victor Mwendwa Muasya - ");delay(1000);exit(1);
		      default:pos;printf(" Wrong choice! ");pos;
				main();
		}
	}
	else
	main(); 
  }if(level==4)
	main();	
}

       

 



//......................end of start game function..........................


//...........................sett function starts..........................
//void sett()  //set time limit
//{
//    int ch;
//    system("cls");
//    //rectangle(0,0,70,15);
//    setcolor(11);
//    x=5;
//    pos;
//    printf("Set the time limit for game in minute::");
//    pos;
//    ln
//    pos;
//    printf("press 0 for half minute") ;pos;
//    printf("press 1 for 1 minute"); pos;
//    printf("press 2 for 2 minute");pos;
//    scanf("%d",&ch);
//    switch(ch)
//    {
//        case 0:t=30;break;
//        case 1:t=60;break;
//        case 2:t=120;break;
//        default:main();
//    }
//}
//....................sett function ends....................................

//........................................................................
void help()
{
    system("cls");
    //rectangle(0,0,70,15);
    gotoxy(7,5);
    setcolor(6);

   printf("\t\t\t\t\t Welcome To Mwalimu Ya Word Application \n\n \t\t\t\t\t#......Rules Of The Game......# \n \t\t\t\t\t=-> Enter your Full Name as player name \n\n \t\t\t\t\t=-> Select the level and get started \n \n \t\t\t\t\t> Type / Enter ( 1 ) to Start Game / Play Easy Mode \n \t\t\t\t\t> Type / Enter ( 2 ) to see Scoreboard / Play Normal Mode \n \t\t\t\t\t> Type / Enter ( 3 ) to see Help / Play Hard Mode  \n \t\t\t\t\t> Type / Enter ( 4 ) to see about game \n \t\t\t\t\t> Type / Enter ( 0 ) to go back / Back To Main Menu \n \n \t\t\t\t\t=-> Characters are displayed and you have to type them as fast as you \n \t\t\t\t\t> Type / Enter Y or N to go back. \n\n \n \t\t\t\t\t Created by - 137368 - Victor Mwendwa Muasya \n");
     printf("\n\n\t\t\t\t\t Type Any Key & Enter To Continue...");
    getch();main();
}
void About_me()
{       system("cls");
    gotoxy(7,7);
    printf(" Mwalimu Ya Word is the basic application to run any Windows Computer. \n\n This Typing Tutor Project will be done in C++ to measure user’s typing speed and accuracy to help  enhance practice & polish their typing skills.\n\n This application is very useful as typing speed and accuracy plays vital role while working in computer to save time.\n\n  This is a simple console application written in C++ programming language, and compiled using DEV C++ compiler.");
       printf("\n\n\t\t\t\t\t Type Any Key & Enter To Continue...");
	   getch();
       main();
}
//.........................................................................
void getscore(int score,int level)
{
    FILE *fp;
    fp=fopen("file.txt","a");
    pos;
    if(fp==NULL)
    printf("error in opening file");
    fprintf(fp,"\nname=%s   score=%d  level=%d",name,score,level);
    fclose(fp);
    pos;
    printf("Scorecard Updated");
}
void scorecard()
{       int ch;
    FILE *fp;
    system("cls");
    //rectangle(0,0,70,15);
    x=3;

    printf("\t\t\t....The scores are...\n");

    fp=fopen("file.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {    printf("%c",ch);
    }
    printf("\n\n\t\t\t\t\t Type Any Key & Enter To Continue...");
    getch();
    main();
}
