#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>

void divisor(){

	int i=0, j=0;

	char matriz[3][24]={
	{0,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4},
	{0,2,0,0,7,0,8,0,9,0,10,0, 13, 0,8,0,7,0,11,0,12,0,0,2},
	{0,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6}};

	for(i=0; i<3; i++){
	for(j=0; j<24; j++){
	 if(matriz[i][j]==1) {
	 	printf("%c", 205);
	 }
	 else if(matriz[i][j]==2){
	 	printf("%c", 186);
	 }
	 else if(matriz[i][j]==3) {
	 	printf("%c", 201);
	 } else if(matriz[i][j]==4) {
	 	printf("%c", 187);
	 } else if(matriz[i][j]==5) {
	 	printf("%c", 200);
	 } else if(matriz[i][j]==6) {
	 	printf("%c", 188);
	 } else if(matriz[i][j]==7) {
	 	printf("%c", 73);
	 } else if(matriz[i][j]==8) {
	 	printf("%c", 78);
	 } else if(matriz[i][j]==9) {
	 	printf("%c", 67);
	 } else if(matriz[i][j]==10) {
	 	printf("%c", 224);
	 } else if(matriz[i][j]==11) {
	 	printf("%c", 84);
	 } else if(matriz[i][j]==12) {
	 	printf("%c", 65);
	 } else if(matriz[i][j]==13) {
	 	printf("%c", 71);
	 }	else {
	 	printf("%c", 32);
	 }
}
printf("\n");
}
}

void bannerMatriz(){

	int i=0,j=0;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,4);

	int matriz[20][50] = {
{4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4},
{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
{4,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,2,3,3,1,0,0,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,4},
{4,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,2,1,3,3,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,4},
{4,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,4},
{4,0,0,0,1,1,0,0,1,0,0,0,1,0,0,1,1,0,0,0,1,1,3,3,3,1,1,3,3,1,0,0,0,1,0,1,1,1,0,1,1,1,0,1,0,0,1,0,0,4},
{4,0,0,0,1,1,0,0,1,1,0,0,1,0,1,0,0,1,0,1,0,2,1,3,1,3,3,1,0,1,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,4},
{4,0,0,0,1,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,2,1,3,3,0,0,1,0,1,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,4},
{4,0,0,0,1,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,2,1,3,1,1,0,1,0,1,0,1,0,0,1,0,0,0,1,0,0,1,1,1,1,0,0,4},
{4,0,0,0,1,1,0,0,1,0,0,1,1,0,1,0,0,1,0,1,0,0,1,3,1,3,3,1,0,1,0,0,1,1,0,0,1,0,0,0,1,0,0,1,1,1,1,0,0,4},
{4,0,0,0,1,1,0,0,1,0,0,0,1,0,0,1,1,0,0,0,1,1,3,3,3,1,1,3,3,1,0,0,0,1,0,1,1,1,0,0,1,0,0,1,0,0,1,0,0,4},
{4,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,2,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,4},
{4,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,2,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,4},
{4,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,0,0,2,2,3,3,3,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,4},
{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,0,0,0,0,0,0,0,2,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,0,0,0,0,0,0,0,0,0,2,2,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
{4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4}};

	for(i=0; i<20; i++){
	for(j=0; j<=50; j++){
	 if(matriz[i][j]==1) {
	 	printf("%c", 219);
	 	SetConsoleTextAttribute(hConsole, 15);
	 }
	 else if(matriz[i][j]==2){
	 	printf("%c", 219);
	 	SetConsoleTextAttribute(hConsole,12);
	 }
	 else if(matriz[i][j]==3) {
	 	printf("%c", 219);
	 	SetConsoleTextAttribute(hConsole, 4);
	 } else if(matriz[i][j]==4) {
	 	printf("%c", 219);
	 	SetConsoleTextAttribute(hConsole, 4);
	 }
	 else {
	 	printf("%c", 219);
	 	SetConsoleTextAttribute(hConsole, 0);
	 }
}
	printf("\n");
}

getch();

}

void tutorial(){
	
	divisor();

	printf("\n Historia inicial:\n");
	printf("\n En la ceremonia de los Oscars aparece un cadaver.\n");
    printf(" La muerta se trata de Merinu, una actriz veterana que protagonizaba una pelicula junto a la actriz del momento, Paula.\n");
    printf(" Todo el mundo que participaba en la pelicula sabia que Merinu tenía problemas con mucha gente, con actores, con directores de casting e incluso con su pareja, el director.\n");
    printf(" Durante la fiesta la vieron agitada, y al final de la noche aparecio muerta en los bastidores del escenario.\n\n");
    printf(" %c Los inspectores se encargaran de analizar a traves de entrevistas  e interrogatorios a los sospechosos las pistas obtenidas a partir de estas.\n",196);
	printf(" %c Se necesita papel y un boligrafo o lapicero para formalizar las pistas e ir resolviendo los acertijos.\n",196);
	printf(" %c Gracias a tu trabajo, podremos alcanzar y cerrar al asesino.\n",196);
	printf(" %c Cabe la posibilidad de que existan dos jugadores en el propio juego, lo que añade una competicion extra por ver quién resuelve los acertijos mas rapidamente.\n",196);
	printf(" %c La puntuacion se basara en la rapidez de conseguir atrapar al asesino.\n\n %cEstas listo?\n\n", 196, 168);

	while(1){

		char estas_preparado[3], si[3]="si"; 
		scanf(" %s",&estas_preparado); 
		
		printf("%s", estas_preparado);

		if (0 == stricmp(si,estas_preparado)){
			printf("\nMucha suerte en su busqueda, inspector.");
			break;
		} else{
			printf("\nNecesitamos a alguien con tiempo, valor y dedicacion. Le volvemos a repetir la pregunta: %cEstas preparado?",168);
			printf("\nTeclea la palabra si (sin tilde) de ser asi.\n\n");
		}
}
}

int main (){

    //bannerMatriz(); // Por ahora no funciona seguir debajo del banner.

    divisor();

	printf("\nBienvenidos al MENU del juego INCOGNITA.\n");

    while(1){

    	char opcion_menu;
    	printf("\nPor favor, escoja una de las siguientes opciones:\n\n'A' - Comenzar el juego.\n'B' - Tabla de puntuaciones.\n'C' - Tutorial.\n'D' - Salir del juego.\n\n");
    	scanf(" %c", &opcion_menu);

    	switch(opcion_menu){
		    case 'A':{
			    printf("\nComenzando el juego.\n");
		    	break;
		}
		    case 'B':{
	    		printf("\nEntrando a la tabla de puntuaciones.\n");
	    		break;
		}
	    	case 'C':{
		    	printf("\nEntrando en el tutorial.\n");
		    	tutorial();
		    	break;
		}
	    	case 'D':{
		    	printf("\n  Saliendo del juego...\n\n");
		    	divisor();
		    	exit (0);
		}
		    default: {
		    	printf("\nLa letra introducida es erronea para el programa.\nRevise que se encuentren activadas las letras en mayuscula.\n");
		    	break;
		}
	}
	}
	return 0;
}
