#include<iostream>
using namespace std;
char square[10]= {'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void Board();

int main()
{
	int Player = 1,i,choice;
	char Mark;
	do
	{
	    Board();
		Player=(Player%2)?1:2;
		cout<<"Player"<<Player<< ", enter a number:";
		cin>> choice;
		Mark=(Player==1)? 'o' : 'x';
		
		if (choice==1 && square[1]=='1')
		square[1]= Mark;
	
		else if (choice==2 && square[2]=='2')
		square[2]= Mark;
		
		else if (choice==3 && square[3]=='3')
		square[3]= Mark;
		
		else if (choice==4 && square[4]=='4')
		square[4]= Mark;
		
		else if (choice==5 && square[5]=='5')
		square[5]= Mark;
		
		else if (choice==6 && square[6]=='6')
		square[6]= Mark;
		
		else if (choice==7 && square[7]=='7')
		square[7]= Mark;
		
		else if (choice==8 && square[8]=='8')
		square[8]= Mark;
		
		else if (choice==9 && square[9]=='9')
		square[9]= Mark;
		
		else
		{
		cout<<"Invalid move";
		 
		 Player--;
		 cin.ignore();
		 cin.get();		
		}
	i=checkwin();
	Player++;			
}while (i==-1);
Board();
   if(i==1)
   cout<<"==>\aPlayer"<<--Player<<"win";
   else
   cout<<"==>\aGAME DRAW";
   cin.ignore();
   cin.get();
   return 0;
}
/************************************************
FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
0 GAME IS OVER AND NO RESULT
*************************************************/
 int checkwin()
 {
 	if (square[1] == square[2] && square[2] == square[3])
 	return 1;
 	
 	else if (square[4] == square[5] && square[5] == square[6])
 	return 1;
 	
 	else if (square[7] == square[8] && square[8] == square[9])
 	return 1;
 	
 		else if (square[1] == square[4] && square[4] == square[7])
 	return 1;
 	
 		else if (square[2] == square[5] && square[5] == square[8])
 	return 1;
 	
 		else if (square[3] == square[6] && square[6] == square[9])
 	return 1;
 	
 		else if (square[1] == square[5] && square[5] == square[9])
 	return 1;
 	
 		else if (square[3] == square[5] && square[5] == square[7])
 	return 1;
 	
 	else if (square[1] != '1' && square[2] !='2' && square[3] !='3' && square[4] !='4' && square[5] !='5' && square[6] !='6' 
	 && square[7] !='7' && square[8] !='8' && square[9] !='9')
 	
 	 return 0;
 	 else
 	 return -1;
 }
/************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARKS
*************************************************/

void Board()
{
	system("cls");
	cout<<"\n\n\tTIC TAC TOE\n\n";
	
	cout<<"Player 1 (X)  -  Player 2 (Y)"<<endl<<endl;
	cout<<endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl;
}
/************************************************
END OF PROJECT
*************************************************/
