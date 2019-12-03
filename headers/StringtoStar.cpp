int StrToStar(char ptr[],int l, int e, int r){ //Function to print Words with #pattern
	int x = e;
	int y = r;
	gotoxy(x,y);
	for (int n; n<= l;n++){

		switch (ptr[n]){
			case 'T': //printing letters dynamically using x and y.
				for (int j=x;j<=x+17;j++){
					gotoxy(j,y);
					printf("#");
					j++;
				}
				for (int j = y+1; j<=y+9; j++){
					gotoxy(x+8,j);
					printf("#");
				}
				x = x + 15;
				y=y;
				break;
			case 'y':
				y += 2;
				for (int i = x, j = y; j<=y+4; i++,j++){
					gotoxy(i,j);
					printf("#");
				}
				for (int i = x+5,j=y+3; j!=y-1; i++,j--){
					gotoxy(i,j);
					printf("#");
				}
				for (int j = y+5; j<=y+7;j++){
					gotoxy(x+4, j);
					printf("#");
				}
				x = x + 12;
				break;
			case 'p':
				for (int j = y+1; j<=y+7; j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i = x; i<=x+8; i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int j = y+1; j<=y+3;j++){
					gotoxy(x+10, j);
					printf("#");
				}
				for (int i = x+8; i>=x+1; i--){
					gotoxy(i,y+4);
					printf("#");
					i--;
				}
				x = x + 13;
				break;
			case 'e':
				for (int j=y;j<=y+7;j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i=x;i<=x+8;i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int i=x;i<=x+8;i++){
					gotoxy(i,y+3);
					printf("#");
					i++;
				}
				for (int i=x;i<=x+8;i++){
					gotoxy(i,y+7);
					printf("#");
					i++;
				}
				x = x + 12;
				y=y;
				break;
			case 'F':
				y -= 2;
				for (int j=y; j<=y+9 ; j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int i=x+2;i<=x+10;i++){
					gotoxy(i,y+4);
					printf("#");
					i++;
				}
				x += 10;
				break;
			case 'a':
				y += 2;
				for (int i=x, j=y+7; j>=y; i++,j--){
					gotoxy(i,j);
					printf("#");
				}
				for (int i=x+7, j=y; j<=y+7; i++,j++){
					gotoxy(i,j);
					printf("#");
				}
				for (int i = x+2; i<=x+11;i++){
					gotoxy(i, y+5);
					printf("#");
					i++;
				}
				x += 18;
				y=y;
				break;
			case 's':
				for (int z = x; z<=x+8; z++){
					gotoxy(z,y);
					printf("#");
					z++;
				}
				for (int j=y; j<=y+4; j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i = x; i<=x+8; i++){
					gotoxy(i,y+4);
					printf("#");
					i++;
				}
				for (int j=y+4; j<=y+7; j++){
					gotoxy(x+8,j);
					printf("#");
				}
				for (int i = x; i<=x+8; i++){
					gotoxy(i,y+7);
					printf("#");
					i++;
				}
				x += 12;
				y=y;
				break;
			case 't':
				for (int j=x;j<=x+12;j++){
					gotoxy(j,y);
					printf("#");
					j++;
				}
				for (int j = y+1; j<=y+7; j++){
					gotoxy(x+6,j);
					printf("#");
				}
				x+=15;
				break;
			default:
				return 0;
		}
	}
	getch();
}
