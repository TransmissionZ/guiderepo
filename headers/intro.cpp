int color(int n){ //Used to generate random colors
    switch (n){
        case 1:
            system("color 0A");
            break;
        case 2:
            system("color 0B");
            break;
        case 3:
            system("color 0C");
            break;
        case 4:
            system("color 0D");
            break;
        case 5:
            system("color 0E");
            break;
        default:
            system("color 0F");
            break;
    }
}
int intro(char* title){ //intro function
    int l=strlen(title);
    int w;
    
    while (w!=-1){
        int n = rand() % 6; //generating random number for color
        gotoxy(100,60);
        printf("Press S to Continue");
        for (int x=0,y=0; x<=25; x++, y++, y++){ //loop for first part
            hidecursor(); //hiding cursor
            color(n); //setting color
            StrToStar(title,l,x,y); //used to print the word with # pattern
 			Sleep(5); //sleep for 5 MS
            ClearScreen(x,y); //clear word
			gotoxy(100,60);
            printf("Press S to Continue"); //to skip intro
            if (kbhit()){
	     		char ch = getch();
				if (ch=='s'){
					return 1;
				}
			}
        }
        n = rand() % 5;
        for (int x=25,y=50; x<=50; x++,y--, y--){ //all other loops are same.
            hidecursor();
            color(n);
            StrToStar(title,l,x,y);
            ClearScreen(x,y);
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=50,y=0; x<=75; x++,y++, y++){
            hidecursor();
            color(n);
            StrToStar(title,l,x,y);
            ClearScreen(x,y);
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=75,y=50; x<=120; x++,y--){
            hidecursor();
        	color(n);

            StrToStar(title,l,x,y);
            ClearScreen(x,y);
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=120, y = 0; x>=0; x--,x--){
            hidecursor();
        	color(n);
            StrToStar(title,l,x,y);
            ClearScreen(x,y);            
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				return 1;
			}
		}
        }
	}	
}

