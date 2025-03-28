#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void stampaA ();
void stampaB ();
void stampaC ();
int main () {
	for(int i = 0; i<5; i++){
		stampaA();
		stampaB();
		stampaC();
		printf("\n");
	}
	return 0;
}
void stampaA (){
	printf("A ");
}
void stampaB (){
	printf("B ");
}
void stampaC (){
	printf("C ");
}
