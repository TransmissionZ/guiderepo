void scoreboard(){ //Function to display scoreboard
	FILE *fp = fopen("G:/My Drive/FAST!!/1st Semester/Assignments/Programming Fundamentals/Final Project/Haroon/headers/Saved/score.dat", "r");
	struct player p, hp;
	int highscore = 0, hlvl;
	char hname[20];
	if (fp == NULL){
		gotoxy(30,30);
		printf("ERROR OPENING FILE, PLEASE DIE");
		exit(1);
	}
	gotoxy(13,8);
	printf("Name\t\tLast Score\tLast Level Played"); //headings
	const int x = 13;
	int y = 9;
	while(fread(&p, sizeof(struct player), 1, fp)){ //loop to read data
		gotoxy(x,y);
		printf("%s\t\t%d\t\t%d", p.name, p.score, p.maxlevel);
		y++;
		if (p.score > highscore){
			highscore = p.score;
			hp = p;
		}
	}
	rewind(fp);
	if (fread(&p, sizeof(struct player), 1, fp) == 0){
		hp.score = 0;
		strcpy(hp.name, "none");
		hp.maxlevel = 0;
	}
	
	gotoxy(90, 37);
	printf("Highest Scorer: %s", hp.name);
	gotoxy(90, 38);
	printf("Highest Score: %d", hp.score);
	gotoxy(90,39);
	printf("Highest Scorer's last level: %d", hp.maxlevel);
	
	fclose(fp);
	char i;
	i = getche();
	if (i== '`'|| i== '~' ){
		ClearGame();
		mainmenu();
	}
}
