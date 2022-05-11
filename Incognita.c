#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#define N 15

struct Jugador{
	char nombre[N];
	int puntuacion;
	int tiempo_total;
	int interrogatorio_actual;
};

void divisor();
void bannerMatriz();
void tutorial();
double start_time();
int end_time(double begin);
int inicio_historia();
int validar_respuesta(int interrogatorio, char respuesta[]);


void despliegue_preguntas(int interrogatorio){
	
	switch(interrogatorio){
		case 1:
			
			printf("\n\n ----> El primer interrogatorio sera a la actriz protagonista, Paula.\n Ella se sienta en frente tuya, con aires de superioridad y un poco de soberbia.\n\n");
	
	/* La información que se debe de obtener es la siguiente: Siempre pensó que Merinu era una competencia, una actriz veterana. Su sueño era ganar el Oscar a la mejor actriz.
	Tenía gran amistad con Luis y estuvo convenciendole de que no hiciese ninguna locura por amor. En el momento del asesinato estaba haciéndose fotos con sus queridos fans. */
			
			
			
		
			break;
		case 2:
			printf("Pregunta 2");
			system("pause");
			
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		
	}

	
}



int main (){

    //bannerMatriz(); // Por ahora no funciona seguir debajo del banner.

    while(1){

    	char opcion_menu, respuesta[N];
    	int i = 0;
    	
    	divisor();
	    printf("\nBienvenidos al MENU del juego INCOGNITA.\n");

    	
    	printf("\nPor favor, escoja una de las siguientes opciones:\n\n'A' - Comenzar el juego.\n'B' - Tabla de puntuaciones.\n'C' - Tutorial.\n'D' - Salir del juego.\n\n");
    	scanf(" %c", &opcion_menu);
    	
    	

    	switch(opcion_menu){
    		
		    case 'A':{
		    	
			   	double hora_inicio;
			    int num_jugadores, cont=1, tiempo_final=0, interrogatorio=1, respuesta_correcta=1, turno;
			    printf("\nComenzando el juego.\n");
			    
			    do{
			    	
				    printf("\nEscoge el numero de jugadores entre 1 y 2: ");
				    scanf("%d", &num_jugadores);	
				    
				    if(num_jugadores<1 || num_jugadores > 2) {
						printf("El numero no es valido.");
					}
			    
				} while(num_jugadores<1 || num_jugadores > 2);
				
				// Aqui tenemos el vector de Jugadores de tipo struct
				struct Jugador jugadores[num_jugadores];
				
				jugadores = {{" ",0,0,0}, {" ",0,0,0}};
			    
			    while(cont <= num_jugadores){
			    	
			    	if(cont==2){
			    		printf("Nombre de jugador %d: ", cont);
			    		scanf(" %[^\n]s", jugadores[1].nombre);
			    		break;
			    		
					} else {
						printf("Nombre de jugador %d: ", cont);
			    		scanf(" %[^\n]s", jugadores[0].nombre);
					}
			    	
					cont++;
				}
				
			
				inicio_historia();
				
				for(i=0;i<num_jugadores;i++){
					
					while(jugadores[i].interrogatorio_actual <=7){
					
						hora_inicio = start_time();
						despliegue_preguntas(interrogatorio);
						
						
						printf("\nRespuesta del jugador: ");
						scanf(" %[^\n]s", &respuesta);
						respuesta_correcta = validar_respuesta(interrogatorio, respuesta);
						
						if(respuesta_correcta == 1){
							
							tiempo_final = end_time(hora_inicio);
							
							jugadores[i].tiempo_total += tiempo_final;
							
							
							jugadores[i].interrogatorio_actual++;
							break;
						
						} else if(respuesta_correcta == 0){
							printf("\n\nRespuesta incorrecta. Intentalo de nuevo\n\n.");
						} else {
							printf("\n\nAlgo ha fallado en la validacion de la respuesta.");
						}
					}
					
					if(i==1){
						i=0;
					}
					
				}
				
				
				
				
				
				
			    
			    
			    // Aqui vendrá pasarle la funcion del rango de puntuaciones y el guardado después en el fichero.txt (1 por jugador)
			    
			    
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
	
	printf("\n");
	system("pause");
	system("cls");
	
	}
	return 0;
}


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

double start_time(){
	
	clock_t begin = clock();
	return begin;
	
}


int end_time(double begin){
	
	clock_t end = clock();
	int time_spent = round((double)(end-begin)/CLOCKS_PER_SEC);
	return time_spent;
	
}

int inicio_historia(){
	
	system("cls");
	printf("\n\n En la ceremonia de los Oscars aparece un cadaver.\n Los inspectores analizan a traves de entrevistas e interrogatorios a los sospechosos las pistas obtenidas.\n La muerta es Merinu, una actriz veterana que protagonizaba una pelicula junto a la actriz del momento, Paula.\n Todo el mundo que participaba en la pelicula sabía que Merinu tenia problemas con mucha gente, con los actores, con los directores de casting e incluso con su pareja, el director.\n Durante la fiesta la vieron agitada, y al final de la noche aparecio muerta en los bastidores del escenario.\n");
	printf("\n Personajes:\n Muerto: Merinu\n\t- Actriz protagonista: Paula (y Merinu). Por el premio a mejor actriz\n\t- Actor protagonista Luis. Enamorado de Sara\n\t- Doble Pablo. Tenia un negocio de blanqueo de dinero y Merinu queria cerrarlo.\n\t- Director Nacho. Tenia un lio con Merinu y Nacho se entera de que ella esta con un director de casting.\n\t- Camara Mario. Merinu le debia dinero por problemas con el juego.\n\t- La sustituta Sara. Envidia sobre la muerta.\n\t- Ayudante de direccion Jose. A Merinu se le subio el ego y no soportaba trabajar con ella.\n\t- Director de casting: Emilio. Merinu le amenazaba con desvelar sus favoritismos y los contratos extraños que mantenía con las actrices mas jovenes.\n\t- Guionista: Irina. Se nego a realizar sus papeles y habia provocado que la despidieran.\n\n");
	system("pause");
	

	
}

// Compara las respuestas en cada entrevista y si coindicien con la correcto nos devolverá un 1 y sino, un 0.

int validar_respuesta(int interrogatorio, char respuesta[]){
	
	int validacion=0;
	char respuesta_correcta[N];
	
	switch(interrogatorio){
		case 1:
			strcpy(respuesta_correcta,"Solucion");
			break;
		case 2:
			strcpy(respuesta_correcta,"Solucion2");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
	
	
	
	if(stricmp(respuesta, respuesta_correcta) == 0){
		validacion = 1; 
		
	} else {
		validacion = 0;
	}
	
	return validacion;
}

