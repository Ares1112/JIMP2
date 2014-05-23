/**
 * \file defGen.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy abstrakcyjnej defGen
 */

#include "aghInclude.h"

defGen::defGen(void){}

defGen::defGen(int _pocz, int _kon, int _ziarno, string _nazwa){
   uZakres(_pocz, _kon);
   uZiarno(_ziarno);
   uNazwaGen(_nazwa);
}

defGen::~defGen(void){}

void defGen::uZakres(int _pocz, int _kon){
   if(_pocz >= _kon){
      throw aghException(0, "Nieprawidlowy zakres", __FILE__, __LINE__);
   } else {
      uPocz(_pocz);
      uKoniec(_kon);
   }
}

int defGen::pZakres(void) const{
   return koniec - poczatek + 1;
}

void defGen::uPocz(int _pocz){
   poczatek = _pocz;
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

void defGen::wypisz(ostream& str) const {
   str << this -> liczba << endl;
   return;
}

