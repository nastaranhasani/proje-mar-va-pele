/* - snakes and ladders snake -
-This Program is made bye Ali mirzaei
-Visit my website : www.alimir.ir
-if you have a question connect me with : info@alimir.ir / alimir71@yahoo.com / alimir71@gmail.com*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using std :: cin;
using std :: cout;
using std :: endl;
int Tas (void);
int main ()
{
	int Position=0,tas1,i,counter1=0;
	char ch1;
	int ladders_step[9] = {1,4,9,21,28,36,51,71,80}; //Noghate shorooe nardebanha
	int ladders_jump[9] = {37,10,22,21,69,21,16,20,20}; //Mizan jahesh tavasote nardeban
	int snake_heads[9] = {16,34,49,56,62,87,93,95,98}; //Noghate shorooe sare marha
	int snake_fall[9] = {10,19,38,3,43,70,19,20,20}; //Mizan soghoot tavasote marha
	
	while (Position!=100) { //Shart -> Ta zamani ke be makane bazikon namosavi ba 100 ast.
	cout << "Press any key for getting tas number : " << endl;
	getch();
	tas1=Tas(); //Adade tas ke dar tabe "Tas" mohasebe shod dar t1 rikhte mishavad.
	counter1++; //shomarande (baraye inke bedanim chandbar tas andakhteim).
	if (Position+tas1>100) { //Shart -> agar jame noghte makane ma ba tas bishtar az 100 shod.
	cout << "Please repeat tas (overflow)!" << endl;
	continue; //Be avvale halghe migardad.
	}
	Position+=tas1; //Noghte makan (ke dar avvale bazi mosavi ba 0 bood) ba adade tas jaam mishavad.
	for (i=0;i<9;i++) { //Halghe for -> Baraye barrasi noghte makan ba arayehaye ladders va snakes.  
		if (Position==ladders_step[i]) { //Shart -> Agar makane ma mosavi ba shorooe yek nardeban bood.
	cout <<endl;
	cout << "Good Luck... You jumped!!!"<<endl; 						
	Position+=ladders_jump[i]; //Makane hale hazer be andaze mizan jahesh afzayesh miyabad.
	break; }
		else if (Position==snake_heads[i]) { //Shart -> Agar makane ma mosavi ba shorooe sare yek mar bood...
	cout <<endl;	
	cout << "Bad luck... You falled!!!"<<endl;		 
	Position-=snake_fall[i]; //Makane hale hazer be andaze mizan soghoot kahesh miyabad.
	break;}
	}//for
	cout <<endl;
	cout << "Your Tas : " <<tas1<<endl; //Adade tas
	cout << "Your position : " << Position<<endl; //Makane Hale hazer
	cout <<endl;
    }//while
	cout << "   <----------  Congratulation!!! ----------> \n <---------- You won after ( " << counter1 << " ) times ---------->" <<endl; //Peigham payani
	getch ();	
} //main

int Tas (void) //Tabe mohasebeye tas
{
	srand ( time(NULL) );
	return rand()%6+1;
}
 
