#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
using namespace std; 
//==========================//
//Made By Rao Muhammad Hamza//
//==========================//

class explore{
	private:
		double atmwait;
		int count=0,atmno,elementno,score=0,i,lives=6;
		string name,symbol,element,classify,answer,username;
	public:
		void search_atmno(){
			string check;
			fstream atmnocheck;
			atmnocheck.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			atmnocheck>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"Enter The Atomic Number Of The Element: ";
			cin>>elementno;
			while(getline(atmnocheck,check)){
				if(elementno==atmno){
					cout<<"Element Found!\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					count++;
					break;
				}
				else{
				atmnocheck>>name>>symbol>>atmno>>atmwait>>classify;	
				}
			}
			if(count==0){
					cout<<"Element Not Found";
				}
			
		}
		void search_symbol(){
			string check;
			fstream symbolcheck;
			symbolcheck.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			symbolcheck>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"Enter The Symbol Of The Element: ";
			cin.ignore();
			getline(cin,element);
			while(getline(symbolcheck,check)){
				if(element==symbol){
					cout<<"Element Found!\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					count++;
					break;
				}
				else{
				symbolcheck>>name>>symbol>>atmno>>atmwait>>classify;	
				}
			}
			if(count==0){
					cout<<"Element Not Found";
				}
			
		}
		void search_name(){
			double atmwait;
			int count=0,atmno;
			string name,symbol,element,check;
			fstream namecheck;
			namecheck.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			namecheck>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"Enter The Name Of The Element: ";
			cin.ignore();
			getline(cin,element);
			while(getline(namecheck,check)){
				if(element==name){
					cout<<"Element Found!\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					count++;
					break;
				}
				else{
				namecheck>>name>>symbol>>atmno>>atmwait>>classify;	
				}
			}
			if(count==0){
					cout<<"Element Not Found";
				}
			
			
		}
		
		void search_alkmetal(){
			fstream checker;
			string alkmetalcheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Alkali-Metals Present In The Periodic Table: ";
			while(getline(checker,alkmetalcheck)){
				if(classify=="Alkali-Metal"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
			
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
			
		}
		void search_alkearmetal(){
			fstream checker;
			string alkearmetalcheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Alkaline-Earth-Metals Present In The Periodic Table: ";
			while(getline(checker,alkearmetalcheck)){
				if(classify=="Alkaline-Earth-Metal"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		}
		void search_transmetals(){
			fstream checker;
			string transmetalcheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Transition-Metals Present In The Periodic Table: ";
			while(getline(checker,transmetalcheck)){
				if(classify=="Transition-Metal"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		}
		
		void search_postransmetals(){
			fstream checker;
			string postransmetalcheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Post-Transition-Metals Present In The Periodic Table: ";
			while(getline(checker,postransmetalcheck)){
				if(classify=="Post-Transition-Metal"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		}
		void search_metalloids(){
			fstream checker;
			string metalloidcheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Metalloids Present In The Periodic Table: ";
			while(getline(checker,metalloidcheck)){
				if(classify=="Metalloid"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		}
		
		void search_halogens(){
			fstream checker;
			string halogencheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Halogens Present In The Periodic Table: ";
			while(getline(checker,halogencheck)){
				if(classify=="Halogen"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		}
		
		void search_nobgases(){
			fstream checker;
			string nobgascheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Noble-Gases Present In The Periodic Table: ";
			while(getline(checker,nobgascheck)){
				if(classify=="Noble-Gas"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		
		}
		void search_lanthaelem(){
	    	fstream checker;
			string actinocheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Lanthanoid Elements Present In The Periodic Table: ";
			while(getline(checker,actinocheck)){
				if(classify=="Lanthanoid-Element"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
		
		}
			void search_actino(){
			fstream checker;
			string actinocheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Actinoid Elements Present In The Periodic Table: ";
			while(getline(checker,actinocheck)){
				if(classify=="Actinoid-Element"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
			}
			void search_nonmetals(){
			fstream checker;
			string nonmetalcheck;
			checker.open("G:\\PRFILES\\lab\\PT.txt",ios::in);
			checker>>name>>symbol>>atmno>>atmwait>>classify;
			cout<<"All Non-Metals Present In The Periodic Table: ";
			while(getline(checker,nonmetalcheck)){
				if(classify=="Non-Metal"){
					cout<<"\n"<<endl;
					cout<<"\nName: "<<name;
					cout<<"\nSymbol: "<<symbol;
					cout<<"\nAtomic Number: "<<atmno;
					cout<<"\nAtomic Weight: "<<atmwait;
					cout<<"\nClassification: "<<classify;
					cout<<"\n"<<endl;	
					count++;
				}
				checker>>name>>symbol>>atmno>>atmwait>>classify;
			}
			if(count==0){
				cout<<"\n\nElement Not Found!";
			}
			}
			void showpt(){
				cout<<"\n\t\t\t\t\tTHE PERIODIC TABLE\n";
                cout<<"\t\t\tH                                                      He"<<"\n\n";
                cout<<"\t\t\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
                cout<<"\t\t\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
                cout<<"\t\t\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
                cout<<"\t\t\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
                cout<<"\t\t\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
                cout<<"\t\t\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Rg  Cn  Nh Fl  Mc Lv  Ts Og"<<"\n\n\n";
                cout<<"\t\t\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
                cout<<"\t\t\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n\n\n";
			}  
 
            void elementgame_r1(){
            	string r1_check;
            	cout<<"\t\t\t\t\t\tLoading..";
            	Sleep(1000);
            	cout<<"....";
                system("cls");
                cout<<"\t\t\t\t\t\tElements::The Game";
                cout<<"\nWhat Should We Call You ?\n";
                cin>>username;
                system("cls");
                cout<<"Welcome "<<username<<"!";
                cout<<"\n\nInstructions:\n\n";
                cout<<"1.This is essentially a trivia game made to test your chemistry with the periodic table.\n";
                cout<<"2.There are 3 rounds And You Have 6 Lives.\n";
                cout<<"3.To win you need to score more than 70% in all rounds combined.\n";
                cout<<"4.Type 'score' to check the current leaderboard.\n";
                cout<<"5.Type 'reset' to restart the game.\n";
                cout<<"\n\nPress any key to START the game";
                getch();
                system("cls");
                
                for(i=0;i<=10;i++){
                ifstream r1("G://PRFILES//lab/R1.txt");
                r1>>name>>symbol>>atmno>>atmwait>>classify;
                while(getline(r1,r1_check)){
                	cout<<"\t\t\t\t\t\tRound I";
                    cout<<"\nRound I: Name All The Elements";
                	cout<<"\n\n\nElement's Symbol: "<<symbol<<endl;
                	cout<<"Element's Atomic Number: "<<atmno<<endl;
                	cout<<"Element's Atomic Weight: "<<atmwait<<endl;
                	cout<<"Classification: "<<classify<<endl;
                	cout<<"\nLives: "<<lives;
                	cout<<"\nScore: "<<score;
                	cout<<"\n\nElement's Name: ";
                	cin>>answer;
                	if(answer==name){
                		cout<<"Correct! It is "<<name;
                		cout<<"\nLives: "<<lives;
                		score++;
                		cout<<"\nScore: "<<score;
					}
					else if(lives==0){
						cout<<"\nYou Lose! \n\nPress any key to play again";
						getch();
						write_score();
						system("cls");
						elementgame_r1();
					}
					else if(answer=="reset"){
						cout<<"You Restarted The Game!";
						cout<<"\n\nPress any key to start again";
						getch();
						system("cls");
						lives=3;
						elementgame_r1();
					}
					else if(answer=="score"){
						system("cls");
						show_score();
					}
					
					else{
						cout<<"Wrong! It is "<<name;
						lives--;
						cout<<"\nLives: "<<lives;
					}
					cout<<"\n\nPress any key to move on";
					getch();
					system("cls");
					r1>>name>>symbol>>atmno>>atmwait>>classify;
					
                }
                  cout<<"You got "<<(score/10.0)*100.0<<"% in this round";
                  cout<<"\n\nPress any key to move on to Round 2";
                  getch();
                  system("cls");
                  elementgame_r2();
                  break;	
				}
                
				}
				
				void elementgame_r2(){
				string r2_check;
				for(i=0;i<=10;i++){
                ifstream r2("G://PRFILES//lab//R2.txt");
                r2>>name>>symbol>>atmno>>atmwait>>classify;
                while(getline(r2,r2_check)){
                	cout<<"\t\t\t\t\t\tRound II";
                    cout<<"\nRound II: Enter The Symbol For The Element";
                	cout<<"\n\n\nElement's Name: "<<name<<endl;
                	cout<<"Element's Atomic Number: "<<atmno<<endl;
                	cout<<"Element's Atomic Weight: "<<atmwait<<endl;
                	cout<<"Classification: "<<classify<<endl;
                	cout<<"\nLives: "<<lives;
                	cout<<"\nScore: "<<score;
                	cout<<"\n\nElement's Symbol: ";
                	cin>>answer;
                	if(answer==symbol){
                		cout<<"Correct! It is "<<symbol;
                		cout<<"\nLives: "<<lives;
                		cout<<"\nScore: "<<score;
                		score++;
					}
					else if(answer=="reset"){
						cout<<"You Restarted The Game!";
						cout<<"Press any key to start again";
						getch();
						elementgame_r1();
					}
					else if(lives==0){
						cout<<"You Lose! \n\nPress any key to play again";
						getch();
						elementgame_r1();
					}
					else if(answer=="score"){
						system("cls");
						show_score();
					}
					else if(answer=="reset"){
						cout<<"You Restarted The Game!";
						cout<<"\n\nPress any key to start again";
						getch();
						system("cls");
						lives=3;
						elementgame_r1();
					}
					else{
						cout<<"Wrong! It is "<<symbol;
						lives--;
						cout<<"\nLives: "<<lives;
						cout<<"\nScore: "<<score;
					}
					cout<<"\n\nPress any key to move on";
					getch();
					system("cls");
					r2>>name>>symbol>>atmno>>atmwait>>classify;
					
                }
                  cout<<"You got "<<(score/20.0)*100.0<<"% in this round";
                  cout<<"\n\nPress any key to move on to Round 3";
                  getch();
                  system("cls");
                  elementgame_r3();
                  break;	
				}
			}
			    void elementgame_r3(){
			    string r3_check,elemsym,elemname;
			    int elematm;
			    for(i=0;i<=10;i++){
                ifstream r3("G://PRFILES//lab//R3.txt");
                r3>>name>>symbol>>atmno>>atmwait>>classify;
                while(getline(r3,r3_check)){
                	cout<<"\t\t\t\t\t\tRound III";
                    cout<<"\nRound III: Memory Test";
                    Sleep(450);
                	cout<<"\n\n\nElement's Name: "<<name<<endl;
                	Sleep(450);
                	cout<<"\nElement's Symbol: "<<symbol<<endl;
                	Sleep(450);
                	cout<<"\nElement's Atomic Number: "<<atmno<<endl;
                	Sleep(450);
                	system("cls");
                	cout<<"\t\t\t\t\t\tRound III";
                    cout<<"\nRemember";
                	cout<<"\nLives: "<<lives;
                	cout<<"\nScore: "<<score;
                	cout<<"\n\nElement's Name: ";
                	cin>>elemname;
                	cout<<"\nElement's Symbol: ";
                	cin>>elemsym;
                	cout<<"\nElement's Atomic Number: ";
                	cin>>elematm;
                	if(elemname == name && elemsym == symbol && elematm == atmno){
                		cout<<"\n\nCorrect! It was:";
                		cout<<"\n\nElement's Name: "<<name;
                		cout<<"\nElement's Symbol: "<<symbol;
                		cout<<"\nElement's Atomic Number: "<<atmno;
                		cout<<"\nLives: "<<lives;
                		cout<<"\nScore: "<<score;
                		score=score+2;
					}
			
					else if(lives==0){
						cout<<"You Lose! \n\nPress any key to play again";
						getch();
						elementgame_r1();
					}
					else if(elemname=="score"||elemsym=="score"){
						system("cls");
						show_score();
					}
					else if(elemname=="reset"||elemsym=="reset"){
						cout<<"You Restarted The Game!";
						cout<<"\n\nPress any key to start again";
						getch();
						system("cls");
						lives=6;
						elementgame_r1();
					}
					else{
						cout<<"\n\nWrong! It was:";
						lives--;
						cout<<"\n\nElement's Name: "<<name;
                		cout<<"\nElement's Symbol: "<<symbol;
                		cout<<"\nElement's Atomic Number: "<<atmno;
						cout<<"\nLives: "<<lives;
						cout<<"\nScore: "<<score;
					}
					cout<<"\n\nPress any key to move on";
					getch();
					system("cls");
					r3>>name>>symbol>>atmno>>atmwait>>classify;
					
                }
                  cout<<"Your Final Score is "<<(score/40.0)*100.0<<"%";
                  write_score();
                  if(score>70.0/100.0){
                  	cout<<"\nCongratulations You Won!";
				  }
				  else{
				  	cout<<"Your score was less than required to win the game!\nBetter Luck Next Time";
				  }
				  cout<<"\n\nPress Any Key To Go Back To The Menu";
                  getch();
                  break;	
				}
				}
				
				void write_score(){
					fstream scores;
					scores.open("G://PRFILES//lab//Score.txt",ios::out|ios::app);
					scores<<"Name: "<<username<<endl;
					scores<<"Score: "<<(score/40.0)*100.0<<"%"<<endl;
					scores<<"\n\n";
					scores.close();
				}
				void show_score(){
					fstream scores;
					string score_check;
					scores.open("G://PRFILES//lab//Score.txt",ios::in);
					cout<<"Current Scores:\n";
					while(getline(scores,score_check)){
					    cout<<"\n\n"<<score_check;
					}
					scores.close();
					}
};

               





class welscr: public explore{
	public:
		int choice,ch1;
		char ch2;
		void main_menu(){
		system("Color 0B");
		cout<<"\t\t\t\t\t\tDigital Periodic Table\n";
		cout<<"========================================================================================================================\n";
		cout<<"\n\t\t\t\t\t\t1.Display The Table\n\n\n";
		cout<<"\t\t\t\t\t\t2.Explore The Table\n\n\n";
		cout<<"\t\t\t\t\t\t3.Play Elements::The Game\n\n\n";
		cout<<"\t\t\t\t\t\t4.Check Scores\n\n\n";
		cout<<"\t\t\t\t\t\t5.Exit\n\n\n";
		cout<<"========================================================================================================================\n\t\t\t\t\t\t";
	    cin>>choice;
	    switch(choice){
	    	case 1:
	    		system("cls");
	    		showpt();
	    		cout<<"Press Any Key To Go Back To The Menu";
	    		getch();
	    		system("cls");
	    		main_menu();
	    		break;
	    	case 2:
	    		system("cls");
	    		cout<<"\t\t\t\t\tWelcome Explorer!\n";
	    		cout<<"========================================================================================================================\n";
	    		cout<<"\n\t\t\t\t\t1.Search Element By Name\n"<<endl;
	    		cout<<"\t\t\t\t\t2.Search Element By Symbol\n"<<endl;
	    		cout<<"\t\t\t\t\t3.Search Element By Atomic Number\n"<<endl;
	    		cout<<"\t\t\t\t\t4.Explore Alkali Metals\n"<<endl;
	    		cout<<"\t\t\t\t\t5.Explore Alkali Earth Metals\n"<<endl;
	    		cout<<"\t\t\t\t\t6.Explore Transition Metals\n"<<endl;
	    		cout<<"\t\t\t\t\t7.Explore Post-Transition-Metals\n"<<endl;
	    		cout<<"\t\t\t\t\t8.Explore Metalloids\n"<<endl;
	    		cout<<"\t\t\t\t\t9.Explore Halogens\n"<<endl;
	    		cout<<"\t\t\t\t\t10.Explore Noble Gases\n"<<endl;
	    		cout<<"\t\t\t\t\t11.Explore Lanthanoid Elements\n"<<endl;
	    		cout<<"\t\t\t\t\t12.Explore Actinoid Elements\n"<<endl;
	    		cout<<"\t\t\t\t\t13.Explore Non-Metals\n"<<endl;
	    		cout<<"\t\t\t\t\t14.Back To The Menu\n"<<endl;
	    		cout<<"\n========================================================================================================================\n\t\t\t\t\t";
	    		cin>>ch1;
	    		
	    		switch(ch1){
	    			case 1:
	    				do{
	    				system("cls");
	    				search_name();
	    				cout<<"\n\nWant To Search For Another Element ? (Y/N)\n";
	    				cin>>ch2;
	    				
				}
				while(ch2=='y'||ch2=='Y');
				system("cls");
				main_menu();
				break;
				
				  case 2:
				  do{
	    			system("cls");
	    			search_symbol();
	    			cout<<"\n\nWant To Search For Another Element ? (Y/N)\n";
	    			cin>>ch2;
	    				
				}
				while(ch2=='y'||ch2=='Y');
				system("cls");
				main_menu();
				break;	
				
				case 3:
				 do{
	    			system("cls");
	    			search_atmno();
	    			cout<<"\n\nWant To Search For Another Element ? (Y/N)\n";
	    			cin>>ch2;
	    				
				}
				while(ch2=='y'||ch2=='Y');
				system("cls");
				main_menu();
				break;	
				
				case 4:
	    			system("cls");
	    			search_alkmetal();
	    			cout<<"\n\nWant To Know What An Alkali Metal Actually is ? (Y/N)\n";
	    			cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is An Alkali Metal?\n\n";
					cout<<"In general the term ALKALI refers to the basic or alkaline nature of their metal hydroxides.\n";
					cout<<"The compounds are called alkali metals because when they react with water they usually form alkalies,\n";
					cout<<"which are nothing but strong bases that can easily neutralize acids.\n";
					cout<<"Alkali Metals are found in the first column of the periodic table.";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_alkmetal();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}
				break;	
				
				case 5:
					system("cls");
	    			search_alkearmetal();
	    			cout<<"\n\nWant To Know What An Alkaline Earth Metal Actually is ? (Y/N)\n";
	    			cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is An Alkaline Earth Metal?\n\n";
					cout<<"The alkaline earth metals are the elements that correspond to group 2 of the modern periodic table.\n";
					cout<<"The elements of this group are quite similar in their physical and chemical properties.\n";
					cout<<"For example, all alkaline earth metals are silvery-white coloured solids under standard conditions.\n";
					cout<<"They are also highly lustrous (shiny) and are quite reactive.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_alkearmetal();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}
				break;
				
				case 6:
					system("cls");
	    			search_transmetals();
	    			cout<<"\n\nWant To Know What A Transition Metal Actually is ? (Y/N)\n";
	    			cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Transition Metal?\n\n";
					cout<<"Transition elements are the elements that are found in Groups 3-12.\n";
					cout<<"As a group, they display typical metallic properties and are less reactive than the metals in Groups 1 and 2.\n";
					cout<<"Some of the more familiar ones are so unreactive that they can be found in nature in their free, or uncombined state.\n";
					cout<<"A good example of this would Gold.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_transmetals();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}
				break;
				
				case 7:
				 	system("cls");
	    			search_postransmetals();
	    			cout<<"\n\nWant To Know What A Post-Transition Metal Actually is ? (Y/N)\n";
	    			cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Post-Transition Metal?\n\n";
				    cout<<"The post-transition metals, also known as the poor metals, they are present in Groups 12-16.\n";
				    cout<<"They are normally considered metalloids hence they have higher electronegativities than transition metals;\n";
				    cout<<"Their melting points are lower, too, they are generally softer than other metals.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_postransmetals();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}
				break;
				
				case 8:
				  	system("cls");
	    			search_metalloids();
	    			cout<<"\n\nWant To Know What A Metalloid Actually is ? (Y/N)\n";
	    			cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Metalloid?\n\n";
				    cout<<"A metalloid is a chemical element that exhibits some properties of metals and some of nonmetals.\n";
				    cout<<"In the periodic table metalloids form a jagged zone dividing elements,\n";
					cout<<"that have clear metallic properties from elements that have clear nonmetallic properties.\n";
					cout<<"Metalloids tend to be semiconductors, Silicon is the best known example of a semiconductor.\n";
					cout<<"Most microchips and microprocessors are made with Silicon.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_metalloids();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}	
				break;
				
				case 9:
				system("cls");
	    		search_halogens();
	    		cout<<"\n\nWant To Know What A Halogen Actually is ? (Y/N)\n";
	    		cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Halogen?\n\n";
				    cout<<"A halogen is a chemical element that forms a salt when it reacts with a metal.\n";
				    cout<<"The halogens are all highly reactive, which means they're quick to form bonds with other elements.\n";
				    cout<<"What they often end up becoming is some kind of salt, including common table salt.";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_halogens();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}	
				break;	
				
				case 10:
				system("cls");
	    		search_nobgases();
	    		cout<<"\n\nWant To Know What A Noble-Gas Actually is ? (Y/N)\n";
	    		cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Noble-Gas?\n\n";
				    cout<<"The noble gases are the chemical elements in group 18 of the periodic table.\n";
				    cout<<"They are the most stable due to having the maximum number of valence electrons their outer shell can hold.\n";
				    cout<<"Therefore, they rarely react with other elements since they are already stable.\n";
				    cout<<"Other characteristics of the noble gases are that they all conduct electricity, fluoresce, are odorless and colorless,\n";
				    cout<<"and are used in many conditions when a stable element is needed to maintain a safe and constant environment.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_nobgases();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}	
				break;
				
				case 11:
				system("cls");
	    		search_lanthaelem();
	    		cout<<"\n\nWant To Know What A Lanthanoid-Element Actually is ? (Y/N)\n";
	    		cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Lanthanoid-Element?\n\n";
				    cout<<"Lanthanoids or Lanthanides are the rare earth elements of the periodic table,\n";
				    cout<<"i.e. the elements with atomic numbers from 58 to 71 following the element Lanthanum.\n";
				    cout<<"They are called rare earth metals since the occurrence of these elements is very small (0.0003 % of Earth's crust).\n";
				    cout<<"The lanthanides are highly dense elements, with densities ranging from roughly 6.1 to 9.8 grams,\n";
				    cout<<"per cubic centimetre.Like most metals, these elements have very high melting and boiling points.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_lanthaelem();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}	
				break;
				
				case 12:
				system("cls");
	    		search_actino();
	    		cout<<"\n\nWant To Know What An Actinoid Actually is ? (Y/N)\n";
	    		cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is An Actinoid?\n\n";
				    cout<<"The term 'actinide series' has been derived from the first element of the series, actinium.\n";
				    cout<<"The symbol An is used while referring to any of the actinide series elements,\n";
					cout<<"which range in the periodic table from atomic numbers 89 to 103.\n";
					cout<<"All actinide series elements are radioactive in nature, they release a large amount of energy on radioactive decay.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_actino();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}	
				break;
				
				case 13:
				system("cls");
	    		search_nonmetals();
	    		cout<<"\n\nWant To Know What A Non-Metal Actually is ? (Y/N)\n";
	    		cin>>ch2;
	    				
			
				if(ch2=='y'||ch2=='Y'){
					system("cls");
					cout<<"What Is A Non-Metal?\n\n";
				    cout<<"Non-metals are those which lack all the metallic attributes.They are good insulators of heat and electricity.\n";
				    cout<<"They are mostly gases and sometimes liquid.Some they are even solid at room temperatures like Carbon, sulphur etc.\n";
				    cout<<"In their solid-state, non-metals tend to be brittle. Hence, they lack the malleability and ductility present in metals.\n";
					cout<<"\n\n\nType E To Go Back To Exploring: ";
					cin>>ch2;
					if(ch2=='E'||'e'){
					system("cls");
					search_nonmetals();
					cout<<"\nPress Any Key To Go Back To Main Menu";
					getch();
					system("cls");
					main_menu();	
					}
				}
				else{
					system("cls");
					main_menu();
				}	
				break;	
				
				case 14:
				system("cls");
				main_menu();
				break;
					
				default:
					cout<<"Invalid Choice! Press Any Key To Try Again";
		        	getch();
		        	system("cls");
		        	main_menu();
					
		}
		        case 3:
		        	system("cls");
		        	elementgame_r1();
		        	system("cls");	        	
		        	main_menu();
		        	break;
		        	
		        case 4:
		        	system("cls");
		        	show_score();
		        	cout<<"\n\nPress Any Key To Go Back To Main Menu";
		        	getch();
		        	system("cls");
		        	main_menu();
					break;
					
				case 5:
				    exit(0);		        	
		        default:
		        	cout<<"Invalid Choice! Press Any Key To Try Again";
		        	getch();
		        	system("cls");
		        	main_menu();
		}
	
	
}

};
int main(){
	welscr w1;
	w1.main_menu();
}
