/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIII
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{

	struct Person
	{
		std::string sNachname;
		std::string sVorname;
		int iGeburtsjahr;
		int iAlter;
	};

	Person nBenutzer;

	std::cout<<"Enter Your Name:"; std::cin>>nBenutzer.sVorname;
	std::cout<<"Enter Your Surname:"; std::cin>>nBenutzer.sNachname;
	std::cout<<"Enter Your Birthyear:"; std::cin>>nBenutzer.iGeburtsjahr;
	std::cout<<"Enter Your Age:"; std::cin>>nBenutzer.iAlter;

	Person nKopieenzeln;
	nKopieenzeln.iAlter = nBenutzer.iAlter;
	nKopieenzeln.sNachname = nBenutzer.sNachname;
	nKopieenzeln.sVorname = nBenutzer.sVorname;
	nKopieenzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
	Person nKopiegesamt = nBenutzer;


	std::cout<<nKopieenzeln.iAlter<<"  Kopie Einzeln \n";
	std::cout<<nKopiegesamt.iAlter<<" Kopie Gesamt \n";


    return 0;
    
}
