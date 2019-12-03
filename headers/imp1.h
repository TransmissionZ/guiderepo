//ALL MAIN LIBRARIES AND FUNCTION PROTOTYPES ARE DEFINED HERE
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <time.h>
#include <mmsystem.h>

void gotoxy(short x, short y);
int StrToStar(char ptr[],int l, int e, int r);
void fontsize(int a, int b);
void hidecursor();
void full();
void wordsfiling1(char ptr[][13], char *filename);
void ClearScreen(int x,int y);
void Clear1Word(int x, int y);
void ClearHighScore();
void border();
int showElevels();
int showHlevels();
int Elvl3(int *s);
int Elvl2(int *s);
int Elvl1(int *s);
int mainmenu();
int Hlvl1(int *s);
int Hlvl2(int *s);
void ClearTimer();
void wordsfiling1(char ptr[][8], char *filename);
int timer(time_t start, int n);
void help();
void aboutus();
void scoreboard();
int printMm();
int showmodes();

