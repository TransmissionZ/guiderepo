struct player{ //setting up a struct 
	char name[15];
	int score;
	int maxlevel;
};
struct player gethighestscore(){ //function to get highscore
	struct player a[100], hp;
	int highscore = 0, Hindex;
	int i = 0;
	FILE *fp = fopen("G:/My Drive/FAST!!/1st Semester/Assignments/Programming Fundamentals/Final Project/Haroon/headers/Saved/score.dat", "r");	
	if (fp == NULL){
		printf("NO SAVED FILE, PLEASE CONTACT US");
		exit(1);
	}
	while(fread(&a[i], sizeof(struct player), 1, fp)){ //loop to read data
		if (a[i].score > highscore){
			highscore = a[i].score;
			hp = a[i];
		}
		i++;
	}
	rewind(fp);
	if (fread(&a[0], sizeof(struct player), 1, fp) == 0){
		hp.score = 0;
		strcpy(hp.name, "none");
		hp.maxlevel = 0;
	}
	fclose(fp);
	return hp;
}
void updatescore(struct player p){ //funtion to update player's score
	gotoxy(50,50);
	FILE *fp = fopen("G:/My Drive/FAST!!/1st Semester/Assignments/Programming Fundamentals/Final Project/Haroon/headers/Saved/score.dat", "a+");
	if (fp == NULL){
		printf("ERROR OPENING FILE, PLEASE DIE");
		exit(1);
	}
	fwrite(&p, sizeof(struct player), 1, fp);
	
	fclose(fp);
}
int mainmenu(){
	int option, level, level2, concept, score = 0, l1, l2, l3, l4,l5;
	struct player p, hp;
	char ch;
	ClearHighScore();
	hp = gethighestscore(); //getting highscore and storing in hp
	gotoxy(10,4);
	printf("On Top: Player %s at Level %d with Score -> %d", hp.name, hp.maxlevel, hp.score);
	option = printMm(); //Printing mainmeny defined in another.cpp file
	ClearGame();
	switch (option){
		case 96: //96 is the ascii code of character '`'
			return 0;
		case 1:
			gotoxy(90, 25);
			printf("Enter your precious name to continue!");
			gotoxy(20,58);
			scanf("%[^\n]s", &p.name);
			fflush(stdin); //clearing input buffer
			
			ClearGame();
			ClearWord(20,58);
			concept = showmodes(); //showing modes based on options
			switch (concept){
				case 1:
					level = showElevels();
					ClearGame();
					fflush(stdin);
					switch (level){
						case 1:
							l1 = Elvl1(&score);
							p.maxlevel = 1;
							if (l1 != 2)
								break;
						case 2:
							l2 = Elvl2(&score);
							p.maxlevel = 2;
							if (l2 != 3){
								break;	
							}
						case 3:
							l3 = Elvl3(&score);
							p.maxlevel = 3;
							if (l3 != 3)
								break;
					}
					if (l3 != 3)	
						break;
				case 2:
					if (l3 != 3)
						level2 = showHlevels();
					ClearGame();
					if (level2 == 1 || l3 == 3){
						l4 = Hlvl1(&score);
						p.maxlevel = 4;
						if (l4 != 3)
							break;
					}
					if (level2 == 2 || l4 == 3){
						l5 = Hlvl2(&score);
						p.maxlevel = 5;
					}
					break;
					
			}
			p.score = score;
			updatescore(p);
			if (l1 == 0 || l2 == 0 || l3==0 || l4 == 0 || l5 == 0)	
				mainmenu();
			break;
		case 2:
			scoreboard();
			break;
		case 3:
			help();
			ch = getch();
			break;
		case 4:
			aboutus();
			break;
	}
	return 0;
}
