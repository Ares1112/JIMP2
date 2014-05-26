/**
 * \file defGen.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy abstrakcyjnej defGen
 */

#include "aghInclude.h"

defGen::defGen(void){}

defGen::defGen(int _pocz, int _kon, int _ilosc, int _ziarno, string _nazwa){
   uZakres(_pocz, _kon);
   uZiarno(_ziarno);
   uNazwaGen(_nazwa);
   ilosc=_ilosc;
   tab=NULL;
   rezerwuj();
}

defGen::~defGen(void)
{
   zwolnij();
}

void defGen::uZakres(int _pocz, int _kon){
   if(_pocz >= _kon){
      throw aghException(0, "Nieprawidlowy zakres", __FILE__, __LINE__);
   } else {
      uPocz(_pocz);
      uKoniec(_kon);
   }
}

void defGen::wypisz_nazwe()
{
	cout<<nazwa<<endl;
}

int defGen::pZakres(void) const{
   return koniec - poczatek + 1;
}

void defGen::uPocz(int _pocz){
   poczatek = _pocz;
}

int defGen::pPocz()
{
   return poczatek;
}


void defGen::uKoniec(int _kon){
   koniec = _kon;
}

void defGen::uZiarno(int _ziarno){
    if(_ziarno < 0) {
      throw aghException(0, "Nieprawidlowa wartosc ziarna", __FILE__, __LINE__);
   } else {
      ziarno = _ziarno;
   }
}

void defGen::uNazwaGen(string _nazwa){
   nazwa = _nazwa;
}

void defGen::rezerwuj()
{
   if(tab!=NULL)
      throw aghException(0, "miejsce zarezerwowane", __FILE__, __LINE__);
   else
      tab = new int[ilosc];

   for(int i=0; i<ilosc; i++)
      tab[i] = 0;
}

void defGen::zwolnij()
{
   if(tab!=NULL)
      delete[] tab;
   tab=NULL;
}

void defGen::wpisz()
{
   for(int i=0; i<ilosc; i++)
   {
      tab[i]=generuj();
   }
}

void defGen::wypisz(ostream& str)
{
   str<<nazwa<<endl;
   for(int i=0; i<ilosc; i++)
      str<<tab[i]<<" ";
   str<<endl;
}

int defGen::wypisz_ilosc()
{
   return ilosc;
}

int defGen::wypisz_jedno(int index)
{
   if(index>=0 && index<ilosc)
   return tab[index];
   else
      throw aghException(0, "zly index", __FILE__, __LINE__);
}

