#include "EngineCore.c"

int main(){
	bool runningGameLoop;
	runningGameLoop = true;
		
	while(runningGameLoop == true){	
		
		// renderização
		gotoxy(5,5);
		printf("%c", 219);
		printf("%c", 219);
		gotoxy(5,6);
		printf("%c", 219);
		printf("%c", 219);
		
		gotoxy(0, 0);
	 	waitNextFrame();
	}	
}
