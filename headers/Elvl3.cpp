int Elvl3(int *s){
	char words[25][13];
	wordsfiling1(words, (char *)"level3.txt");
	time_t start;
	int j = 0, oldscore = 0;
	char ch;
	int d, z = 0, l, l2, t, i1, k1;
	int i,k, u = 1;
	char typed[10] = "";
	start = clock();
	//while (j != 24 || u!= 24){
		//z = 0;
	l = strlen(words[j]);
	l2 = strlen(words[u]);
	for (i=0, k=0, i1 = 0, k1= 0; ((i<50) && (i1<50));i++,k++,k++,i1++,k1++,k1++){
		if (j >= 25 || u >= 25)
			break;
		t = timer(start, 60);
		if (t==1)
			break;
		
		gotoxy(11+k, 6+i);
		puts(words[j]);
		gotoxy(100+k1, 6+i1);
		puts(words[u]);
		Sleep(200);
		ClearWord(11 + k, 6+i);		
		Clear1Word(100 + k1, 6+i1);
		
		if (kbhit()){
			gotoxy(20+z,58);
     		ch = getche();
     		if (ch == '`')
     			return 0;
     		if (words[j][z] == ch || words[u][z] == ch){
				typed[z] = ch;
				z++;
			}
			else{
				//asked to re-write in case a letter is input wrong
				gotoxy(80,58);
				printf("WRONG LETTER! ENTER WHOLE WORD AGAIN!");
				z=0;
				memset(typed, 0, sizeof(typed));
				ClearWord(20, 58);
				Beep(900,200);
			}
		}
		if (z == l || z == l2){
			if ((strcmp(typed,words[j]) == 0)){ //word type by user is compaired with the word in the file
				ClearWord(80,58);
				ClearWord(100,58);
				ClearWord(120, 58);
				
				gotoxy(100,58);
				printf("Correct!");
				
				if (j < u){
					j = u + 1;
				}
				else if (j > u){
					j++;
				}

				l = strlen(words[j]);
				(*s)++;
				oldscore++;
				//typed[0] = '\0';
				memset(typed, 0, sizeof(typed));
				
				z = 0;
				ClearWord(11+k, 6+i);
				ClearWord(20,58);
				Beep(300, 200);
				i = 0;
				k = 0;
			}
			else if (strcmp(typed,words[u]) == 0){
				ClearWord(80,58);
				ClearWord(100,58);
				ClearWord(120, 58);
			
				gotoxy(100,58);
				printf("Correct!");
				if (u<j){
					u = j + 1;
				}
				else if (u > j){
					u++;
				}
				
				l2 = strlen(words[u]);
				(*s)++;
				oldscore++;
				memset(typed, 0, sizeof(typed));
				z = 0;
				Clear1Word(100+k1, 6+i1);
				ClearWord(20,58);
				Beep(300, 200);
				i1 = 0;
				k1 = 0;
				
			}
			
		}
		if (i >= 49 || i1 >= 49){
			gotoxy(90,30);
			printf("LEVEL 3 FAILED");
			gotoxy(100,31);
			printf("Retry? (1/0)");
			Beep(900,900);
			d = getch();
			d = d-'0';
			ClearGame();
			if (d==1){
				*s -= oldscore; //Reverting score
				Elvl3(s);
			}
			else{
				return 0;
			}
		}
	}
	//	if (t == 1)
	//		break;
	//}
	if (j >= 24 || j >= 24){
		gotoxy(100,31);
		printf("Congrats!");
		gotoxy(100,32);
		printf("LEVEL 3 COMPLETED!");
		gotoxy(100,33);
		printf("Moving to hard level 1......");
		Beep(500,900);
		Sleep(10000);
		ClearGame();
		//Hlvl1(s);
		return 3;
	}
	else{
		gotoxy(100,30);
		printf("LEVEL 3 FAILED");
		gotoxy(100,31);
		printf("Retry? (1/0)");
		Beep(900,900);
		d = getch();
		d = d-'0';
		ClearGame();
		if (d==1){
			*s -= oldscore;
			Elvl3(s);
		}
		else{
			return 0;
		}
	}
}
