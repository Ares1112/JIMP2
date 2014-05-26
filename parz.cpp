/**
 * \file parz.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy Parz
 */

#include "aghInclude.h"

Parz::Parz( int _ilosc, defGen* gen) : Test( _ilosc, gen) 
{
   powt=2;
   rezerwuj(powt);
}

Parz::~Parz() 
{
   zwolnij();
}

void Parz::testuj()
{
   for(int i=0; i<ilosc; i++)
   {
      int liczb=generator->wypisz_jedno(i);
      if(liczb%2 == 0)
         wynik[0]++;
      else  
         wynik[1]++;
   }
}

void Parz::wypisz(ostream& str)
{
   str << "Wyniki testu parzysto_nieparzystego (1-parzyste, 2-nieparzyste):" << endl;
   Test::wypisz(str);
}
