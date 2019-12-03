void help(){
	gotoxy(105,15);                      //now where we want to call  gotoxy function //
	printf("HOW TO HELP.");
	gotoxy(15,17);
	printf("You will be given limited time to play each level. The timer starts as soon as the game begins.");
	gotoxy(15,19);
	printf("If you do not finish the level on time, you will fail to score.");
	gotoxy(15,21);
	printf("The words will begin to appear from the top left corner of your screen when the game starts.");
	gotoxy(15,23);
	printf("Type the word as soon as it appears. Make sure the capslock of your keyboard is turned off before you begin playing.");
	gotoxy(15,25);
	printf("You will score for the word only if you manage to type before it hits the green boundary at the bottom of the screen.");
	gotoxy(15,27);
	printf("In higher levels, two words will appear on the screen simultanouesly. Make sure you pay enough attention to both.");
	gotoxy(15,29);
	printf("Do not be in hurry to type. First read the word correctly, and then type it.");
	gotoxy(15,31);
	printf("If you enter the first letter wrong, you will get a warning and another try.");
	gotoxy(15,33);
	printf("Good luck!");
	char i;
	i = getche();
	if (i== '`'|| i== '~' ){
		ClearGame();
		mainmenu();
	}
}
