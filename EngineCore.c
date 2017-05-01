
#include <windows.h>
#include <stdio.h>
#include <unistd.h>
#include "bool.c"

int EngineCoreGlobalFPS = 30;

void gotoxy(int coluna, int linha) {
	COORD point;
	point.X = coluna; point.Y = linha;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}

char getKeyPressed(){
	char keyPressed;
	
	keyPressed = ' ';
	
	if(kbhit()){
		keyPressed = getch(stdin);
	}
	
	return keyPressed;
}

void waitNextFrame(){
	usleep(999000 / EngineCoreGlobalFPS);
}
