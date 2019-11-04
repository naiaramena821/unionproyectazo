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

}

void Libro::drama1()
{
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
}
void Libro::drama2()
{
    cout << "Tras el estallido de la Primera Guerra Mundial," << endl;
    cout << "Vera, una joven mujer británica," << endl;
    cout << "duda entre sus estudios en Oxford o convertirse" << endl;
    cout << "en enfermera para ayudar a los heridos en el frente." << endl;
}
void Libro::drama3()
{
    cout << "Hoy Santiago despertó con la peor gripe de su vida," << endl;
    cout << "su mejor amigo no le responde las llamadas," << endl;
    cout << "no sabe cómo le va con la chica que le gusta y, encima," << endl;
    cout << "un grano gigantesco le ha cubierto la nariz." << endl;
    cout << "Propicia la reflexión sobre la amistad entre pares," << endl;
     cout << "las dificultades al interior de la familia y el amor adolescente." << endl;
}
void Libro::drama4()
{
    cout << "Érase una vez un pueblo donde las noches eran largas y la muerte contaba su propia historia." << endl;
    cout << "En el pueblo vivía una niña que quería leer," << endl;
    cout << "un hombre que tocaba el acordeón y un joven judío que escribía cuentos hermosos para escapar del horror de la guerra." << endl;
    cout << "Al cabo de un tiempo, la niña se convirtió en una ladrona que robaba libros y regalaba palabras." << endl;
    cout << "Con éstas se escribió una historia hermosa y cruel que ahora ya es una novela inolvidable." << endl;
}
void Libro::fantasia()
{
    cout << "1. Susurros" << endl;
    cout << "2. Harry Potter" << endl;
    cout << "3. Percy Jackson" << endl;
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
}
void Libro::fantasia1()
{
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
}
void Libro::fantasia2()
{
    cout << "El dia de su cumpleanios, Harry Potter descubre que es hijo de dos conocidos hechiceros," << endl;
    cout << "de los que ha heredado poderes magicos." << endl;
    cout << "Debe asistir a una famosa escuela de magia y hechiceria," << endl;
    cout << "donde entabla una amistad con dos jovenes que se convertiran en sus compañeros de aventura." << endl;
    cout << "Durante su primer año en Hogwarts, descubre que un malevolo y poderoso mago llamado Voldemort" << endl;
    cout << "esta en busca de una piedra filosofal que alarga la vida de quien la posee." << endl;
}
void Libro::fantasia3()
{
    cout << "Objeto de burlas por inventarse historias fantasticas," << endl;
    cout << "ni siquiera el mismo acaba de creerselas hasta el dia que" << endl;
    cout << "los dioses del Olimpo le revelan la verdad: Percy es nada" << endl;
    cout << "menos que un semidios, es decir, el hijo de un dios y una mortal." << endl;
}
void Libro::romance()
{
    cout << "1. A dos metros de ti" << endl;
    cout << "2. La raiz cuadrada del verano" << endl;
    cout << "3. El principe roto" << endl;
    cout << "4. Buenos dias princesa" << endl;
    cout << "5 .Canciones para Paula" << endl;
    cout << "6. Algo tan sencillo como tuitear te quiero" << endl;
    cout << "7. El club de los corazones solitarios" << endl;

}
void Libro::gotico()
{
    cout << "1. El cuervo" << endl;
    cout << "2. El retrato de Dorin Gray" << endl;
    cout << "3. El castllo de otranto" << endl;
    cout << "4. Vathek" << endl;
    cout << "5. Los elixires del diablo" << endl;
    cout << "6. La torre de los siete jorobados" << endl;
    cout << "7. Melmoth el errabundo" << endl;
}

/*
void Libro::mostrar_libros()
{
    romance();
    fantasia();
    drama();
    gotico();

}
*/

