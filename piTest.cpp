/**
 * \file piTest.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy piTest
 */

#include "aghInclude.h"
piTest::piTest( int _ilosc, defGen* gen) : Test( _ilosc, gen) 
{
   powt=1;
   rezerwuj(powt);
}

piTest::~piTest() 
{
   zwolnij();
}

void piTest::testuj(void) 
{
   int r = generator->pZakres();
   int y = 0;
   int suma = 0;
   int kolo = 0;
   int i=0;
   while(suma < ilosc) 
   {
         
      int x =generator->wypisz_jedno(i)  - generator->pPocz();
      suma = suma + 1;
      if(x * x + y * y <= r * r)
         kolo++;
      y = x;
      i++;
   }
   double pi = 4.0 * kolo / suma;
   wynik[0]=pi;
}

void piTest::wypisz(ostream& str){
   str << "Wyniki testu Pi:" << endl;
   Test::wypisz(str);

}

