void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void fontsize(int a, int b){  //setting up console font size
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();  
	lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);  
	GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
	lpConsoleCurrentFontEx->dwFontSize.X = a;  
	lpConsoleCurrentFontEx->dwFontSize.Y = b;  
	SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
}
void hidecursor() //used to hide cursor
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void full(){ //used to maximize console
  
  	keybd_event(VK_MENU,0x38,0,0);

    keybd_event(VK_RETURN,0x1c,0,0);

    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);

    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);

}
void ClearScreen(int x,int y) //cleaning intro word
{
	for (int z = y; z<y+10; z++){
		gotoxy(x,z);
		for (int k=0; k<=120;k++){
			printf(" ");
		}
	}
}
void ClearGame(){ //clearing whole  screen excluding borders used while selecting options in menu
	for (int j = 6; j<57; j++){
		gotoxy(11,j);
		for (int i = 0; i<199; i++){
			printf(" ");
		}
	}
}
void ClearWord(int x, int y){ //used to clear long words
	gotoxy(x,y);
	for (int i = 0 ;i<20; i++){
		printf(" ");
	}
}
void Clear1Word(int x, int y){ //used to clear short words
	gotoxy(x,y);
	for (int i = 0 ;i<=11; i++){
		printf(" ");
	}
}
void ClearTimer(){ //used to clean/update timer
	gotoxy(195,4);
	for(int i = 0; i < 10; i++)
		printf(" ");
}
void ClearHighScore(){ //used to clean/update highscore
	gotoxy(10,4);
	printf("                                                                        ");
}
