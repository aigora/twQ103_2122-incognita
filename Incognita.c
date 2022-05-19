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
int rango_puntuacion(int tiempo);
void guardar_en_fichero(char nombre[], int tiempo_final, int puntuacion);
void consultar_puntuaciones();


void despliegue_preguntas(int interrogatorio){

	switch(interrogatorio){
		case 1:{

			printf("\n\n ----> El primer interrogatorio sera a la actriz protagonista, Paula.\n Ella se sienta en frente tuya, con aires de superioridad y un poco de soberbia.\n\n");
			printf("PAULA: Supongo que soy la primera persona a la que pensaron en interrogar despues de lo ocurrido...\n");
			printf("INSPECTOR: Dime, %ccomo era la relacion que tenias con Merinu?\n", 168);
			printf("PAULA: Todo el mundo pensaria que la odiaba. En el fondo razones no me quedaban: era mi principal rival frente al gran premio. Mi mayor deseo siempre fue luchar por ganarlo pero no pudo ser por sus apariencias y nivel. Creo que me lo merecia mas yo, no han sido justos del todo.\n");
			printf("INSPECTOR: Se mas concreta con la pregunta descrita, por favor.\n");
			printf("PAULA: No eramos buenas compañeras. Ella sabia que podria ganarla con pocos esfuerzos si me hubiesen entregado mas lineas en el guion de la pelicula. En fin, simplemente parecia mostrarme toda su fama con el objetivo de desestabilizarme emocionalmente.\n");
			printf("INSPECTOR: En el momento del asesinato, %cdonde se encontraba usted?\n", 168);
			printf("PAULA: Me encontraba justamente posando con mis queridos fans para que tuvieran un bonito recuerdo de esa noche. Lastima que todo se torciera gracias a ella.\n\n*Paula respira progundo*\n\n");
			printf("PAULA: Mire, no quiero sonar borde pero nunca podria haber llegado a hacer algo asi. Me duele pensar que posiblemente mi amigo Luis pudiera estar detras de todo esto.\n");
			printf("INSPECTOR: %cPor que piensas eso?\n", 168);
			printf("PAULA: Se de sobra que el nunca podria haberle hecho daño a Merinu, porque el tiene un buen corazon. Suelo ser su hombro siempre que me necesita. En esta ultima pelicula, el se canso de ver a su amada perder el papel principal por la existencia de Merinu.\n");
			printf("INSPECTOR: %cQuiere decir que le acusa de poder haber cometido el crimen?\n", 168);
			printf("PAULA: %cPor supuesto que no! Se de sobra que Luis seria incapaz de hacerle daño ni a una mosca. Somos muy buenos amigos y conozco cada detalle de el. Nunca pensaria algo asi de mi buen amigo.\n", 173);
			printf("INSPECTOR: Entonces, por que estas hablando tanto de el.\n\n*Paula suspira nuevamente profundo, se la nota preocupada*\n\n");
			printf("PAULA: El queria planear algun tipo de saboteamiento para esa noche. Yo tuve que convencerle de que no merecia hacer ninguna locura por amor, menos en nuestras circustancias. Como actores reconocidos mundialmente no podiamos arriesgar nuestra carrera por cometer estupideces.\n");
			printf("INSPECTOR: %cSabes si logro su cometido?\n", 168);
			printf("PAULA: Me hubiese encantado cerciorarme de su integridad en todo momento, pero mis fans me reclamaban y no podia estar pendiente de el en todo momento. Aun asi, seria imposible que lograse nada. Empezo por la tarde a beber y no creo que andase en sus mejores condiciones.\n");
			printf("INSPECTOR: Claramente, esto muestra indicios de que el podria haber sido el asesino. Dime, %cdeberia de contarme algo mas?\n", 168);
			printf("PAULA: No sea suspicaz, pare de pensar de ese modo. Nunca le hubiese nombrado su nombre ni estos detalles si hubiese sabido que le asemejarias a la figura de un asesino. Usted no tiene escrupulos.\n");
			printf("INSPECTOR: Solamente me limito a preguntar y recaudar respuestas, señorita. No pretendo dañar la imagen de ninguno de vosotros.\n");
			printf("PAULA: Espero que sea asi. Por el momento, no quiero añadir nada mas.\n");
			printf("INSPECTOR: Gracias por su colaboracion, Paula.\n\n*Paula se levanta, mirandote fijamente con tono amenazante, enfadada por tus ultimos comentarios del interrogatorio.");
			printf("\n\n ----> Fin del primer interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta: %cCual es el nombre del amigo del que estaba hablando Paula?\t", 168);

	/* La información que se debe de obtener es la siguiente: Siempre pensó que Merinu era una competencia, una actriz veterana. Su sueño era ganar el Oscar a la mejor actriz.
	Tenía gran amistad con Luis y estuvo convenciendole de que no hiciese ninguna locura por amor. En el momento del asesinato estaba haciéndose fotos con sus queridos fans. */

			break;
		}
		case 2:{

			printf("\n ----> El segundo interrogatorio sera a el actor protagonista, Luis.\n Se sienta mostrando indicios de desconfianza analizando su comunicación no-verbal.\n\n");
			printf("INSPECTOR: Creo que no son las mejores circustancias para conoceros, pero acomodese.\n");
			printf("LUIS: Directamente, dire que no me fio ni de mi propia sombra. Ha sido una semana muy dura desde que ocurrio el asesinato. Todo el odio que ha caido sobre mi no tiene precio.\n");
			printf("INSPECTOR: %cHa sido usted amenazado de algun modo por alguien?\n", 168);
			printf("LUIS: Los medios y las redes sociales. Un continuo ciclo en donde no se llega a ninguna conclusion mas que la circulacion de bulos.\n");
			printf("INSPECTOR: Siento que se hayan cebado con usted. Pero mi trabajo ahora mismo es investigar sobre el asesinato, asi que debo de preguntarle acerca de su paradero en el momento de este.");
			printf("LUIS: Antes de que ocurriera todo, yo...\n\n*Luis se avergüenza*\n\nme emborrache a niveles que nunca me habia encontrado. Era un dia de celebrar y tenia motivos para estar contento, mas alla del desprestigio que Merinu otorgaba a Sara...");
			printf("INSPECTOR: Por eso ultimo usted decidio prenderle una trampa a Merinu, %cverdad?\n\n*Luis se sorprende*\n\n", 168);
			printf("LUIS:&cQue?%cQue le hace a usted pensar en ese acto?\n", 168);
			printf("INSPECTOR: Los indicios muestran que usted tenia planeado causar algun tipo de saboteamiento a la victima por el rencor que le guardaba por <<robarle>> el papel principal a Sara\n");
			printf("LUIS: En una mera estupidez se quedo. %cEstuvo usted viendo las circunstancias? Habia momentos en el que no lograba ni sostenerme en pie.\n", 168);
			printf("INSPECTOR: %cNo logro cometer su plan?\n", 168);
			printf("LUIS: Por Dios, no. Tampoco se crea que mi idea era matarla. En un principio, unicamente queria estropear su momento de gloria. Un imprevisto de ultima hora como una rotura en su vestuario, una caida tonta o la desaparicion de su maquillaje favorito.\n\n*Continuas prestando atencion*\n\n");
			printf("LUIS: Pero en ningun momento pense en matarla. Involucre a Sara en esto ultimo, pero finalmente decidi pararla los pies para no ser descubiertos y dañar nuestra imagen, ademas de que yo tenia otros objetivos para esa noche...\n");
			printf("INSPECTOR: %cDe que objetivos esta hablando?\n",168);
			printf("LUIS: Queria declararme a Sara esa noche, y asi fue. La vi saliendo del bastidor de Merinu, me asegure que no hiciese nada dentro. Le agarre de malas formas por mi borrachera con el objetivo de declararme,...\n");
			printf("INSPECTOR: Continue, por favor.\n");
			printf("LUIS: Me rechazo. Al momento, se preocupo mas por mi salud fisica que por lo que estaba declarando. Creo que se penso que iba tan ebrio que no sabia ni lo que decia. Pero era totalmente sincero...\n");
			printf("INSPECTOR: Mmm. %cComo puede asegurarse de que ella no realizo ninguna actividad el tiempo que estuvo dentro del bastidor?\n",168);
			printf("LUIS: Seguramente estuviera con las maquilladoras. Tienen muy buena relacion con ella y probablemente ellas estuvieran en el interior de este en ese momento.\n");
			printf("INSPECTOR: Perfecto. Tendre que llamarla a declarar. Necesito conocer su punto de vista de la situacion.\n");
			printf("LUIS: No piense nada malo de ella. Me salvo de una gorda, al hacerme desaparecer del escenario antes de cometer algun tipo de bochorno frente a las camaras.\n");
			printf("INSPECTOR: Mi trabajo se basa en analizar todas las posibles pistas que me puedan ayudar a resolver el crimen. Dime, %cquiere añadir algo mas a su declaracion?\n",168);
			printf("LUIS: Por ahora nada...\n");
			printf("\n\n\n*Luis parece bastante confundido...*\n\n"); // Falta: No se acuerda de mucho pero recuerda ver a Nacho discutiendo con Merinu al principio de la fiesta.
			system("pause");
			system("cls");
			printf("\nIntenta recordar la solucion de la siguiente pregunta:");
			/* La información que se debe obtener es la siguiente: Odiaba a Merinu por robarle el papel principal a su amor platónico, Sara.
			 Se emborrachó porque se quería declarar a Sara esa noche. No se acuerda de mucho pero recuerda ver a Nacho discutiendo con Merinu al principio de la fiesta.*/
			break;

		}
		case 3:{

			printf("\n ----> El tercer interrogatorio sera a el doble, Pablo.\n\t Parece que el mundo se le ha torcido con su mirada. Has sido informado de que ha comenzado a ir a terapia.\n\n");
			printf("INSPECTOR: Buenos dias, Pablo. Hoy mi trabajo sera hacerle una serie de preguntas para que me puedas ayudar en la mayor forma posible.\n");
			printf("PABLO: ...\n");
			printf("INSPECTOR: Acomodese. No pretendo causar ningun estrago a su vida. Unicamente quiero que me ayudes por Merinu.\n");
			printf("PABLO: No mencione su nombre. ¡No la conocia!\n");
			printf("INSPECTOR: Perdoneme.\n");
			printf("PABLO: Nadie deberia de hablar de ella... Era quien mas la conocia... Ni si quiera el director...\n");
			printf("INSPECTOR: %cNacho?\n", 168);
			printf("PABLO: Hizo que la perdiera. Me hizo perderla. Ya no la tengo mas en mi vida, todo por su culpa.\n");
			printf("INSPECTOR: Se mas descriptivo acerca de el, %cpor que le has mencionado?\n", 168);
			printf("PABLO: Me dio mucha rabia verle, rodeandola con sus brazos, sin apenas saber cada uno de sus pensamientos. Ni sus gustos mas profundos, ni sus aspiraciones en la vida, ni los proyectos que pensaba en comenzar fuera del mundo del cine, ... ni si quiera lo que le gusta hacer en la cama.\n");
			printf("INSPECTOR: Durante las ocasiones que tuvisteis de encuentro Merinu y tu, %cle contaba ella acerca de la relacion que mantenia con su esposo?\n", 168);
			printf("PABLO: Ella siempre se quejaba del estado de la relacion que mantenian. Discutian casi diariamente y realmente no se querian, era todo paripe.");
			printf("INSPECTOR: %cUna vez que aparecio Nacho, que hizo Vd.?\n", 168);
			printf("PABLO: Volvi a ver mi mundo caer... Mire, Merinu y yo tuvimos una charla profunda donde me dejo claro las intenciones de dejarlo con el director.\n");
			printf("PABLO: \n");
			printf("\n");

			/* Información a obtener: Tenía una aventura con Merinu y tuvo que encerrarse un momento en el baño porque le había dolido mucho verle junto al director, su pareja.
			 Cuando iba a hablar con ella se encontró con los ayudantes de la dirección y unos periodistas que le bombardearon a preguntas.*/

			break;
		}

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
                char respuesta_extra[20];
			    int num_jugadores=0, cont=1, tiempo_final=0, respuesta_correcta=1, bandera=0, terminado=0, ganador=-1, perdedor=-1;
			    printf("\nComenzando el juego.\n");

			    do{

				    printf("\nEscoge el numero de jugadores entre 1 y 2: ");
				    scanf("%d", &num_jugadores);

				    if(num_jugadores<1 || num_jugadores > 2) {
						printf("El numero no es valido.");
					}

				} while(num_jugadores<1 || num_jugadores > 2);

				// Aqui tenemos el vector de Jugadores de tipo struct
				struct Jugador jugadores[2] = {{" ",0,0,1}, {" ",0,0,1}};

			    while(cont <= num_jugadores){

			    	if(cont==2){
			    		printf("\nNombre de jugador %d: ", cont);
			    		scanf(" %[^\n]s", jugadores[1].nombre);
			    		break;

					} else {
						printf("\nNombre de jugador %d: ", cont);
			    		scanf(" %[^\n]s", jugadores[0].nombre);
					}

					cont++;
				}


				inicio_historia();
                i=0;

				while(terminado < 2){

                    int tiempo_final=0;


                    if(jugadores[i].interrogatorio_actual <= 7 && ganador != i){


						system("cls");
                        printf("\n\n\n---- Turno de jugador %s ----", jugadores[i].nombre);
                        printf("\n\t----Pregunta %d----\n\n\n", jugadores[i].interrogatorio_actual);
                        system("pause");

						hora_inicio = start_time();
						despliegue_preguntas(jugadores[i].interrogatorio_actual);

						// ¿Funcionará? !!!

						if(jugadores[i].interrogatorio_actual == 2){

							char la_letra_correcta = 'B', respuesta_de_letra;

							while(bandera == 0){
                                system("cls");

								printf("\n%cCon quien tenia buena relacion Sara?\n\n'A'- Con Merinu.\n'B'- Con las maquilladoras.\n'C'- Con Paula.\n'D'- Con los guionistas secundarios.\n\n",168);
								scanf("%c",&respuesta_de_letra);

								if(respuesta_de_letra == la_letra_correcta){
									printf("\nLUIS: Creo recordar algo ultimo; espere.");
									printf("\nINSPECTOR: %cRecuerda algo mas de esa noche?",168);
									printf("\nLUIS: Nacho... Si, Nacho...\n\n*Nacho...%cquien era Nacho?*\n", 168);
									printf("\nLUIS: No recuerdo mucho pero le vi discutiendo con Merinu al principio de la fiesta. Tuvieron una discusion bastante fuerte que logro llamarme la atencion, pero tan pronto como quise enterarme ya desaparecieron ambos.");
									printf("\nINSPECTOR: Muchisimas gracias por toda la informacion, Luis. Has sido de gran ayuda.\n");
									system("pause");
									system("cls");
									printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta: %cque trabajo posee Nacho en la obra?\t(Escriba una unica palabra)", 168);
									bandera = 1;
								}else{
									printf("\n\nRespuesta incorrecta. Vuelva a intentarlo.\n");
									bandera=0;
								}
							}

						}


						printf("\n\nRespuesta del jugador: ");
						scanf(" %[^\n]s", &respuesta);

						respuesta_correcta = validar_respuesta(jugadores[i].interrogatorio_actual, respuesta);

						if(respuesta_correcta == 1){

                            printf("\nRespuesta correcta!\n\n");
                            system("pause");
							system("cls");

							tiempo_final = end_time(hora_inicio);
							jugadores[i].tiempo_total += tiempo_final;


							if(jugadores[i].interrogatorio_actual == 7){

                                printf("\nJugador %d ha finalizado.", i);
                                jugadores[i].puntuacion = rango_puntuacion(jugadores[i].tiempo_total);
                                printf("\n -----> Puntos: %d\n\n", jugadores[i].puntuacion);

                                guardar_en_fichero(jugadores[i].nombre, jugadores[i].tiempo_total, jugadores[i].puntuacion);

                                terminado++;
                                ganador = i;

                                if(ganador == 0){
                                    perdedor = 1;
                                } else{
                                    perdedor = 0;
                                }

                                printf("\nGanador: %d\n\n", ganador);

                            } else if(jugadores[i].interrogatorio_actual < 7){

                                jugadores[i].interrogatorio_actual += 1;
                                //printf("\nJugador %d -> siguiente interrogatorio numero: %d\n\n", i, jugadores[i].interrogatorio);

                            }

                        } else {
                            printf("Respuesta incorrecta. Intentalo de nuevo mas tarde\n");
                        } // FINAL VALIDACION


                } // IF TOCHO

                //printf("Tiempo acumulado de jugador %d -> %d segundos\n\n",i,jugadores[i].tiempo_total);
                //printf("\nTerminado=%d\n\n", terminado);


        // para permitir notificar fin de la partida de un jugador y al otro jugador terminar la partida

                if(i==0){
                    i++;
                } else {
                    i=0;
                }

            } // WHILE


		    	break;
		}
		    case 'B':{
	    		printf("\nEntrando a la tabla de puntuaciones.\n\n");
	    		consultar_puntuaciones();
	    		break;
		}
	    	case 'C':{
		    	printf("\nEntrando en el tutorial.\n");
		    	tutorial();
		    	break;
		}
	    	case 'D':{
		    	printf("\n  Saliendo del juego...\n\n");
		    	bannerMatriz();
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
	printf("\n\tInformacion que poseemos de los personajes:\n\n\t La victima es Merinu.\n\t- Actriz protagonista: Paula (y Merinu). Compitio con Merinu por el premio a mejor actriz.\n\t- Actor protagonista Luis. Enamorado de Sara.\n\t- Doble Pablo. Tenia un negocio de blanqueo de dinero y Merinu queria cerrarlo.\n\t- Director Nacho. Tenia un lio con Merinu y Nacho se entera de que ella esta con un director de casting.\n\t- Camara Mario. Merinu le debia dinero por problemas con el juego.\n\t- La sustituta Sara. Envidia sobre la muerta.\n\t- Ayudante de direccion Jose. A Merinu se le subio el ego y no soportaba trabajar con ella.\n\t- Director de casting: Emilio. Merinu le amenazaba con desvelar sus favoritismos y los contratos extraños que mantenia con las actrices mas jovenes.\n\t- Guionista: Irina. Se nego a realizar sus papeles y habia provocado que la despidieran.\n\n");
	system("pause");
	system("cls");

}

// Compara las respuestas en cada entrevista y si coindicien con la correcto nos devolverá un 1 y sino, un 0.

int validar_respuesta(int interrogatorio, char respuesta[]){

	int validacion=0;
	char respuesta_correcta[N];

	switch(interrogatorio){
		case 1:
			strcpy(respuesta_correcta,"Luis");
			break;
		case 2:
			strcpy(respuesta_correcta,"Director");
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

int rango_puntuacion(int tiempo){
    int puntos=0;

    switch(tiempo){
        case 1 ... 20:
            puntos = 200;
            break;
        case 21 ... 60:
            puntos = 80;
            break;
        case 61 ... 120:
            puntos = 50;
            break;
        default:
            puntos = 10;
            break;

    }

    return puntos;
}


void guardar_en_fichero(char nombre[], int tiempo_final, int puntuacion){
	
	FILE *fichero;
	
	fichero = fopen("puntuaciones_incognita.txt","a");
	
	if(fichero == NULL){
		printf("\nEl archivo que se busca no existe o no ha podido crearse.\n");
	}else{
		
		fseek( fichero, 0, SEEK_END );

		if (ftell( fichero ) == 0 ){
			fprintf(fichero, "Nombre\t Tiempo\t Puntuacion\n");
			fprintf(fichero, "------------------------------\n");
			}
		fprintf(fichero, "%s\t|\t%d\t|\t%d\n", nombre, tiempo_final, puntuacion);
	}
	
	fflush(fichero);
	fclose(fichero);

}
void consultar_puntuaciones(){
	
	FILE *fichero;
	
	char leido[500];
	
	fichero = fopen("puntuaciones_incognita.txt","r");
	
	if(fichero == NULL){
		printf("\nEl archivo que se busca no existe.\n");
	}else{
		
		while(fgets(leido, sizeof(fichero), fichero) != NULL){
            printf("%s", leido);
        }
		
	}
	
	fflush(fichero);
	fclose(fichero);
		
}

