int printMm(){ //Printing Main Menu
	char n;
	int i;
	gotoxy(105, 20);
	printf("MAIN MENU");
	gotoxy(105, 24);
	printf("1 > Start Game");
	gotoxy(105, 26);
	printf("2 > Scoreboard");
	gotoxy(105, 28);
	printf("3 > Help");
	gotoxy(105, 30);
	printf("4 > About-Us");	
	gotoxy(20, 58);
	n = getche();
	i = n - '0'; 
	fflush(stdin);
	return i;
}
int showmodes(){ //Showing Modes
	int n; 
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Modes:");
	gotoxy(105, 24);
	printf("1 > Easy Mode");
	gotoxy(105, 26);
	printf("2 > Hard Mode");
	gotoxy(20, 58);
	i = getche();
	if (i== '`'|| i== '~' ){
		return 0;
	}
	if (i < '3' && i>='1')
		n = i - '0';
	else{
		gotoxy(90,58);
		printf("Wrong Input! Please Select again");
		showmodes();
	}
	fflush(stdin);
	return n;
}
int showElevels(){ //Show Easy Levels
	int n;
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Easy Levels:");
	gotoxy(105, 24);
	printf("1 > Level 1");
	gotoxy(105, 26);
	printf("2 > Level 2");
	gotoxy(105, 28);
	printf("3 > Level 3");
	gotoxy(20, 58);
	i = getche();
	if (i== '`'|| i== '~' ){
		return 0;
	}
	if (i <= '3' && i>='1')
		n = i - '0';
	else{
		gotoxy(90,58);
		printf("Wrong Input! Please Select again");
		showElevels();
	}
	fflush(stdin);
	return n;
}
int showHlevels(){ //Show hard levels
	int n;
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Hard Levels:");
	gotoxy(105, 24);
	printf("1 > Level 1");
	gotoxy(105, 26);
	printf("2 > Level 2");
	gotoxy(20, 58);
	i = getche();
	if (i== '`'|| i== '~' ){
		return 0;
	}
	if (i <= '2' && i>='1')
		n = i - '0';
	else{
		gotoxy(90,58);
		printf("Wrong Input! Please Select again");
		showHlevels();
	}
	fflush(stdin);
	return n;
}
