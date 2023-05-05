//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIII
// Versuch 04: Einf�hrung Klasse
//
// Datei:  Vektor.cpp
// Inhalt: Sourcedatei der Klasse Vektor
//////////////////////////////////////////////////////////////////////////////

#include "Vektor.h"

Vektor::Vektor(double inX, double inY, double inZ) : x(inX), y(inY), z(inZ)
{

}

Vektor::~Vektor()
{

}

/**
 * @brief Function printing the components of the vector 
 */
void Vektor::ausgabe() const
{
    std::cout << "X-Komponente: " << x << std::endl;
    std::cout << "Y-Komponente: " << y << std::endl;
    std::cout << "Z-Komponente: " << z << std::endl << std::endl;
}


double Vektor::laenge() const
{
	return sqrt(x*x + y*y + z*z);
}


double Vektor::skalarProd(const Vektor& input) const
{
	double result = 0.0;

	   result = input.x * x +input.y * y +input.z * z;
	   return result;
}

Vektor Vektor::sub(const Vektor& input) const
{
Vektor subvec(0,0,0);
subvec.x = x - input.x;
subvec.y = y - input.y;
subvec.z = z - input.z;

return subvec;
}


double Vektor::winkel(const Vektor& input) const
{

    double dot = skalarProd(input);
    double mag1 = laenge();
    double mag2 = sqrt(input.x*input.x+input.y*input.y+input.z*input.z);
    return std::acos(dot / (mag1 * mag2));
}



void Vektor::rotiereUmZ(double rad)
{
	// calculate matrix product with rotation-matrix
	// save old x value to calculate rotation correctly
	double new_x = x*cos(rad) - y*sin(rad);
	double new_y = x*sin(rad) + y*cos(rad);
	this->x = new_x;
	this->y = new_y;
}





