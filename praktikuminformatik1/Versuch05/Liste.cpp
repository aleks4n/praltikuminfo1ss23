//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIII
//////////////////////////////////////////////////////////////////////////////

#include "Liste.h"

/**
 * @brief Standardkonstruktor, der eine leere Liste erstellt
 */
Liste::Liste(): front(nullptr), back(nullptr)
{
}

/**
 * @brief Hinzufuegen eines neuen Listenelements am Ende der Liste.
 *
 * @param pData Zeiger auf ein Objekt der Klasse Student
 * @return void
 */
void Liste::pushBack(Student pData)
{
    ListenElement* neuesElement = new ListenElement(pData, nullptr, nullptr);

    if (front == nullptr)                                       // Liste leer?
    {
        front = neuesElement;
        back = neuesElement;
    }
    else
    {
        back->setNext(neuesElement);
        neuesElement->setPrev(back);

    }
}

/**
 * @brief Entfernen eines Listenelements am Anfang der Liste.
 *
 * @return void
 */
void Liste::popFront()
{
    ListenElement* cursor = front;

    if (front == back)                                       // Liste enth�lt nur ein Listenelement
    {
        delete front;                                        // Listenelement l�schen
        front = nullptr;
        back = nullptr;
    }
    else
    {
        front = front->getNext();
        cursor->setPrev(nullptr);
        cursor->setNext(nullptr);
        delete cursor;
    }
}

/**
 * @brief Pruefen, ob die Liste leer ist
 *
 * @return wenn leer true, sonst false
 */
bool Liste::empty()
{
    if(front == nullptr)
    {
        return true;
    }
    return false;
}

/**
 * @brief Gibt die Daten des ersten Listenelements in der Liste zurueck
 *
 * @return Zeiger auf ein Objekt der Klasse Student
 */
Student Liste::dataFront()
{
    return front->getData();
}

/**
 * @brief Ausgabe der Liste vom ersten bis zum letzten Element.
 *
 * @return void
 */
void Liste::ausgabeVorwaerts() const
{
    ListenElement* cursor = front;

    while (cursor != nullptr)
    {
    	cursor->getData().ausgabe();
        cursor = cursor->getNext();
    }
}


void Liste::ausgabeRueckwaerts() const
{
    ListenElement* cursor = back;

   while (cursor != nullptr)
   {
    	cursor->getData().ausgabe();
        cursor = cursor->getPrev();
    }
}



bool Liste::delete_byMatrikel(unsigned int matr)
{
	ListenElement* cursor = front;

	// cursor to the desired element
	while(cursor->getData().getMatNr() != matr)
	{
		if(cursor == NULL)
			return false;
		cursor = cursor->getNext();
	}

	// only one element
	if(front == back)
	{
		front = NULL;
		back = NULL;
	}
	else if(cursor == front) // element is head
	{
		front = cursor->getNext();
		cursor->getNext()->setPrev(cursor->getPrev());
	}
	else if(cursor == back) // element is tail
	{
		cursor->getPrev()->setNext(cursor->getNext());
		back = cursor->getPrev();
	}
	else // element is in list
	{
		cursor->getPrev()->setNext(cursor->getNext());
		cursor->getNext()->setPrev(cursor->getPrev());
	}

	delete cursor;
	return true;
}




