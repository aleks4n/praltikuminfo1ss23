//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIII
// Versuch 04: Einf�hrung Klasse
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include "Vektor.h"

int main()
{

	int versuchanzahl = 0;
	Vektor platformandhumanheightmeters (0,6371000+5555.7+1.70,0);
	Vektor worldradiusmeters(0, 6371000,0);


    Vektor vector1(1, 0, 0);
    Vektor vector2(0, 1, 0);

    vector1.ausgabe();
    vector2.ausgabe();

    while(platformandhumanheightmeters.winkel(worldradiusmeters)+2*1.571-worldradiusmeters.winkel(worldradiusmeters.sub(platformandhumanheightmeters))<=1.571)
    {
    versuchanzahl++;
    worldradiusmeters.rotiereUmZ(0.001);

    }

    std::cout<<"Anzahl an versuchen: "<<versuchanzahl<<"\n";
    std::cout<<"Die Entfernungs Sie sehen kann als kilometers: "<<worldradiusmeters.sub(platformandhumanheightmeters).laenge()/100<<"\n";
    std::cout<<"Die Winkel: "<<worldradiusmeters.sub(platformandhumanheightmeters).winkel(worldradiusmeters)<<"\n";


    return 0;

}
