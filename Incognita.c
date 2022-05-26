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
void inicio_historia();
int validar_respuesta(int interrogatorio, char respuesta[]);
int rango_puntuacion(int tiempo);
void guardar_en_fichero(char nombre[], int tiempo_final, int puntuacion);
void consultar_puntuaciones();
void contar_razon_asesinato();


void despliegue_preguntas(int interrogatorio){

	switch(interrogatorio){
		case 1:{

			printf("\n\n ----> El primer interrogatorio sera a la actriz protagonista, Paula.\n Ella se sienta en frente tuya, con aires de superioridad y un poco de soberbia.\n\n");
			printf("PAULA: Supongo que soy la primera persona a la que pensaron en interrogar despues de lo ocurrido...\n");
			printf("INSPECTOR: Unicamente es el comienzo, ha sido principalmente escogida al azar. No entiendo la razon de esas palabras.\n");
			printf("PAULA: El mundo entero cree que mi vida giraba alrededor de ella. Me da esa sensacion continuamente, incluso despues de muerta.\n");
			printf("INSPECTOR: Por favor, le pido un minimo de respeto, mas en la situacion en la que se encuentra. Por favor, responda a esta pregunta: %ccomo era la relacion que tenias con Merinu?\n", 168);
			printf("PAULA: Todo el mundo pensaria que la odiaba. En el fondo, razones no me quedaban: era mi principal rival frente al gran premio. Mi mayor deseo siempre fue luchar por ganarlo pero no pudo ser por sus apariencias y nivel. Creo que me lo merecia mas yo, no han sido justos del todo.\n");
			printf("INSPECTOR: Se mas concreta con la pregunta descrita, por favor.\n");
			printf("PAULA: No eramos buenas compa%ceras. Ella sabia que podria ganarla con pocos esfuerzos si me hubiesen entregado mas lineas en el guion de la pelicula. En fin, simplemente parecia mostrarme toda su fama con el objetivo de desestabilizarme emocionalmente.\n", 164);
			printf("INSPECTOR: En el momento del asesinato, %cdonde se encontraba usted?\n", 168);
			printf("PAULA: Me encontraba justamente posando con mis queridos fans para que tuvieran un bonito recuerdo de esa noche. Lastima que todo se torciera gracias a ella.\n\n*Paula respira progundo*\n\n");
			printf("PAULA: Mire, no quiero sonar borde pero nunca podria haber llegado a hacer algo asi. Me duele pensar que posiblemente mi amigo Luis pudiera estar detras de todo esto.\n");
			printf("INSPECTOR: %cPor que piensas eso?\n", 168);
			printf("PAULA: Se de sobra que el nunca podria haberle hecho da%co a Merinu, porque el tiene un buen corazon. Suelo ser su hombro siempre que me necesita. En esta ultima pelicula, el se canso de ver a su amada perder el papel principal por la existencia de Merinu.\n", 164);
			printf("INSPECTOR: %cQuiere decir que le acusa de poder haber cometido el crimen?\n", 168);
			printf("PAULA: %cPor supuesto que no! Se de sobra que Luis seria incapaz de hacerle da%co ni a una mosca. Somos muy buenos amigos y conozco cada detalle de el. Nunca pensaria algo asi de mi buen amigo.\n", 173, 164);
			printf("INSPECTOR: Entonces, por que estas hablando tanto de el.\n\n*Paula suspira nuevamente profundo, se la nota preocupada*\n\n");
			printf("PAULA: El queria planear algun tipo de saboteamiento para esa noche. Yo tuve que convencerle de que no merecia hacer ninguna locura por amor, menos en nuestras circustancias. Como actores reconocidos mundialmente no podiamos arriesgar nuestra carrera por cometer ese tipo de estupideces.\n");
			printf("INSPECTOR: %cSabes si logro su cometido?\n", 168);
			printf("PAULA: Me hubiese encantado cerciorarme de su integridad en todo momento, pero mis fans me reclamaban y no podia estar pendiente de el en todo momento. Aun asi, seria imposible que lograse nada. Empezo por la tarde a beber y no creo que andase en sus mejores condiciones.\n");
			printf("INSPECTOR: Claramente, esto muestra indicios de que el podria haber sido el asesino. Dime, %cdeberia de contarme algo mas?\n", 168);
			printf("PAULA: No sea suspicaz, pare de pensar de ese modo. Nunca le hubiese nombrado su nombre ni estos detalles si hubiese sabido que le asemejarias a la figura de un asesino. Usted no tiene escrupulos.\n");
			printf("INSPECTOR: Solamente me limito a preguntar y recaudar respuestas, se%corita. No pretendo dañar la imagen de ninguno de vosotros.\n", 164);
			printf("PAULA: Espero que sea asi. Por el momento, no quiero incorporar mas informacion de la otorgada.\n");
			printf("INSPECTOR: Gracias por su colaboracion, Paula.\n\n*Paula se levanta, mirandote fijamente con tono amenazante, enfadada por tus ultimos comentarios del interrogatorio.");
			printf("\n\n ----> Fin del primer interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta: %cCual es el nombre del amigo del que estaba hablando Paula?\t", 168);

			break;
		}
		case 2:{

			printf("\n ----> El segundo interrogatorio sera a el actor protagonista, Luis.\n Se sienta mostrando indicios de desconfianza analizando su comunicación no-verbal.\n\n");
			printf("INSPECTOR: Creo que no nos encontramos en las mejores circustancias para conoceros, pero acomodese.\n");
			printf("LUIS: Directamente, dire que no me fio ni de mi propia sombra. Ha sido una semana muy dura desde que ocurrio el asesinato. Todo el odio que ha caido sobre mi no tiene precio.\n");
			printf("INSPECTOR: %cHa sido usted amenazado de algun modo por alguien?\n", 168);
			printf("LUIS: Los medios y las redes sociales. Un continuo ciclo en donde no se llega a ninguna conclusion mas que la circulacion de bulos.\n");
			printf("INSPECTOR: Siento que se hayan cebado con usted. Pero mi trabajo ahora mismo es investigar sobre el asesinato, asi que debo de preguntarle acerca de su paradero en el momento de este.\n");
			printf("LUIS: Antes de que ocurriera todo, yo...\n\n*Luis se avergüenza*\n\nme emborrache a niveles que nunca me habia encontrado. Era un dia de celebrar y tenia motivos para estar contento, mas alla del desprestigio que Merinu otorgaba a Sara...\n");
			printf("INSPECTOR: Por eso ultimo usted decidio prenderle una trampa a Merinu, %cverdad?\n\n*Luis se sorprende*\n\n", 168);
			printf("LUIS:%cQue?%cQue le hace a usted pensar en ese acto?\n", 168);
			printf("INSPECTOR: Los indicios muestran que usted tenia planeado causar algun tipo de saboteamiento a la victima por el rencor que le guardaba por <<robarle>> el papel principal a Sara\n");
			printf("LUIS: En una mera estupidez se quedo. %cEstuvo usted viendo las circunstancias? Habia momentos en el que no lograba ni sostenerme en pie.\n", 168);
			printf("INSPECTOR: %cNo logro cometer su plan?\n", 168);
			printf("LUIS: Por Dios, no. Tampoco se crea que mi idea era matarla. En un principio, unicamente queria estropear su momento de gloria. Un imprevisto de ultima hora como una rotura en su vestuario, una caida tonta o la desaparicion de su maquillaje favorito.\n\n*Continuas prestando atencion*\n\n");
			printf("LUIS: Pero en ningun momento pense en matarla. Involucre a Sara en esto ultimo, pero finalmente decidi pararla los pies para no ser descubiertos y da%car nuestra imagen, ademas de que yo tenia otros objetivos para esa noche...\n", 164);
			printf("INSPECTOR: %cDe que objetivos esta hablando?\n",168);
			printf("LUIS: Queria declararme a Sara esa noche, y asi fue. La vi saliendo del bastidor de Merinu, me asegure que no hiciese nada dentro. Le agarre de malas formas por mi borrachera con el objetivo de declararme,...\n");
			printf("INSPECTOR: Continue, por favor.\n");
			printf("LUIS: Me rechazo. Al momento, se preocupo mas por mi salud fisica que por lo que estaba declarando. Creo que se penso que iba tan ebrio que no sabia ni lo que decia. Pero era totalmente sincero...\n");
			printf("INSPECTOR: Mmm. %cComo puede asegurarse de que ella no realizo ninguna actividad el tiempo que estuvo dentro del bastidor?\n",168);
			printf("LUIS: Seguramente estuviera con las maquilladoras. Tienen muy buena relacion con ella y probablemente ellas estuvieran en el interior de este en ese momento.\n");
			printf("INSPECTOR: Perfecto. Tendre que llamarla a declarar. Necesito conocer su punto de vista de la situacion.\n");
			printf("LUIS: No piense nada malo de ella. Me salvo de una gorda, al hacerme desaparecer del escenario antes de cometer algun tipo de bochorno frente a las camaras.\n");
			printf("INSPECTOR: Mi trabajo se basa en analizar todas las posibles pistas que me puedan ayudar a resolver el crimen. Dime, %cquiere a%cadir algo mas a su declaracion?\n",168, 164);
			printf("LUIS: Por ahora nada...\n");
			printf("\n\n\n*Luis parece bastante confundido...*\n\n"); // Falta: No se acuerda de mucho pero recuerda ver a Nacho discutiendo con Merinu al principio de la fiesta.
			system("pause");
			system("cls");
			printf("\nIntenta recordar la solucion de la siguiente pregunta:\n\n");
			system("pause");
			
			break;

		}
		case 3:{

			printf("\n ----> El tercer interrogatorio sera a el doble, Pablo.\n\t Parece que el mundo se le ha torcido observando su mirada. Has sido informado de que ha comenzado a ir a terapia cada dia.\n\n");
			printf("INSPECTOR: Buenos dias, Pablo. Hoy mi trabajo sera hacerle una serie de preguntas para que me puedas ayudar en la mayor forma posible.\n");
			printf("PABLO: ...\n");
			printf("INSPECTOR: Acomodese. No pretendo causar ningun estrago a su vida. Unicamente quiero que me ayudes por Merinu.\n");
			printf("PABLO: No mencione su nombre. ¡No la conocia!\n");
			printf("INSPECTOR: Perdoneme.\n");
			printf("PABLO: Nadie deberia de hablar de ella... Era quien mas la conocia... Ni si quiera el director...\n");
			printf("INSPECTOR: %cNacho?\n", 168);
			printf("PABLO: Hizo que la perdiera. Me hizo perderla. Ya no la tengo mas en mi vida, todo por su culpa.\n");
			printf("INSPECTOR: Se mas descriptivo acerca de el, %cpor que piensas que ha sido culpable del crimen?\n", 168);
			printf("PABLO: No le se%calo directamente. Me dio mucha rabia verle, rodeandola con sus brazos, sin apenas saber cada uno de sus pensamientos. Ni sus gustos mas profundos, ni sus aspiraciones en la vida, ni los proyectos que pensaba en comenzar fuera del mundo del cine, ... ni si quiera lo que le gusta hacer en la cama.\n", 164);
			printf("INSPECTOR: Durante las ocasiones que tuvisteis de encuentro Merinu y tu, %cle contaba ella acerca de la relacion que mantenia con su esposo?\n", 168);
			printf("PABLO: Ella siempre se quejaba del estado de la relacion que mantenian. Discutian casi diariamente y realmente no se querian, era todo paripe. El era agresivo y prepotente. Merinu mantenia la cabeza friaa, tenia una mente manipuladora. Siempre conseguia apaciguar las aguas y conseguir lo que queria de el.\n");
			printf("INSPECTOR: %cUna vez que aparecio Nacho, que hizo Vd.?\n", 168);
			printf("PABLO: Volvi a ver mi mundo caer... Mire, Merinu y yo tuvimos una charla profunda antes de ese dia donde me dejo bastante claro las intenciones de dejarlo con el. Discutimos una ultima vez y establecio limites a la fictia relacion que teniamos. Queria romper con todo, y con todos. Yo acabe bastante hundido. Fue muy dura conmigo...\n");
			printf("INSPECTOR: %cQue fue las palabras que mas le hirio de ella?\n");
			printf("PABLO: Fingio no sentir nada por mi. Como si todo lo vivido hubiera sido una fantasia creada en mi cabeza. Me hizo sentirme culpable, como si fuera mi culpa haberla amado. Me senti insignificante despues de ello...\n");
			printf("INSPECTOR: %cAfecto de algun modo aquellas palabras el dia del asesinato?\n", 168);
			printf("PABLO: Tras verles juntos, mi cabeza se nublo. Fui con prisas al ba%co y me encerre. Tras desahogarme llorando, recapacite y se me metio una unica idea en la cabeza: confesarme ante los ojos de todo el mundo y ella sobre lo que realmente sentia.\n", 164);
			printf("INSPECTOR: %cConsiguio usted su cometido?\n",168);
			printf("PABLO: Lo intente, pero cuando intente hablar con ella me encontre con los ayudantes de la direccion y unos periodistas que me bombardearon a preguntas, muchas acerca de rumores sobre nuestra relacion y su enga%co con el director. Me senti culpable, otra vez.\n",164);
			printf("INSPECTOR:%cMantuvo usted unas ultimas palabras antes de los acontecimientos?\n", 168);
			printf("PABLO No sabe cuanto me arrepiento de no haberlo hecho. Ya no esta presente en mi vida. Se ha ido, y ni si quiera he podido despedirme.\n\n*Pablo comienza a sollozar ante ti*\n\n");
			printf("PABLO: La queria. Era mi motivacion diaria para aparecer en el set por si acaso necesitaran de mi ayuda. Era mi mundo, mi noche, mi día. Me encantaria volver a tenerla en mis brazos y despedirme como hubiera sido despedido.\n");
			printf("INSPECTOR: Siento mucho que todo acabara asi, Pablo...\n");
			printf("PABLO: Solo le pido un ultimo favor. Encuentre al culpable de esto. No quiero que su nombre haya desaparecido por la culpa de un malnacido. Y no se olvide de el, puede estar detras de todo ello. Su comportamiento crudo marco una relacion desagribada. Fue un autentico cabron con ella...\n");
			printf("\n\n ----> Fin del tercer interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta:\tDespues de la perdida de Merinu, %ca donde ha comenzado a acudir Pablo diariamente?\t(Escriba una unica palabra)", 168);

			break;
		}

		case 4:{
			printf("\n ----> El cuarto interrogatorio sera al director, Nacho.\n\t Tras todas las pistas obtenidas, decides anteponerle en los interrogatorios por ser potencialmente sospechoso.\n\n");
			printf("INSPECTOR: Buenos dias, Nacho. Coja asiento, por favor.\n");
			printf("NACHO: Gracias. Dime, %ca que se debe el adelantamiento de esta entrevista?\n");
			printf("INSPECTOR: Usted mantenia una relacion de matrimonio con la victima. %cNo es razon suficiente como para no interrogarle cuanto antes?\n", 168);
			printf("NACHO: Desearia haber mantenido el luto desde mi casa. No queria presentar ningun hecho a los aconteciientos: unicamente queria dejaros trabajar con tranquilidad para poder dar con el culpable. No se olvide que la asesinada ha sido mi esposa\n");
			printf("INSPECTOR: Nunca he dicho lo contrario. Soy el primero que busca justicia ante este caso. Pero con mas razon queriamos conocer su perspectiva de la noche, la relacion que mantenia dentro del matrimonio y demás.\n");
			printf("NACHO: La casa se siente vacia sin ella. Y yo estoy roto en mil pedazos por dentro. Quizas no mantuvieramos la relacion mas sana del mundo, pero se de sobra que nos queriamos como ninguno podia. Yo realmente la amaba... Amaba a Merinu como nade en el mundo.\n");
			printf("INSPECTOR: Cuentame, %ccomo era vuestra relacion a lo largo de vuestro matrimonio?\n\n*Nacho se queda brevemente en silencio*\n\n", 168);
			printf("NACHO: Yo... Ella... Tratamos de mantener la paz en la casa en el mayor tiempo posible, aunque no era siempre posible. Cuando rompiamos el silencio, parecia ser que no tuviera un fin hasta que ella se llevara la razon. No se como lo conseguia, pero siempre acababa cediendo a sus deseos mas profundos. Muchas veces fui bastante crudo con mis palabras ante ella, pero al final disfrutabamos de nuestro tiempo junto como si fuera nuestro primer dia.\n");
			printf("INSPECTOR: En vuestras discusiones, %custed mantenia el control de la situacion?%cComo afrontaban ambos la situacion?\n", 168);
			printf("NACHO: Al principio, si. Me sentia superior por ser la figura que era ahi fuera. Quizas fuera la fama, que me hiciera nublar la vista con las relaciones que mantengo con mi familia. Que estupido era. Pero al final, ella lograba  mantener su posturia y hacerme creer que el foco del problema lo poseia yo.\n\n*Prosigue hablando*\n\n");
			printf("NACHO: En muchas ocasiones no era yo el culpable, eso lo tengo por asegurado. Muchas veces malmetia de la gente, creando puros bulos que al final me enervaban. Muchas veces no tenian relacion conmigo, pero aun asi odiaba que cuchilleara sobre las vidas ajenas. Intente cambiar ese aspecto en su vida, pero cada vez creia sin poner un final, salvo la aceptacion tras darle la razon en todo.\n");
			printf("INSPECTOR: %cLLego usted a tocarla en alguna de sus discusiones?\n",168);
			printf("NACHO: %cYo? Jamas. Pudiera ser todo agresivo verbalmente pero en ningun momento me atreveri a ponerla la mano encima. Era mi esposa y el respeto que la tenia superaba cualquier umbral que permitiera cometer ese acto.\n", 168);
			printf("INSPECTOR: He sido informado, ademas, de que ustedes dos se pelearon en la propia fiesta de los Oscars. Cuenteme su version de los hechos, por favor.\n");
			printf("NACHO: Merinu no era un santo. Eso lo sabemos todos, mas siendo yo su esposo. Esa misma noche me tuve que enterar por contactos estrechos sobre los cuernos que me estaba poniendo mi propia mujer.\n");
			printf("INSPECTOR: %cFue esa la principal razon de la pelea acaecida?\n", 168);
			printf("NACHO: Obviamente. No mantuvo el respeto que tuve con ella durante a%cos, simplemente decidio tirarlo a la basura con un don nadie. No tuve mas detalle de que duraron mas de una noche, pero entre el entierro y el luto no quise sumarle mas importancia. No la tiene despues de que la matasen.\n", 164);
			printf("INSPECTOR: Tras la pelea, a mediados de la fiesta, %cdonde se encontraba usted?\n");
			printf("NACHO: Estuve charlando con Emilio. Necesitaba un hombro donde poder desahogarme tras todo lo ocurrido. No queria que las camaras se quedaran con una mala imagen de mi tras la que iba a ser mi noche de oro.\n");
			printf("INSPECTOR: Y en el momento del asesinato, %cdonde se encontraba usted?\n");
			printf("NACHO: Recuerdo emborracharme como nunca tras la discusion que tuve con ella. Decidi celebrar el exito de la pelicula con todo el personal de trabajo de esta. Fue lo unico bonito de la noche, toda mi vida a partir de ese momento no va a volver a ser la misma.\n");
			printf("INSPECTOR: %cRecuerda algun dato mas que pueda servirme de ayuda para poder continuar con la investigacion? Ya sea sobre las relaciones que mantenia Merinu con el resto de trabajadores de la pelicula, algo que vio anormal en la noche o cualquier cosa.\n", 168);
			printf("NACHO: Vi Sara en el interior de los bastidores. Me resulto bastante extra%co porque no tenia relacion alguna con mi esposa, mas sentir pura envidia por no llegar nunca a sus pies. Imposible hacer una comparacion con ambas, Merinu siempre la sacaba tres talones.\n", 164);
			printf("INSPECTOR: %cSabes si hizo algo anormal que le pareciera dentro de este?\n", 168);
			printf("NACHO: Recuerde que el cadaver se encontro justamente dentro de ese bastidor. No conozco sus razones para que permaneciera en su interior, pero me transmitia muy mala espina. Aun asi, todo es especular. No sabria decirte con exactitud lo que hizo en su interior, solamente que portaba con ella una peque%ca botella. Supongo que era de agua, o eso parecia. Se la veia bastante agitada, ahora que recuerdo. Espero que no fuera tan cerda como para matarla, pero la envidia siempre conmueve.\n", 164);
			printf("INSPECTOR: %cAlgo mas que deba saber antes de dar por finalizado el interrogatorio?\n", 168);
			printf("NACHO: Si... Tambien echaria el ojo a algunos directores y ayudantes de casting. Merinu nunca se fiaba de ellos, siempre la transmitian <energias negativas> como decia ella.\n");
			printf("INSPECTOR: Sabe con exactitud por que mantenia una mala relacion su esposa con ellos?\n", 168);
			printf("NACHO: Ellos no soportaban los problemas que Merinu daba a cada rato con la eleccion de las actrices. Ella nunca me contaba el foco del origen, solo se que se cabreaba muchisimo en casa y las pagaba mil veces conmigo. Intento una vez que echara al director de casting, pero fue una tonteria.\n");
			printf("INSPECTOR: Mmm. Recapacitare en la idea de entrevistar a alguno de ellos, en especial a este ultimo.\n");
			printf("NACHO: Deberia. El maneja todos los hilos de las contrataciones de actores y actrices y las propias elecciones de estos de cara al reparto del guion.\n");
			printf("INSPECTOR: Muchisimas gracias por su colaboracion, Nacho. Siento muchisimo la perdida de su querida esposa. Dare sentido y justicia a su perdida.\n");
			printf("NACHO: No se olvide nunca que quien lo hizo seguramente tuviera sus razones. No pienso justificarlo nunca, puesto que de ninguna forma se podria restarle importancia a un asesinato. Pero asegurese encontrarlo al 100%. Quiero que el culpable pague no unicamente en la carcel, si no tambien en el juzgado para que su pena y la indemnizacion economica sea la mayor posible. Encuentre al cabron que se llevo a mi esposa.\n\n*Nacho comienza a llorar melancolicamente, comprendiendo el vacio que posee desde el asesinato de su esposa\n\n");
			printf("NACHO: *Entre lagrimas* Haga justicia, por favor. Haga maldita justicia.\n");
			printf("\n\n ----> Fin del cuarto interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta: %cque portaba Sara al entrar en el bastidor donde se encontraba Merinu?\t(Escriba una unica palabra)", 168);
			break;
		
		}
		case 5:{
			printf("\n ----> El quinto interrogatorio sera a la sustituta, Sara.\n\t En su mirada se observan celos, pero muestra terror parcialmente.\n\n");
			printf("INSPECTOR: Buenas tardes, Sara. %cComo se encuentra? Acomodese.\n", 168);
			printf("SARA: Muchas gracias inspector.\n");
			printf("INSPECTOR: La recuerdo: has sido llamada para declarar acerca de los acontecimientos de la pasada ceremonia de los Oscars, asi que comenzaremos con una pregunta simple: %cComo paso la noche de los Oscars?\n", 168);
			printf("SARA: En un principio estaba disfrutando de la velada. Estaba siendo bastante placentera y lo estaba disfrutando junto a mi amigo, Luis. Mi rol en la pelicula no fue descatable, solamente me dedicaba a observar el panorama sin intervenir en ningun momento. Me hubiera encantado tener una mayor participacion, no unicamente encontrarme presente por si acaso.\n");
			printf("INSPECTOR:%cFue por eso que decidio usted tenderla un enredo en su bastidor?\n", 168);
			printf("SARA: %cQue! %cYo nunca seria capaz de tenderla ninguna trampa a mi compa%cera de trabajo!\n",173,173,164);
			printf("INSPECTOR: En este momento, tenemos testigos del intento de ello. Directos y cercanos a usted, %cpor que decide usted mentir?\n",168);
			printf("SARA: No he mentido nunca en las palabras que he usado. Siempre procuro velar por el progimo, y este tambien ha sido el caso.\n");
			printf("INSPECTOR: Entonces, %cque ideo con Luis previamente a la noche de los Oscars?\n");
			printf("SARA: Un sabotaje. Y de los mejores, pero me replantee si realmente merecia la pena cometer dicha accion. Sinceramente, se me borro la idea despues de que Luis montara su numerito para declararse. Que verguenza. Por ello si deberia de estar mintiendo y ni si quiera mencionarlo...\n");
			printf("INSPECTOR: %cPor que se encontraba en el interior de su bastidor antes del momento del asesinato? Todos los testigos apuntan a usted encontrandose en el interior de este previamente al asesinato.\n");
			printf("SARA: Mis ideas en un principio fueron aquellas, pero tras ver a Luis preocupado por la situacion simplemente reaccione y me olvide totalmente de lo que habiamos planeado. Yo... no tengo la culpa de absolutamente nada.\n");
			printf("INSPECTOR: Tenemos informacion de que se fue usted con Luis para alejarle despues de los focos mediaticos de aquella noche, pero no sabemos que hizo usted en el interior de la escena del asesinato. Entiende que necesito recaudar informacion del hecho.\n");
			printf("SARA: No puedo aportar demasiado, me esta usted asustando. No quiero que se piense que yo pueda estar relacionado con el asesinato. *Asustada* ¡Le contare todo lo que hice previamente, no hay nada de que sospechar!\n");
			printf("INSPECTOR: Adelante, pues. No la meto ningun tipo de prisas.\n");
			printf("SARA: En el interior del bastidor, estuve charlando tranquilamente con las maquilladoras. Mantengo una muy buena relacion con todas ellas porque solemos ver las escenas desde fuera mientras se rodaban y al final nos hicimos bastante amigas. Puedes preguntarlas perfectamente que corraboraran mi vision.\n");
			printf("INSPECTOR: Y despues de ello, %custed vio algo mas o intervino en alguna otra situacion?\n", 168);
			printf("SARA: No que yo recuerde... Unicamente, antes de salir, me cruce dentro del camerino con Irina. Estuvimos hablando aunque unicamente mantenia con ella una relacion de trabajo. Al ver mi botella de agua, parecio mas entusiasmada de lo normal. Me pidio la botella unicamente incluso vacia, pero no quise mas de ella y se la di a medio llenar. Ella pego un trago y me echo una sonrisa. Algo creepy. Fue lo unico que recuerdo.\n");
			printf("INSPECTOR: %cPor que espero entonces a Merinu a la salida, antes de que apareciera Luis?\n", 168);
			printf("SARA: Mi unica ambicion en la vida es lograr ser la protagonista de una pelicula, mas si fuera del gran director Nacho. Seria de mi agrado, pero esta vida es muy injusta y unicamente me ha tocado chupar del bote viendo como otras se aprovechan de su posicion de privilegiadas.\n");
			printf("INSPECTOR:%cA otras personas haces referencia principalmente a Merinu, verdad?\n", 168);
			printf("SARA: Obvio. Siempre me mostraba con aires de superioridad su puesto de actriz principal al ser la esposa del director. Continuamente, me recordaba incluso verbalmente que nunca llegaria a ser mas que ella ni nada en la vida con ella delante. Que ella misma se encargaria de no verme protganoizando ninguna pelicula con renombre. No la entendia, pero me odiaba.\n");
			printf("INSPECTOR: %cExistian razones algunas para hacerlo?\n", 168);
			printf("SARA: No me voy a hacer la santa. Dichas palabras me las dijo despues de que se enterara de que la poniamos verde en el bastidor entre las maquilladoras y yo mientras no se encontraba presente. Y asi fue.\n");
			printf("INSPECTOR: Y a partir de esa conversacion, %custed sufrio algun tipo de acoso por parte de Merinu?\n", 168);
			printf("SARA: Desde entonces, hemos trabajado en dos peliculas conjuntamente. En ninguna de ellas, ni el director de casting ni el propio director han decidido otorgarme el papel de protagonista. Insufrible para mi. Queria crecer pero ha conseguido hundirme en lo mas profundo de mi carrera.\n");
			printf("INSPECTOR: %cCorrabora, entonces, usted, que en el momento exacto del asesinato se encontraba alejado del lugar con Luis?\n", 168);
			printf("SARA: Efectivamente. Tuve que alejarle puesto que iba a ser un espectaculo bochornoso, tanto para el como para mi. No queria dar ningun titular extra mas alla de la alegria de la noche. Aunque para titular final, el del asesinato. Seguro que han ganado muchas pelas con sus ediciones.\n");
			printf("INSPECTOR: Bueno, eso ya no es asunto nuestro. Muchas gracias por toda la informacion, ha sido de gran ayuda.\n");
			printf("SARA: Solo espero que no me siga fichando como principal sospechoso. Seria vergonzoso teniendo tanto loco suelto por el plat%c. Imparta el derecho de la equidad entre todos nosotros.\n", 162);
			printf("\n\n ----> Fin del quinto interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas resolver correctamente al siguiente acertijo:\n\n\t  <<Hombres y mujeres son los que me aclaman, inocentes me necesitan\n\t  y aunque no soy autoridad mi nombre es sinonimo de igualdad y libertad.>>\t\t\n\n %cQuien soy? (Responda con una unica palabra)", 168);

			break;

		
		}
		case 6:{
			printf("\n ----> El sexto interrogatorio sera a el director de casting, Emilio.\n\t Parece conocer perfectamente su estancia por la sala del interrogatorio.\n\n");
			printf("INSPECTOR: Buenas tardes, don Emilio. Por favor, sientese.\n");
			printf("EMILIO: Buenas tardes, inspector. Se avecinan dias grises por lo que veo.\n");
			printf("INSPECTOR: No me agradan las causas por las que estoy aqui, pero alguien tiene que ocuparse del cargo y dar justicia a quien mas se lo merece.\n");
			printf("EMILIO: Si, bueno... Quien mas se lo merece... Nadie se merece la muerte, se%cor, ni mucho menos. Pero Merinu tampoco resulto ser la persona mas santa de la fiesta.\n", 164);
			printf("INSPECTOR: Querria empezar por ese punto: %cComo era su relacion con la victima?\n", 168);
			printf("EMILIO: Al principio, eramos muy buenos amigos. En los primeros castings me hacia muchisimo reir y siempre acababa contratandola por las buenas energias que me transmitia. Tal vez fuera porque era la esposa del director, y no me quedaba otra.\n");
			printf("INSPECTOR: Pero vuestra relacion no acabo del todo bien, %cverdad?\n", 168);
			printf("EMILIO: Ella comenzo a ser cada vez mas y mas egoista hasta dejarnos de tratar como personas al equipo que la rodeaba e incluso a sus amigos. Ademas, ella comenzo a acusarme de tener favoritismos.\n");
			printf("INSPECTOR: %cA la hora de escoger al resto de los actores/actrices?\n", 168);
			printf("EMILIO: En especial, a las actrices. Ya sabes... muchas veces se pasan por mi despacho cuando las requiero y salen ganando. No quiere decir que repito siempre con las mismas, pero alguna que otra vez es el caso.\n\n*Te das cuenta de como es realmente el hombre.\n\n");
			printf("INSPECTOR: Bueno... Eso lo podemos obviar y mantener en su privacidad. %cSu relacion con Merinu no traspasa mas que a ese permanente enfado?\n",168);
			printf("EMILIO: Ya le dije, eramos muy buenos amigos. Hace ya un tiempo, tuvimos una discusion bastante gorda, donde me llego a distorsionar e incluso amenazar de perder mi puesto de trabajo. Sabia de sobra que no se saldria con la suya, Nacho y yo al fin y al cabo llevamos juntos desde el inicio y ningun tipo de enfado por su parte acabaria en eso mismo.\n");
			printf("INSPECTOR: Pasemos entonces al dia de la noche de los Oscars...\n");
			printf("EMILIO: Poca informacion puedo darle, acabe la mitad de la noche bailando con las maquilladoras. Que rico se meneaban.\n");
			printf("INSPECTOR: %cNo vio usted nada fuera de lo normal?\n"), 168;
			printf("EMILIO: Antes de comenzar, me fije en que se respiraban aires tensos. Entre todas las chicas, en especial. Se cuando no estan en su salsa del todo, pero mientras fue comenzando la fiesta parecian todas en calma.\n");
			printf("INSPECTOR: Y con los hombres, %cestuvo usted con alguno de ellos?\n", 168);
			printf("EMILIO: A mitad de la noche, me sente un rato a hablar con Nacho. Me conto acerca de la pelea con su mujer, los cuernos y todo. De Merinu me lo podia esperar, aunque no del todo de Pablo. Nacho queria que le suprimira de los futuros papeles en las proximas obras. Pero mas alla de eso, estuvimos los dos tranquilos, la verdad.\n");
			printf("INSPECTOR: %cLe vio nervioso usted a nacho?%cVio algo fuera de lo normal en el?\n", 168);
			printf("EMILIO: Mas alla antes del altercado, nada anormal hasta que nos enteramos del asesinato. No he visto a hombre mas hundido que ese dia. Ese desgarro... Pobre amigo mio.\n");
			printf("INSPECTOR: Acerca del momento del asesinato, %cvio usted algo fuera de lugar o que le llamara la atencion?\n", 168);
			printf("EMILIO: Me estaba riendo en ese momento de la situacion que veian mis ojos. Sara agarrando a Luis y este medio moribundo del alcohol que tenia en sangre declarandose. Vaya show.\n\n*Emilio comienza a reirse, pero tu cara de seriedad hace que pronto se detenga*\n\n");
			printf("EMILIO: Lo siento. Era una situacion irrisoria, mas cuando conoces a las personas. Lo de Merinu no fue asi, fue mas tragico... Disculpe.\n");
			printf("INSPECTOR: No se preocupe, creo que no me servira de gran ayuda. Fin del interrogatorio.\n");
			printf("EMILIO: %cEspere!\n\n", 173);
			system("pause");
			system("cls");
			printf("\nIntenta recordar la solucion de la siguiente pregunta:\n\n");
			system("pause");
			break;
		}

		case 7:{
			printf("\n ----> El septimo y ultimo interrogatorio sera a la guionista, Irina.\n\t Se muestra como la mas tranquila de los siete interrogados. \n\n");
			printf("IRINA: Buenas tardes, inspector. Casi ya se hace de noche...\n");
			printf("INSPECTOR: Buenas tardes a usted, srta. Sientese, por favor.\n");
			printf("IRINA: Una desgracia que haya ocurrido todo esto... Pobre Merinu, que descanse en paz.\n");
			printf("INSPECTOR: Por lo visto, no era demasiado querida entre sus compa%ceros de trabajo. %cUsted realmente tenia una buena relacion con ella?\n", 164, 168);
			printf("IRINA: No le voy a enga%car, no era la mejor pero al menos nos respetabamos mutuamente.\n", 164);
			printf("INSPECTOR: Cuenteme, entonces. %cComo era su relacion con Merinu?\n", 168);
			printf("IRINA: Al principio de todo, fue espectacular. Los primeros trabajos donde trabajamos y colaboramos juntas se abrio a todo loq ue yo escribia en su papel. Ella realmente se sentia comoda con su rol y lo mostraba a la hora de rodar. Incluso, le llego a funcionar. Su carrera alcanzo el puro exito... pero a que coste.\n");
			printf("INSPECTOR: %cPiensas que la fama y el convertirse en una figura reconocida mundialmente cambio las relaciones que mantenia con el equipo?\n", 168);
			printf("IRINA: Por supuesto. En especial, conmigo. Intentaba hacer lo mejor posible mi trabajo, pero ella comenzo a negarse a utilizar los guiones que yo escribia. Segun ella, le faltaba valor emocional y de calidad...\n\n*Irina se queda callada*\n\n");
			printf("IRINA: Al final, consiguio su cometido. Me destituyeron de guionista principal, lo que conllevaba una bajada considerable en el sueldo, ademas de la falta en fama que exige mi nivel. No por eso, seria capaz de hacerle da%co. Intente llevar a buen puerto nuestra relacion de trabajo, pero logro hundirme.\n", 164);
			printf("INSPECTOR: Siento mucho que le pasara todo eso, Irina. %cSe esforzo mucho por intentar que salieran bien las cosas entre Merinu y tu?\n", 168);
			printf("IRINA: De nada sirve que le responda si ella ya no esta aqui. No me gusta abrir heridas cerradas, menos despues de lo que le ha pasado. Pobrecilla...\n");
			printf("INSPECTOR: Voy a comenzar a realizarle alguna pregunta mas acerca de la noche. %cEn que momento entro usted en el famoso bastidor?\n", 168);
			printf("IRINA: Permaneci dentro gran parte de la noche. Me llevo muy bien con el equipo de maquilladoras y estuvimos charlando gran parte de esta. Luego, decidi ir a la fiesta a continuar con la que estaba siendo una de mis mejores noches.\n");
			printf("INSPECTOR: A mediados de la noche, %cpercibio algo usted en su entorno que le llamara la atencion, el mas minimo detalle?\n", 168);
			printf("IRINA: En absoluto. Unicamente de cara al final de esta, antes de que ocurriera todo... Escuche a Pablo decir que Merinu seria unicamente suyo y de nadie mas. Se le veia entre furioso y roto en pedazos por lo que conocimos de su romance secreto con Merinu...\n");
			printf("INSPECTOR: %cSabes si hizo algo?\n", 168);
			printf("IRINA: Creo que fue a hablar con ella hacia el camerino. Pero no hice mucho mas caso, puesto que poco mas tarde manche mi vestido blanco con un pelin de champange que se me habia caido y fui a buscar mi bolso, que se me habia olvidado en el bastidor.\n");
			printf("INSPECTOR: Entonces, %cal entrar de nuevo al bastidor, usted no portaba nada?\n", 168);
			printf("IRINA: En absoluto.\n");
			printf("INSPECTOR: %cY que hizo en su interior?\n", 168);
			printf("IRINA: Me tope con Sara. Estaba un poco nerviosa y apresurada, pareciera planear algo pero no estoy segura, quizas solo sean supersticiones. Me dio un poco de agua que pensaba que lo necesitaba y nos despedimos despues de una insignificante charla.\n");
			printf("INSPECTOR: %cVio a Merinu en el interior con alguien mas?\n", 168);
			printf("IRINA: No logre visuadirla. Seguramente se estuviera retocando. Entonces yo cogi mi bolso porque sabia donde estaba y decidi salir de nuevo hacia la fiesta con el resto de mis compa%ceros.\n", 164);
			printf("INSPECTOR: Y despues de salir, %cvio a alguien mas aproximarse?\n", 168);
			printf("IRINA: No, pero tampoco me cerciore si salia salio de este o permanecia todavia dentro. Tampoco sabria decirte con exactitud.\n\n");
			printf("INSPECTOR: Estupendo. Muchisimas gracias por su colaboracion, Irina.\n");
			printf("IRINA: Gracias a usted. Espero que se pueda poner pronto punto final a esta historia.\n");
			printf("\n\n ----> Fin del septimo interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\n\n*Algo no te ha cuadrado entre varios testimonios, puesto que dan informacion contradictoria*\n\n");
			system("pause");
			printf("\nIntenta recordar la solucion de la siguiente pregunta:\n\n");
			system("pause");
		
			break;

		}
	}
}

int interrogatorios_extras(int interrogatorio_actual){
	
	int banderita;
	
	switch(interrogatorio_actual){
		
		case 2:{
			
			printf("\n\n*Continuacion del interrogatorio*\n\n");
			printf("\nLUIS: Creo recordar algo ultimo; espere.");
			printf("\nINSPECTOR: %cRecuerda algo mas de esa noche?",168);
			printf("\nLUIS: Nacho... Si, Nacho...\n\n*Nacho...%cquien era Nacho?*\n", 168);
			printf("\nLUIS: No recuerdo mucho pero le vi discutiendo con Merinu al principio de la fiesta. Yo estuve con el mas tarde gran parte de la fiesta. Tuvieron una discusion bastante fuerte que logro llamarme la atencion, pero tan pronto como quise enterarme ya desaparecieron ambos.\n\n*Luis recibe otro flashback*\n\n");
			printf("LUIS: Miento. Acabo de recordar otra cosa mas. Rercuerdo que salía de los bastidores mientras Merinu le gritaba desde dentro, pero no quise preguntarle mucho y celebre con el el exito de su pelicula. Pensaba que no estaba siendo una buena noche para ninguno de los dos asi que intente animar el ambiente.");
			printf("\nINSPECTOR: Muchisimas gracias por toda la informacion, Luis. %cHay algo mas que deberia saber?\n", 168);
			printf("LUIS: Con el tema bastidor... Hubo mucha gente entrando y saliendo, pero recuerdo tambien que unas chicas, 2 o 3, entrando de cara al final de la noche, a ratos distintos, antes de que ocurriera el asesinato.\n");
			printf("INSPECTOR: %cRecuerda el nombre de alguna?\n",168);
			printf("LUIS: No estoy seguro, pero me suena que Irina fue de las ultimas que entraban. Pero no lo recuerdo a ciencia cierta, iba muy borracho.\n");
			printf("INSPECTOR: %cRecuerda si portaba algo con ella, Luis?", 168);
			printf("LUIS: Te puedo asegurar que quien entrase la ultima no llevaba nada. Llevaba un vestido precioso de color blanco. Creo que era ella, si. Pero no recuerdo mucho mas.");
			printf("INSPECTOR: No se preocupe Luis, ya has sido de gran ayuda. Muchas gracias.");
			printf("\n\n ----> Fin del segundo interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta: %cque trabajo posee Nacho en la obra?\t(Escriba una unica palabra)", 168);
			
			break;
		}
		case 6:{
			printf("\n\n*Continuacion del interrogatorio*\n\n");
			printf("\nEMILIO: Hay algo que creo que podria serle de gran ayuda.");
			printf("\nINSPECTOR: Sueltelo, entonces.");
			printf("\nEMILIO: Antes de enterarme de los hechos, como diez minutos antes, vi salir con prisas a Irina. Andaba bastante tranquila, por eso tampoco creo que fuera de sospechar.");
			printf("\nLUIS: %cDel bestidor, dices?", 168);
			printf("\nEMILIO: Si. Creo que es de los ultimos rostros que reconoci saliendo de alli. Sobretodo porque minutos mas tardes se descubrio todo.\n\n*Esto te deja pensativo*\n\n");
			printf("INSPECTOR: %cRecuerdas si portaba con ella misma algun tipo de instrumento o algo?\n", 168);
			printf("EMILIO: Llevaba puesto un bolso clasico blanco de esa marca,... Chanel. Vino tan arreglada hacia nosotros y solo recuerdo verla reluciendo. Me fije en ella por lo guapa que iba, su vestido le hacia tener un pedazo de buen culo.\n\n*Emilio le gui%ca*\n\n",164);
			printf("INSPECTOR: Gracias por su ayuda. Dare por finalizado el interrogatorio.");
			printf("\n\n ----> Fin del sexto interrogatorio.\n\n");
			system("pause");
			system("cls");
			printf("\nPara avanzar, deberas responder correctamente a la siguiente pregunta: %cque relacion mantuvieron en el pasado Emilio y la victima?\t(PISTA: Una relacion de...)", 168);
									
			break;
		}
		case 7:{
				printf("\n\n*Decides llamar nuevamente al dia siguiente a dos testimonios por separado: el primero es Luis y el segundo es Emilio*\n\n");
                system("pause");
				system("cls");
				printf("\n ----> Realizas un nuevo pero corto interrogatorio a uno de los sospechosos, Luis.\n\n");
				printf("LUIS: Me sorprende que volviese a llamarme, sr. Inspector. No pensaba que seria de mas utilidad.\n");
				printf("INSPECTOR: En estos momentos de la investigacion, si lo eres. La informacion que me concedas hoy puede cambiar el rumbo de una vida.\n\n*Tus palabras ponen nervioso a Luis*\n\nINSPECTOR: No se ponga nervioso. No pretendo asustarle, solo requiero de su ayuda.\n");
				printf("LUIS: *Glup* Genial, me dispongo a lo que necesites.\n");
				printf("INSPECTOR: Respondame: %cRecuerdas si en el momento que Sara le llevo fuera de los focos mediaticos portaba algo con ella misma?\n", 168);
				printf("LUIS: Uf, es muy dificil que sepa responderle a esa pregunta. Ya le dije que mi situacion era de borracho total. Solo me fijaba en lo guapa que estaba, pero no puedo afirmar nada de lo que dice..\n");
				printf("INSPECTOR: %cConsidera imposible recordar la situacion a la perfeccion?\n", 168);
				printf("LUIS: En estos momentos, si. Lo siento por no poder responderle a ese dato.\n");
				printf("INSPECTOR: Entonces, no requiero mas de su ayuda. Muchas gracias igualmente, Luis.\n\n");
				printf("----> Fin del primer interrogatorio extra.\n\n");


				system("pause");
				system("cls");
				printf("\n ----> Realizas un nuevo pero corto interrogatorio a otro de los sospechosos, Emilio.\n\n");
				printf("INSPECTOR: Buenos dias. Siento tener que llamarle tan temprano, sr. Emmilio. Necesito cerciorarme de no cometer ningun error en este punto de la investigacion.\n");
				printf("EMILIO: %cAcaso ya ha encontrado al culpable de esta situacion?\n", 168);
				printf("INSPECTOR: Mas me gustaria a mi. Pero me encuentro al limite de descubrirlo. Necesito que me conteste a una unica pregunta.\n");
				printf("EMILIO: Le respondere con gusto.\n");
				printf("INSPECTOR: Usted afirmo que vio a Sara salir del camerino antes de que sucediera le asesinato. %cPuede recordar si portaba algo con ella?\n", 168);
				printf("EMILIO: %cSara? Pf, no estaria seguro. Creo recordar que no llevaba bolso en ese momento y que la unica <cosa> que portaba en sus brazos era al borrachuzo de Luis.\n", 168);
				printf("INSPECTOR: %cEsta usted totalmente seguro? Es una informacion muy importante.\n");
				printf("EMILIO: Dudo un poco por el pedo que me cogi, pero fijese que en esos detalles siempre me fijo.\n");
				printf("INSPECTOR: Muchisimas gracias, Emilio. Esto es determinante.\n");
				printf("EMILIO: A usted.\n");
				printf("\n----> Fin del segundo interrogatorio extra.\n\n");
				system("pause");
				system("cls");
				printf("\n\nHa llegado el momento de la respuesta final. La pregunta que se le plantea es sencilla pero crucial: %cquien es el asesino de Merinu?\n\n",168);
				printf("Las opciones son las siguientes: \n\n\t- La otra actriz protagonista: Paula.\n\t- El actor protagonista: Luis. \n\t- El doble y amante: Pablo.\n\t- El director y esposo: Nacho.\n\t- La sustituta: Sara.\n\t- El director de casting: Emilio.\n\t- La guionista: Irina.\n\n");
			break;
		}
		
	}
	
	return banderita=1;
	
}



int main (){

    while(1){

    	char opcion_menu, respuesta[N];
    	int i = 0;

    	divisor();
	    printf("\n Bienvenidos al MENU del juego INCOGNITA.\n");


    	printf("\n Por favor, escoja una de las siguientes opciones:\n\n 'A' - Comenzar el juego.\n 'B' - Tabla de puntuaciones.\n 'C' - Tutorial.\n 'D' - Salir del juego.\n\n");
    	scanf(" %c", &opcion_menu);



    	switch(opcion_menu){

		    case 'A':{

			   	double hora_inicio;
                char la_letra_correcta, respuesta_de_letra;
			    int num_jugadores=0, cont=1, tiempo_final=0, respuesta_correcta=1, bandera=0, terminado=0, ganador=-1;
			    printf("\n Comenzando el juego.\n");

			    do{

				    printf("\n Escoge el numero de jugadores entre 1 y 2: ");
				    scanf("%d", &num_jugadores);

				    if(num_jugadores<1 || num_jugadores > 2) {
						printf(" El numero introducido no es valido.");
					}

				} while(num_jugadores<1 || num_jugadores > 2);

				// Aqui tenemos el vector de Jugadores de tipo struct. Está predeterminado que se incluya dos jugadores, con el objetivo de que no sea tan monótono y largo.
				
				struct Jugador jugadores[2] = {{" ",0,0,1}, {" ",0,0,1}};

			    while(cont <= num_jugadores){

                    printf("\n Nombre de jugador %d: ", cont);
                    scanf(" %[^\n]s", jugadores[cont-1].nombre);

					cont++;
				}


				inicio_historia();
                i=0;

				while(terminado < 2){

                    int tiempo_final=0;

                    if(jugadores[i].interrogatorio_actual <= 7 && ganador != i){

						system("cls");
                        printf("\n\n\n      ---- Turno de jugador %s ----", jugadores[i].nombre);
                        printf("\n\t----Interrogatorio numero %d----\n\n\n", jugadores[i].interrogatorio_actual);
                        system("pause");

						hora_inicio = start_time();
						despliegue_preguntas(jugadores[i].interrogatorio_actual);

						if(jugadores[i].interrogatorio_actual == 2){

							la_letra_correcta = 'B';

							while(bandera == 0){
								
								system("cls");
								printf("\n%cCon quien tenia buena relacion Sara?\n\n'A'- Con Merinu.\n'B'- Con las maquilladoras.\n'C'- Con Paula.\n'D'- Con los guionistas secundarios.\n\n",168);
								scanf("%c",&respuesta_de_letra);

								if(respuesta_de_letra == la_letra_correcta){
									bandera = interrogatorios_extras(jugadores[i].interrogatorio_actual);
								}else{
									printf("\n\nRespuesta incorrecta. Vuelva a intentarlo.\n");
								}
							}
						}
						
						if(jugadores[i].interrogatorio_actual == 6){
							
							la_letra_correcta = 'C';

							while(bandera == 0){
								
								system("cls");

								printf("\n%cRecuerdas cuantas personas entraron al bastidor segun Luis cerca antes de que ocurriera el asesinato?\n\n'A'- Ninguna.\n'B'- Una unica persona.\n'C'- De dos a tres chicas.\n'D'- Dos hombres junto a Nacho.\n\n",168);
								scanf("%c",&respuesta_de_letra);

								if(respuesta_de_letra == la_letra_correcta){
									bandera = interrogatorios_extras(jugadores[i].interrogatorio_actual);
								}else{
									printf("\n\nRespuesta incorrecta. Vuelva a intentarlo.\n");
								}
							}

						}
						
						if(jugadores[i].interrogatorio_actual == 7){
							
							la_letra_correcta = 'D';

							while(bandera == 0){
								
								system("cls");

								printf("\n%cRecuerdas que portaba Irinu a su salida del bastidor?\n\n'A'- Botella de agua.\n'B'- Absolutamente nada.\n'C'- A Luis en su brazo.\n'D'- Bolso de la marca Chanel.\n\n",168);
								scanf("%c",&respuesta_de_letra);

								if(respuesta_de_letra == la_letra_correcta){
									bandera = interrogatorios_extras(jugadores[i].interrogatorio_actual);
								}else{
									printf("\n\nRespuesta incorrecta. Vuelva a intentarlo.\n");
								}
							}

						}

						bandera = 0;

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

                                //printf("\nJugador %d ha finalizado.", i+1);
                                jugadores[i].puntuacion = rango_puntuacion(jugadores[i].tiempo_total);
                                printf("\n -----> Puntuacion final: %d puntos.\n", jugadores[i].puntuacion);

                                guardar_en_fichero(jugadores[i].nombre, jugadores[i].tiempo_total, jugadores[i].puntuacion);

                                terminado++;

                                if(terminado == 1){
                                    ganador = i;
                                }

                                if(num_jugadores == 1 && terminado == 1){
                                    printf("\nGanador el jugador %s\n\n", jugadores[0].nombre);
                                    contar_razon_asesinato();
                                    break;

                                } else if(num_jugadores == 2 && terminado == 2){
                                    printf("\nGanador el jugador %s\n\n", jugadores[1].nombre);
                                    contar_razon_asesinato();
                                    break;
                                }


                            } else if(jugadores[i].interrogatorio_actual < 7){

                                jugadores[i].interrogatorio_actual += 1;
                            }

                        } else {
                            printf("Respuesta incorrecta. Intentalo de nuevo mas tarde\n");
                        } // FINAL VALIDACION


                } // IF TOCHO

                //printf("Tiempo acumulado de jugador %d -> %d segundos\n\n",i,jugadores[i].tiempo_total);
                //printf("\nTerminado=%d\n\n", terminado);




                if(i==0 && num_jugadores==2){
                    i++;
                } else {
                    i=0;
                }

            } // WHILE


		    	break;
		}
		    case 'B':{
		    	system("cls");
	    		printf("\nEntrando a la tabla de puntuaciones.\n\n");
	    		consultar_puntuaciones();
	    		break;
		}
	    	case 'C':{
	    		system("cls");
		    	tutorial();
		    	break;
		}
	    	case 'D':{
	    		system("cls");
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
	
	printf("\n  Entrando\n\ten el \n\t   tutorial\n\t\t...\n\n");

	divisor();

	printf("\n\n Historia inicial:\n");
	printf("\n En la ceremonia de los Oscars aparece un cadaver.\n");
    printf(" La muerta se trata de Merinu, una actriz veterana que protagonizaba una pelicula junto a la actriz del momento, Paula.\n");
    printf(" Todo el mundo que participaba en la pelicula sabia que Merinu tenía problemas con mucha gente, con actores, con directores de casting e incluso con su pareja, el director.\n");
    printf(" Durante la fiesta la vieron agitada, y al final de la noche aparecio muerta en los bastidores del escenario. La causa de su muerte fue un envenenamiento a traves de un agente nervioso poco conocido actualmente.\n\n");
    printf(" %c Los inspectores se encargaran de analizar a traves de entrevistas  e interrogatorios a los sospechosos las pistas obtenidas a partir de estas.\n",196);
	printf(" %c Se necesita papel y un boligrafo o lapicero para formalizar las pistas e ir resolviendo los acertijos.\n",196);
	printf(" %c Gracias a tu trabajo, podremos alcanzar y cerrar al asesino.\n",196);
	printf(" %c Cabe la posibilidad de que existan dos jugadores en el propio juego, lo que a%cade una competicion extra por ver quién resuelve los acertijos mas rapidamente.\n",196, 164);
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

void inicio_historia(){

	system("cls");
	printf("\n\n En la ceremonia de los Oscars aparece un cadaver.\n Los inspectores analizan a traves de entrevistas e interrogatorios a los sospechosos las pistas obtenidas.\n La muerta es Merinu, una actriz veterana que protagonizaba una pelicula junto a la actriz del momento, Paula.\n Todo el mundo que participaba en la pelicula sabía que Merinu tenia problemas con mucha gente, con los actores, con los directores de casting e incluso con su pareja, el director.\n Durante la fiesta la vieron agitada, y al final de la noche aparecio muerta en los bastidores del escenario.\n");
	printf("\n\tInformacion que poseemos de los personajes:\n\n\t La victima es Merinu.\n\t- Actriz protagonista: Paula (y Merinu). Compitio con Merinu por el premio a mejor actriz.\n\t- Actor protagonista Luis. Enamorado de Sara.\n\t- Doble Pablo. Era el amante de Merinu.\n\t- Director Nacho. Esposo de Merinu.\n\t- La sustituta Sara. Envidia sobre la muerta.\n\t- Director de casting: Emilio. Merinu le amenazaba con desvelar sus favoritismos y los contratos extra%cos que mantenia con las actrices mas jovenes.\n\t- Guionista: Irina. Se nego a realizar sus papeles y habia provocado que la despidieran de su puesto de alto rango.\n\n",164);
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
			strcpy(respuesta_correcta,"terapia");
			break;
		case 4:
			strcpy(respuesta_correcta,"Botella");
			break;
		case 5:
			strcpy(respuesta_correcta,"Justicia");
			break;
		case 6:
			strcpy(respuesta_correcta,"Amistad");
			break;
		case 7:
			strcpy(respuesta_correcta,"Irina");
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
        case 1 ... 240:
            puntos = 1000;
            break;
        case 241 ... 480:
            puntos = 900;
            break;
        case 481 ... 720:
            puntos = 800;
            break;
        case 721 ... 960:
        	puntos = 700;
        	break;
        case 961 ... 1200:
        	puntos = 600;
        	break;
        case 1201 ... 1440:
        	puntos = 500;
        	break;
        case 1441 ... 1680:
        	puntos = 400;
        	break;
        case 1681 ... 1920:
        	puntos = 300;
        	break;
        case 1921 ... 2160:
        	puntos = 200;
        	break;
        case 2161 ... 2400:
        	puntos = 100;
        	break;
        default:
            puntos = 0;
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
			fprintf(fichero, "Nombre\t Tiempo\t  Puntuacion\n");
			fprintf(fichero, "------------------------------\n");
			}
		fprintf(fichero, "%s\t   %d\t    %d\n", nombre, tiempo_final, puntuacion);
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

void contar_razon_asesinato(){
	
	printf("Buen trabajo, inspector.\n\nLas razones del asesinato por parte de Irina quedan mas que descritas. El orgullo y la envidia, mezclada con la ira que le producio la destitucion como guionista principal a causa de Merinu, fueron razones suficientes para cometer el crimen.\n");
	printf("Sumado a eso, Irinu muestra un perfil de psicopata a la perfeccion, tras analizar la conducta tranquilizadora a la hora de realizar su interrogatorio.\n\nPulse un boton para conocer como sucedieron los hechos:\n");
	system("pause");
	printf("\nTodo ocurrio de cara al final de la noche, pero ella lo planeo desde el inicio: en el interior de su bolso llevaba en un minusculo frasco con el agente nervioso con el que asesino a Merinu\n");
	printf("Dicho frasco logro pasar la seguridad por sus dimensiones. Ella planteo en la hora del interrogatorio que <olvido> su bolso en el bastidor. Pero todo estaba planeado, no fue mera casualidad.\n");
	printf("Al llegar casi el final de la noche, se apresuro a cometer el crimen puesto que no queria que Merinu se saliera con la suya y quedara impune de los actos.\n");
	printf("Ahi es cuando se topo con Sara, que le proporciono el ingrediente ultimo que necesitaba, sin esta darse cuenta. La botella que le dio fue el instrumento utilizado para matar a Merinu. %cComo lo hizo? Os preguntareis.",168);
	printf("Se sabe que Sara no puedo envenenar la botella, puesto que Irinu pego un trago en frente suya y no le paso absolutamente nada.\n");
	printf("Como era un evento social, los equipos de catgering repartieron el mismo tipo de botella de agua a todos los usuarios que quisieran. Y Merinu tenia una igual que la que portaba Irinu, ya habiendo esta introducido el veneno necesario como para matarla.\n");
	printf("Mientras Merinu se retocaba, Irinu logro hacer el cambiazo con su botella de agua, que estaban a parecidos niveles de llenado. Esta ultima confio ciegamente en que Merinu volveria a beber de la botella al poco de volver, y asi fue.\n");
	printf("Irinu se apresuro a salir, colocando la nueva botella de Merinu en su bolso. Dicha botella se ha encontrado en los restos de basura que Irinu deposito en su casa, intentando deshacerse de ella.\n");
	printf("Intento hacer creer a todos que no habia logrado nada, puesto que se acoplo perfectamente a la continuacion de la fiesta antes de que dieran el foco de alarma sobre la muerte de Merinu.\n\n");
	system("pause");
	printf("\n\nIrinu se enfrenta ahora a una condena de entre quince a veinticinco a%cos, sin posibilidad de fianza puesto que tambien se le han congelado las cuentas del banco al haberse dado a la fuga.", 164);
	printf("\nFue capturada en el aeropuerto, ya teniendo unos billetes comprados con destino a la Africa Occidental, donde podria intentar crear una nueva vida confiando ciegamente en el destino, puesto que no tenia ni ammigos ni familiares alli.\n");
	printf("\n--- FIN DE LA PARTIDA ---\n\n\n");

}
