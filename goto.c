#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x,int y){
	COORD coordinate={x,y};
	HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(console,coordinate);
}


int main() {
  char myText[] = "Hello";
  printf("%s", myText);
	gotoxy(5,6);

 
  return 0;
}
