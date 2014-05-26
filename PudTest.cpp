/**
 * \file PudTest.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy PudTest
 */

#include "aghInclude.h"

PudTest::PudTest( int _ilosc, defGen* gen) : Test( _ilosc, gen) 
{
   powt=4;
   rezerwuj(powt);
}

PudTest::~PudTest() 
{
   zwolnij();
}

void PudTest::testuj(void) 
{
   int liczb;
   double dl = ( generator->pZakres() )/4;  //dlugosc przedzialu
   int pocz = generator->pPocz();
   for(int i=0; i<ilosc; i++)
   {
      liczb=generator->wypisz_jedno(i);
   
   if( pocz+dl > liczb )
      wynik[0]++;
   else if(pocz + 2*dl> liczb)
      wynik[1]++;
   else if(pocz + 3*dl> liczb)
      wynik[2]++;
   else
      wynik[3]++;
   }

}

void PudTest::wypisz(ostream& str)
{
   str << "Wyniki testu pudelkowego (1, 2, 3, 4 - pudelka, traktowane jako rowne przedzialy):" << endl;
   Test::wypisz(str);
}
