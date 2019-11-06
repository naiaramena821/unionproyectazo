#include "Libro.h"
#include <iostream>
using namespace std;

Libro::Libro()
{
    cout << "BIENVENIDO, elige un estilo..." << endl;
}
void Libro::mostrar_estilos()
{
    cout << "(1)Romance" << endl;
    cout << "(2)Drama" << endl;
    cout << "(3)Fantasia" << endl;
    cout << "(4)Gotico" << endl;
    int x;
    cin >> x;
    if(x==1){
        romance();
    }
    if(x==2){
        drama();
    }
    if (x==3){
        fantasia();
    }
    if(x==4){
        gotico();
    }
}

void Libro::drama()
{
    cout << "1. Si decido quedarme" << endl;
    cout << "2. Testamento de juventud" << endl;
    cout << "3. Patas arriba" << endl;
    cout << "4. La ladrona de libros" << endl;
    cout << "5. volver a estilos" <<endl;
    int Rdrama;
    cin>> Rdrama;
    if(Rdrama==1){
        drama1();
    }
    if(Rdrama==2){
        drama2();
    }
    if (Rdrama==3){
        drama3();
    }
    if(Rdrama==4){
        drama4();
    }
    if (Rdrama=5){
        mostrar_estilos();
    }

}

void Libro::drama1()
{
    cout << endl;
    cout << "Mia tiene diecisiete , un hermano menor de ocho, un padre musico y el don de tocar el chelo como los angeles." << endl;
    cout << "Muy pronto se examinara para entrar en la prestigiosa escuela Julliard, en Nueva York," << endl;
    cout << "y, si la admiten, debera dejarlo todo: su ciudad, su familia, su novio y sus amigas." << endl;
    cout << "Aunque el chelo es su pasion, la decision la inquieta desde hace semanas." << endl;
    cout << "Una mañana de febrero, la ciudad se levanta con un manto de nieve y las escuelas cierran." << endl;
    cout << "La joven y su familia aprovechan el asueto inesperado para salir de excursion en coche." << endl;
    cout << "Es un dia perfecto, estan relajados, escuchando musica y charlando." << endl;
    cout << "Pero en un instante todo cambia." << endl;
    cout << "Un terrible accidente deja a Mia malherida en la cama de un hospital." << endl;
    cout << "Mientras su cuerpo se debate entre la vida y la muerte, la joven ha de elegir si desea seguir adelante." << endl;
    cout << "Y esa decision es lo unico que importa." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        drama();
    }
}
void Libro::drama2()
{
    cout << endl;
    cout << "Tras el estallido de la Primera Guerra Mundial," << endl;
    cout << "Vera, una joven mujer britanica," << endl;
    cout << "duda entre sus estudios en Oxford o convertirse" << endl;
    cout << "en enfermera para ayudar a los heridos en el frente." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        drama();
    }
}
void Libro::drama3()
{
    cout << endl;
    cout << "Hoy Santiago desperto con la peor gripe de su vida," << endl;
    cout << "su mejor amigo no le responde las llamadas," << endl;
    cout << "no sabe como le va con la chica que le gusta y, encima," << endl;
    cout << "un grano gigantesco le ha cubierto la nariz." << endl;
    cout << "Propicia la reflexion sobre la amistad entre pares," << endl;
    cout << "las dificultades al interior de la familia y el amor adolescente." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        drama();
    }
}
void Libro::drama4()
{
    cout << endl;
    cout << "Érase una vez un pueblo donde las noches eran largas y la muerte contaba su propia historia." << endl;
    cout << "En el pueblo vivía una niña que quería leer," << endl;
    cout << "un hombre que tocaba el acordeón y un joven judío que escribía cuentos hermosos para escapar del horror de la guerra." << endl;
    cout << "Al cabo de un tiempo, la niña se convirtió en una ladrona que robaba libros y regalaba palabras." << endl;
    cout << "Con éstas se escribió una historia hermosa y cruel que ahora ya es una novela inolvidable." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        drama();
    }
}
void Libro::fantasia()
{
    cout << "1. Susurros" << endl;
    cout << "2. Harry Potter" << endl;
    cout << "3. Percy Jackson" << endl;
    cout << "4. Volver a Estilos" << endl;
    int Rfantasia;
    cin>> Rfantasia;
    if(Rfantasia==1){
        fantasia1();
    }
    if(Rfantasia==2){
        fantasia2();
    }
    if (Rfantasia==3){
        fantasia3();
    }
    if (Rfantasia=4){
        mostrar_estilos();
    }
}
void Libro::fantasia1()
{
    cout << endl;
    cout << "A Alyssa Gardner las flores y los insectos le hablan." << endl;
    cout << "Teme que su destino sea acabar en un psiquiátrico," << endl;
    cout << "como su madre, pues una vena de locura recorre su familia desde tiempos de su antepasada Alicia," << endl;
    cout << "la niña que inspiro el Pais de las Maravillas de Lewis Carroll." << endl;
    cout << endl;
    cout << "Pero y si los susurros de las flores no son alucinaciones? Y si el Pais de las Maravillas existe y la esta llamando?" << endl;
    cout << endl;
    cout << "Alyssa descendera por la madriguera del conejo hacia un mundo mágico, pero tambien despiadado." << endl;
    cout << "Durante su increíble aventura, tendra que decidir en quien confiar:" << endl;
    cout << "en Jeb, su mejor amigo, por el que siempre se ha sentido atraída," << endl;
    cout << "o en el fascinante y seductor Morfeo, su guía en el Pais de las Maravillas" << endl;
    cout << "y con el que lleva soñando desde que era niña." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        fantasia();
    }
}
void Libro::fantasia2()
{
    cout << endl;
    cout << "El dia de su cumpleanios, Harry Potter descubre que es hijo de dos conocidos hechiceros," << endl;
    cout << "de los que ha heredado poderes magicos." << endl;
    cout << "Debe asistir a una famosa escuela de magia y hechiceria," << endl;
    cout << "donde entabla una amistad con dos jovenes que se convertiran en sus compañeros de aventura." << endl;
    cout << "Durante su primer anio en Hogwarts, descubre que un malevolo y poderoso mago llamado Voldemort" << endl;
    cout << "esta en busca de una piedra filosofal que alarga la vida de quien la posee." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        fantasia();
    }

}
void Libro::fantasia3()
{
    cout << endl;
    cout << "Objeto de burlas por inventarse historias fantasticas," << endl;
    cout << "ni siquiera el mismo acaba de creerselas hasta el dia que" << endl;
    cout << "los dioses del Olimpo le revelan la verdad: Percy es nada" << endl;
    cout << "menos que un semidios, es decir, el hijo de un dios y una mortal." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        fantasia();
    }
}
void Libro::romance()
{
    cout << "1. A dos metros de ti" << endl;
    cout << "2. La raiz cuadrada del verano" << endl;
    cout << "3. El principe roto" << endl;
    cout << "4. El club de los Incomprendidos" << endl;
    cout << "5 .Canciones para Paula" << endl;
    cout << "6. Orgullo y Prejucio" << endl;
    cout << "7. Volver a estilos" << endl;
    int fromance;
    cin>> fromance;
    if(fromance==1){
        romance1();
    }
    if(fromance==2){
        romance2();
    }
    if(fromance==3){
        romance3();
    }
    if(fromance==4){
        romance4();
    }
    if(fromance==5){
        romance5();
    }
    if(fromance==6){
        romance6();
    }
    if (fromance=7){
        mostrar_estilos();
    }
}
void Libro::romance1()
{
    cout << endl;
    cout <<"<Necesitamos estar cerca de las personas que queremos casi tanto como el aire que respiramos." << endl;
    cout << "Stella y Will tienen la misma enfermedad pulmonar y conviven en el mismo hospital." << endl;
    cout << "Cuando se enamoran recuperan la alegria de vivir, pero hay un problema: por el peligro de contagio," << endl;
    cout << "tendran que mantenerse siempre a dos metros de distancia para no arriesgar sus vidas." << endl;
    cout << "Puedes amar a alguien a quien no puedes tocar?>" << endl;
    cout << "(v)volver" << endl;
    cout << endl;
    cin >> volver;
    if (volver=='v')
    {
        romance();
    }
}
void Libro::romance2()
{
    cout << endl;
    cout << "Hay instantes, como el primer beso, en que quisiéramos detener el tiempo." << endl;
    cout << "Hay momentos, como la muerte un ser querido, en que nos gustaría volver atrás." << endl;
    cout << "Pero el tiempo sigue su curso… casi siempre." << endl;
    cout << "Gottie H. Oppenheimer, diecisiete años, huérfana de madre y un genio de la física," << endl;
    cout << "lleva mucho tiempo sumida en su particular materia oscura." << endl;
    cout << "Este verano, cuando el regreso de su novio secreto y el de su gran amigo de infancia" << endl;
    cout << "prometían devolver algo de luz a su universo, el tiempo ha empezado a jugarle a Gottie" << endl;
    cout << "malas pasadas en forma de inexplicables «agujeros agujeros en el tiempo» que la conducen" << endl;
    cout << "a momentos clave de su pasado." << endl;
    cout << "Y mientras intenta desentrañar qué está sucediendo, el pasado, el presente y el futuro" << endl;
    cout << "están a punto de colisionar… en un Big Bang revelador." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        romance();
    }
}
void Libro::romance3()
{
    cout << endl;
    cout << "Reed Royal lo tiene todo: es guapo, está forrado y es popular." << endl;
    cout << "Las chicas hacen cola para salir con el, y los chicos suenian con ser el." << endl;
    cout << "Pero a Reed solo le importa su familia… hasta que Ella Harper llega a su vida." << endl;
    cout << "El odio que siente hacia la joven se convertirá en un sentimiento completamente distinto… Reed quiere a Ella." << endl;
    cout << "La necesita." << endl;
    cout << "Sin embargo, un estupido error hara que todo su mundo se desmorone." << endl;
    cout << "Ella no quiere estar con Reed. Dice que se destruiran el uno al otro." << endl;
    cout << "Y tal vez tenga razon…" << endl;
    cout << "SI REED QUIERE RECUPERAR A SU PRINCESA, TENDRA QUE DEMOSTRAR" << endl;
    cout << "QUE ES DIGNO DE ELLA" << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        romance();
    }
}
void Libro::romance4()
{
    cout << endl;
    cout << "Tras la separacion de sus padres, Valeria se muda a Madrid." << endl;
    cout << "En su nuevo instituto tiene que asistir a unas reuniones con un" << endl;
    cout << "orientador dónde conoce a un grupo de chicos." << endl;
    cout << "Aunque al principio no le gustaba la idea de asistir a las reuniones," << endl;
    cout << "acaba por hacer grandes amigos y vivir grandes aventuras junto a ellos." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        romance();
    }
}
void Libro::romance5()
{
    cout << endl;
    cout << "Paula es una adolescente de casi 17 anios que encuentra el amor por primera vez en"<< endl;
    cout << "Internet. Despues de estar dos meses hablando con Angel, un joven periodista que"<< endl;
    cout << "trabaja en una revista de musica, decide quedar con el y comprobar si lo que siente a" << endl;
    cout << "traves de la pantalla también lo experimenta en el cara a cara. Pero el chico llega" << endl;
    cout << "tarde y, mientras espera, Paula conoce a Alex, un aspirante a escritor con una" << endl;
    cout << "sonrisa maravillosa. A partir de ese momento comienza una historia de amores y"<< endl;
    cout << "desamores, de la que seran testigo <la Sugus>, el grupo de amigas de Paula. Unas" << endl;
    cout << "chicas desenfadadas, alegres y, a veces, difíciles de tragar (como los caramelos Sugus)," << endl;
    cout << "que ayudaran a la protagonista a tomar decisiones importantes en aquellos dias de marzo en" << endl;
    cout << "un lugar de la ciudad." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        romance();
    }
}
void Libro::romance6()
{
    cout << endl;
    cout << "es la historia del senior y la seniora Bennet, sus cinco hijas, y varias aventuras" << endl;
    cout << "romanticas en su residencia Hertfordshire de Longbourn..." << endl;
    cout << "La historia de Jane Austen cobra emocion con la llegada del joven soltero y rico" << endl;
    cout << "Charles Bingley y su amigo Fitzwilliam Darcy."<< endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        romance();
    }
}

void Libro::gotico()
{
    cout << "1. El cuervo" << endl;
    cout << "2. El retrato de Dorin Gray" << endl;
    cout << "3. El castllo de otranto" << endl;
    cout << "4. Los elixires del diablo" << endl;
    cout << "5. La torre de los siete jorobados" << endl;
    cout << "6. Melmoth el errabundo" << endl;
    cout << "7. Volver a estilos" << endl;
    int Rgotico;
    cin>> Rgotico;
    if(Rgotico==1){
        gotico1();
    }
    if(Rgotico==2){
        gotico2();
    }
    if(Rgotico==3){
        gotico3();
    }
    if(Rgotico==4){
        gotico4();
    }
    if(Rgotico==5){
        gotico5();
    }
    if(Rgotico==6){
        gotico6();
    }
    if(Rgotico==7){
        mostrar_estilos();
    }

}

void Libro::gotico1()
{
    cout << endl;
    cout << "Habla de la misteriosa visita de un cuervo parlante a la casa de un amante" << endl;
    cout << "afligido y el lento descenso hacia la locura de este último." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        gotico();
    }
}
void Libro::gotico2()
{
    cout << endl;
    cout << "Basil Hallward es un artista que queda fuertemente impresionado por la belleza" << endl;
    cout << "estetica de un joven llamado Dorian Gray y comienza a admirarlo." << endl;
    cout << "Basil pinta un retrato del joven. Charlando en el jardin de Hallward," << endl;
    cout << "Dorian conoce a un amigo de Basil y empieza a cautivarse por la visión del mundo de Lord Henry." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        gotico();
    }
}
void Libro::gotico3()
{
    cout << endl;
    cout << "Se desarrolla en la Italia medieval, narra la historia del tirano Manfred," << endl;
    cout << "cuya estirpe arrastra una maldicion desde que su abuelo usurpara el" << endl;
    cout << "poder del castillo a sus legitimos poseedores." << endl;
    cout << "Manfred trata de perpetuar su herencia casando a su debil hijo Conrad " << endl;
    cout << "con la princesa Isabella, pero poco antes de la boda ocurre un accidente fatal" << endl;
    cout << "de origen aparentemente magico que frustra sus designios." << endl;
    cout << "A partir de este suceso, se desencadenaran una serie de misteriosos fenomenos sobrenaturales" << endl;
    cout << "y pasiones encendidas que tendran como escenario el asfixiante y siniestro decorado del castillo," << endl;
    cout << "uno de los principales “personajes” del relato: puertas chirriantes, pasadizos oscuros y criptas" << endl;
    cout << "secretas hacen su aparición por primera vez." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        gotico();
    }
}
void Libro::gotico4()
{
    cout << endl;
    cout << "la espeluznante historia, contada en primera persona, de la vida del monje Medardo," << endl;
    cout << "que viene al mundo marcado por el estigma de una simiente maldita, cuyo origen se remonta"<< endl;
    cout << "a un horrible e inconfesable crimen cometido por uno de sus antepasados." << endl;
    cout << "Pero, a pesar de que su atormentada conciencia le conduce poco a poco hacia el laberinto de la locura," << endl;
    cout << "su futuro no esta totalmente sellado, ya que siempre queda un resquicio de libertad que, con ayuda de la" << endl;
    cout << "gracia divina, le permite luchar para alcanzar su salvacion." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        gotico();
    }
}
void Libro::gotico5()
{
    cout << endl;
    cout << "En el Madrid castizo de finales del siglo XIX, el enigmático fantasma del doctor Mantua" << endl;
    cout << "revela al joven Basilio la existencia de una ciudad subterranea en la que habitan decenas" << endl;
    cout << "de siniestros jorobados dedicados a actividades criminales." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        gotico();
    }
}
void Libro::gotico6()
{
    cout << endl;
    cout << "Su protagonista, Melmoth, una especie de Fausto y Mefistofeles, despues de haber" << endl;
    cout << "sellado un pacto con el Diablo, logra que su vida se prolongue indefinidamente," << endl;
    cout << "lo cual le convierte en un ser cuyo tormento no tiene fin, y solo podra librarse de su" << endl;
    cout << "condena cuando encuentre a alguien dispuesto a asumir tal destino. Su errancia le conduce" << endl;
    cout << "a los lugares mas siniestros creados por los hombres: carceles, manicomios, los tribunales de la Inquisicion..." << endl;
    cout << endl;
    cout << "(v)volver" << endl;
    cin >> volver;
    if (volver=='v')
    {
        gotico();
    }
}

