#include<iostream>
#include<windows.h>
using namespace std;


void gotoxy(int x,int y);
char getCharAtxy(short int x,short int y);
void printHeader();
void printMaze();
void printPlayer();
void erasePlayer();
void movePlayerRight();
void movePlayerLeft();
void movePlayerDown();
void movePlayerUp();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
void printBonus();

bool bonusCollected = false;
int Px=2,Py=28;
int Ex1=135,Ey1=33;
int Ex2=75,Ey2=35;
int Ex3=95,Ey3=34;
int score=0;


main()
{
	system("cls");
	printHeader();
	printMaze();
	printBonus();
	printEnemy1();
	printEnemy2();
	printEnemy3();
	printPlayer();
	gotoxy(0,40);
	cout<<"SCORE="<<score;
	while(true)
	{
		if(GetAsyncKeyState(VK_RIGHT))
		{
			movePlayerRight();
		}

		if(GetAsyncKeyState(VK_UP))
		{
			movePlayerUp();
		}
		if(GetAsyncKeyState(VK_LEFT))
		{
			movePlayerLeft();
		}
		if(GetAsyncKeyState(VK_DOWN))
		{
			movePlayerDown();
		}
		moveEnemy1();
		moveEnemy2();
		moveEnemy3();
		Sleep(200);
	}	
}


void printHeader()
{
	cout<<endl<<endl;
	cout<<"               *****     **   **     *****     ******     *****             ***     ***      **      *****     ******     ****    "<<endl;
	cout<<"              **         **   **     **   *    **         **   *            ****   ****    **  **    **   *      **      **  **   "<<endl;
	cout<<"              ******     **   **     *****     ****       *****             ***  *  ***    ******    *****       **      **  **   "<<endl;
	cout<<"                  **     **   **     **        **         **   *            ***     ***    **  **    **   *      **      **  **   "<<endl;
	cout<<"              *****      *******     **        ******     **   *            ***     ***    **  **    **   *    ******     ****    "<<endl;
	cout<<endl<<endl;

}


void printMaze()
{
	cout<<"######################################################################################################################################################"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"######################################################################################################################################################"<<endl;
}


void printPlayer()
{
	gotoxy(Px,Py);
	cout<<"      ___      "<<endl;
	gotoxy(Px,Py+1);
	cout<<"    _|   |__   "<<endl;
	gotoxy(Px,Py+2);
	cout<<"   |________|  "<<endl;
	gotoxy(Px,Py+3);
	cout<<"   |_    ._|   "<<endl;
	gotoxy(Px,Py+4);
	cout<<"   |     |_    "<<endl;
	gotoxy(Px,Py+5);
	cout<<"   (_______|   "<<endl;
	gotoxy(Px,Py+6);
	cout<<"  /         \\ "<<endl;
	gotoxy(Px,Py+7);
	cout<<" / |       | \\"<<endl;
	gotoxy(Px,Py+8);
	cout<<"  ||_______||  "<<endl;
	gotoxy(Px,Py+9);
	cout<<"  |)       |)  "<<endl;	
}



void erasePlayer()
{
	gotoxy(Px,Py);
	cout<<"               "<<endl;
	gotoxy(Px,Py+1);
	cout<<"               "<<endl;
	gotoxy(Px,Py+2);
	cout<<"               "<<endl;
	gotoxy(Px,Py+3);
	cout<<"               "<<endl;
	gotoxy(Px,Py+4);
	cout<<"               "<<endl;
	gotoxy(Px,Py+5);
	cout<<"               "<<endl;
	gotoxy(Px,Py+6);
	cout<<"               "<<endl;
	gotoxy(Px,Py+7);
	cout<<"               "<<endl;
	gotoxy(Px,Py+8);
	cout<<"               "<<endl;
	gotoxy(Px,Py+9);
	cout<<"               "<<endl;
}


void movePlayerRight()
{
	if(getCharAtxy(Px+15,Py)==' ')
	{
		erasePlayer();
		Px=Px+1;
		printPlayer();
		if (!bonusCollected && Px <= 23 && Px + 15 >= 23 && Py <= 23 && Py + 10 >= 23)
        	{
            		score += 1; // Increment score
            		bonusCollected = true; // Set bonus as collected
            		gotoxy(0, 40);
            		cout << "SCORE=" << score;
        	}
	}
}


void movePlayerUp()
{
	if(getCharAtxy(Px,Py-1)==' ')
	{
		erasePlayer();
		Py=Py-1;
		printPlayer();
		if (!bonusCollected && Px <= 23 && Px + 15 >= 23 && Py <= 23 && Py + 10 >= 23)
        	{
            		score += 1; // Increment score
            		bonusCollected = true; // Set bonus as collected
            		gotoxy(0, 40);
            		cout << "SCORE=" << score;
        	}
	}
}

void movePlayerDown()
{
	if(getCharAtxy(Px,Py+10)==' ')
	{
		erasePlayer();
		Py=Py+1;
		printPlayer();
		if (!bonusCollected && Px <= 23 && Px + 15 >= 23 && Py <= 23 && Py + 10 >= 23)
        	{
            		score += 1; // Increment score
            		bonusCollected = true; // Set bonus as collected
            		gotoxy(0, 40);
            		cout << "SCORE=" << score;
        	}		
	}
}

void movePlayerLeft()
{
	if(getCharAtxy(Px-1,Py)==' ')
	{
		erasePlayer();
		Px=Px-1;
		printPlayer();
		if (!bonusCollected && Px <= 23 && Px + 15 >= 23 && Py <= 23 && Py + 10 >= 23)
        	{
            		score += 1; // Increment score
            		bonusCollected = true; // Set bonus as collected
            		gotoxy(0, 40);
            		cout << "SCORE=" << score;
        	}
	}
}

void printEnemy1()
{
	gotoxy(Ex1,Ey1);
	cout<<"    ___    "<<endl;
	gotoxy(Ex1,Ey1+1);
	cout<<"   (. .)   "<<endl;
	gotoxy(Ex1,Ey1+2);
	cout<<"  (_____)  "<<endl;
	gotoxy(Ex1,Ey1+3);
	cout<<"    (_)    "<<endl;
	gotoxy(Ex1,Ey1+4);
	cout<<"    | |    "<<endl; 
}

void eraseEnemy1()
{
	gotoxy(Ex1,Ey1);
	cout<<"           "<<endl;
	gotoxy(Ex1,Ey1+1);
	cout<<"           "<<endl;
	gotoxy(Ex1,Ey1+2);
	cout<<"           "<<endl;
	gotoxy(Ex1,Ey1+3);
	cout<<"           "<<endl;
	gotoxy(Ex1,Ey1+4);
	cout<<"           "<<endl;
}

void moveEnemy1()
{
	eraseEnemy1();
	Ex1=Ex1-1;
	if(Ex1==2)
	{
		Ex1=135;
	}
	printEnemy1();
}


void printEnemy2()
{
	gotoxy(Ex2,Ey2);
	cout<<"  \\___/  " <<endl;
	gotoxy(Ex2,Ey2+1);
	cout<<" -(___)-  "<<endl;
	gotoxy(Ex2,Ey2+2);
	cout<<"  /   \\  "<<endl;
}

void eraseEnemy2()
{
	gotoxy(Ex2,Ey2);
	cout<<"          " <<endl;
	gotoxy(Ex2,Ey2+1);
	cout<<"          " <<endl;
	gotoxy(Ex2,Ey2+2);	
	cout<<"          " <<endl;
}

void moveEnemy2()
{
	eraseEnemy2();
	Ey2=Ey2-1;
	if(Ey2==11)
	{
		Ey2=35;
	}
	printEnemy2();
}


void printEnemy3()
{
	gotoxy(Ex3,Ey3);
	cout<<"   ___     "<<endl;
	gotoxy(Ex3,Ey3+1);
	cout<<"  /. .\\   "<<endl;
	gotoxy(Ex3,Ey3+2);
	cout<<" /_____\\  "<<endl;
	gotoxy(Ex3,Ey3+3);
	cout<<" ||   ||   "<<endl;
}

void eraseEnemy3()
{
	gotoxy(Ex3,Ey3);
	cout<<"           "<<endl;
	gotoxy(Ex3,Ey3+1);
	cout<<"           "<<endl;
	gotoxy(Ex3,Ey3+2);
	cout<<"           "<<endl;
	gotoxy(Ex3,Ey3+3);
	cout<<"           "<<endl;
}

void moveEnemy3()
{
	eraseEnemy3();
	Ex3=Ex3-1;
	Ey3=Ey3-1;
	if(Ex3==2)
	{
		Ex3=95;
	}
	if(Ey3==11)
	{
		Ey3=34;
	}
	printEnemy3();
}


void printBonus()
{
	gotoxy(23,23);
	cout<<"o";
}


void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


char getCharAtxy(short int x,short int y)
{
	CHAR_INFO ci;
	COORD xy={0,0};
	SMALL_RECT rect={x,y,x,y};
	COORD coordBufsize;
	coordBufsize.X=1;
	coordBufsize.Y=1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar:' ';
}


