void aboutus(){
	gotoxy(105,15);                      //now where we want to call  gotoxy function //
	printf("ABOUT US");
	gotoxy(12,19);
	printf("TypeFast is a game that draws inspiration from a game named Type Speed. With roots stemming from the same idea, TypeFast, however, has many distinct features. The game has easy and hard modes.");
	gotoxy(12,21);
	printf("Each mode of the game has levels. The difficulty of the game increases with levels and modes. The game is designed to test the player's typing speed. This game was developed by us for the purpose");
	gotoxy(12, 23);
	printf("of our semester project of Programming Fundamentals. We wanted to take up something challenging and bring something new to the table; different from management systems. In order to write a code,");
	gotoxy(12,25);
	printf("for this game, we employed various libraries of C. We made use of almost concepts of C language, including, but not limited to, recursion, structures, switch, loops, pointers. The game took around");
	gotoxy(12,27);
	printf("3 weeks to be completed. The code has come up to around 600 lines, with being divided into various function header files. We hope you will enjoy the game as much as enjoyed coding it.");
	gotoxy(70, 50);
	printf("Project is designed and produced by: ");
	gotoxy(74, 51);
	printf("- Muhammad Haroon");
	gotoxy(74, 52);
	printf("- Sameer Khan");
	gotoxy(74, 53);
	printf("- Hermain Qadir");
	char i;
	i = getche();
	if (i== '`'|| i== '~' ){
		ClearGame();
		mainmenu();
	}
}
