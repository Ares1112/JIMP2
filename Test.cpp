/**
 * \file Test.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy abstrakcyjnej Test
 */

#include "aghInclude.h"

Test::Test (int _ilosc, defGen* gen)
{
   generator= gen;
   wpisz_ilosc(_ilosc);
   wynik=NULL;
}

Test::~Test()
{
   zwolnij();
   generator = NULL;
}

void Test::wpisz_gen(defGen* gen)
{
   if(generator == NULL)
      throw aghException(0, "zly generator", __FILE__, __LINE__);
   else
   {
      generator=gen;
      zwolnij();
      rezerwuj(powt);
   }
}

void Test::wpisz_ilosc(int _ilosc)
{
   if(_ilosc<0 || _ilosc > generator->wypisz_ilosc()   )
     throw aghException(0, "Zla ilosc", __FILE__, __LINE__);
   else
      ilosc=_ilosc;
}

double Test::wypisz_wynik(int miej)
{
   if(miej>=powt || wynik==NULL)
      throw aghException(0, "nie zaalokowana pamiec", __FILE__, __LINE__);
   else
      return wynik[miej];
}


void Test::wypisz(ostream& wysw)
{
   if(powt>1)
      for(int i=0; i<powt; i++)
      {
         wysw <<i+1<<": "<<wypisz_wynik(i)<<endl;
      }
   else if(powt==1)
      wysw <<wypisz_wynik(0)<<endl;
   else
      throw aghException(0, "Nieprawidlowy zakres", __FILE__, __LINE__);
}


void Test::rezerwuj(int miejsca)
{
   if(wynik != NULL || miejsca<0)
     throw aghException(0, "Pamiec juz zarezerwowana", __FILE__, __LINE__);
   else
   {

      wynik = new double[miejsca];

      for(int i = 0; i < powt; i++)
         wynik[i] = 0;
   }
}


void Test::zwolnij()
{
   if(wynik != NULL)
      delete[] wynik;
   wynik = NULL;

}
