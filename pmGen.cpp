/**
 * \file pmGen.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy pmGen
 */

#include "aghInclude.h"

pmGen::pmGen(void) : defGen(0, 1, 1, 0, "Generator Parka-Millera"){
   uMod(1);
   uMnoz(0);
}

pmGen::pmGen(int _pocz, int _kon, int _ilosc, int _ziarno, int _mnoz, int _modulo) : defGen(_pocz, _kon, _ilosc, _ziarno, "Generator Parka-Millera"){
   uMod(_modulo);
   uMnoz(_mnoz);
}

pmGen::~pmGen(void){}

void pmGen::uMod(int _modulo){
   modulo = _modulo;
}

void pmGen::uMnoz(int _mnoz){
   mnoznik = _mnoz;
}

int pmGen::generuj(){
   liczba = (((mnoznik*ziarno) % modulo));
   if(liczba > 0){
      ziarno = liczba;
   } else {
      ziarno = -liczba;
   }
   liczba = liczba%pZakres()+poczatek;
   return liczba;
}
