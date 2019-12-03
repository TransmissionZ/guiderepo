void wordsfiling1(char ptr[][13], char *filename){ //to store words in array
	char name[] = ("G:/My Drive/FAST!!/1st Semester/Assignments/Programming Fundamentals/Final Project/Haroon/headers/words/");
	strcat(name, filename);
	FILE *fp = fopen(name, "r");
	if (fp == NULL){
		gotoxy(15,15);
		printf("File Not Opened, Restart Game!");
		return;
	}
	int i = 0;
	while(fscanf(fp, "%s", ptr[i]) == 1){
		i++;
	}
	fclose(fp);
	fflush(stdin);
}
