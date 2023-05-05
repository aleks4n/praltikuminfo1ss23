///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIII
// Versuch 2.3: Felder
//
// Datei:  Verschuesselung.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

using namespace std;

#include <iostream>
#include <string>


string verschluesseln(char schluessel[2][26], string wort)
{
	// Hier folgt Ihr Code
	for(int i=0;i<wort.length();i++)
	{
		for(int j=0;j<26;j++)
		{
		if(wort[i]==schluessel[0][j])
		{
		wort[i]=schluessel[1][j];
		break;
        }

        }

	}
	return wort;


}

string entschluesseln(char schluessel[2][26], string wort)
{
	// Hier folgt Ihr Code

	for(int i=0;i<wort.length();i++)
	{
		for(int j=0;j<26;j++)
		{
		if(wort[i]==schluessel[1][j])
		{
		wort[i]=schluessel[0][j];
		}

		}
	}





	return wort;
}

int main()
{
	char tabelle[2][26] =
	{
			{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
			{'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'}
	};


	string wort = "AMBIK";
	char wortchar[wort.length()];
	strcpy(wortchar, wort.c_str());

    cout<<verschluesseln(tabelle, wort);
    cout<<entschluesseln(tabelle,verschluesseln(tabelle, wort));


	// Hier folgt Ihr Code

	return 0;
}
