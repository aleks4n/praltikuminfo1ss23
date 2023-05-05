//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIII
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

void rechnungenI(int iErste, int iZweite)
{
	int iSumme = iErste + iZweite;
	int iQuetient = iErste / iZweite;

//	std::cout << "The Summation of your numbers is" + iSumme + "\n";
//	std::cout << "The divisoin of your numbers is" + iQuetient + "\n";
}



void rechnungenD(int iErste, int iZweite)
{
	double dSumme = iErste + iZweite;
	double dQuetient = iErste / iZweite;

//	std::cout << "The Summation of your numbers is" + dSumme + "\n";
//	std::cout << "The divisoin of your numbers is" + dQuetient + "\n";
}

void rechnungenTypCasting(int iErste, int iZweite)
{
	double dSumme = (double) iErste + (double) iZweite;
	double dQuetient = (double) iErste / (double) iZweite;

//	std::cout << "The Summation of your numbers is" + dSumme + "\n";
//	std::cout << "The divisoin of your numbers is" + dQuetient + "\n";
}



void name(std::string sVorname, std::string sNachname)
{
std::string sVornameName = sVorname + sNachname;
std::string sNameVorname = sNachname + sVorname;

std::cout<< sVornameName;
std::cout<< sNameVorname;
}

void namezahl(std::string sVorname)
{
for(int i=0;i<2;i++)
{
//std::cout<< "Positon "<<i+1<<". letter"
//			<<(int) sVorname[i]<65 ? (int)sVorname[i]%19+1 : (int)sVorname[i]%65+1 ;
}

}



int punkt5()
{
int iFeld[2] = {1,2};
std::cout<<iFeld;
int spielfeld [2][3]= {{1,2,3},{4,5,6}};
for(int j =0;j<2;j++){
	for(int i =0;i<3;i++)
	{
		std::cout<<spielfeld[j][i] + " ";
	}
	std::cout<<"\n";
}
int iZweite = 1;
return 0;
}





int main()
{
	int iErste = 0;
	int iZweite = 0;

	// Hier folgt Ihr eigener Code

		std::cin>>iErste;
		std::cin>>iZweite;

	    int iSumme = iErste + iZweite;
		int iQuetient = iErste / iZweite;

		std::cout << "The Summation of your numbers is: " << iSumme << "\n";
		std::cout << "The division of your numbers is: " << iQuetient << "\n";



		double dSumme = iErste + iZweite;
		double dQuetient = iErste / iZweite;

			std::cout << "The Summation of your numbers is: " << dSumme << "\n";
			std::cout << "The division of your numbers is: " << dQuetient << "\n";


		double dSummeCast = (double) iErste + (double) iZweite;
		double dQuetientCast = (double) iErste / (double) iZweite;

		            std::cout << "The Summation of your numbers is: " << dSummeCast << "\n";
					std::cout << "The division of your numbers is: " << dQuetientCast << "\n";









std::cout<<"\n\n";

std::string sVorname;
std::string sNachname;

std::cin>>sVorname;
std::cin>>sNachname;

std::string sVornameName = sVorname + sNachname;
std::string sNameVorname = sNachname + sVorname;

std::cout<< sVornameName<<"\n";
std::cout<< sNameVorname<<"\n";


std::cout<<"\n\n";

	{
		int iFeld[2] = {1,2};
		std::cout<<iFeld[0]<<" "<<iFeld[1]<<"\n";
		int spielfeld [2][3]= {{1,2,3},{4,5,6}};
		for(int j =0;j<2;j++){
			for(int i =0;i<3;i++)
			{
				std::cout<<spielfeld[j][i]<<" ";
			}
			std::cout<<"\n";
		}
		int iZweite = 1;
		std::cout<<iZweite;
	}



	std::cout<<iZweite<<"\n";

	int erste = sVorname[0];
	int zweite = sVorname[1];


	std::cout<<erste<<"\n";
	std::cout<<zweite<<"\n";


	if(erste>=97){std::cout<<"Alphabetic position: "<<erste%97+1<<"\n";}
	else{std::cout<<"Alphabetic position: "<<erste%65+1<<"\n";}

	if(zweite>=97){std::cout<<"Alphabetic position: "<<zweite%97+1<<"\n";}
	else{std::cout<<"Alphabetic position: "<<zweite%65+1<<"\n";}





	return 0;

}
