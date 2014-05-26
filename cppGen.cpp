/**
 * \file cppGen.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy cppGen
 */

#include "aghInclude.h"

cppGen::cppGen(void) : defGen(0, 1, 1, 0, "Generator wbudowany"){
   srand(ziarno);
}

cppGen::cppGen(int _pocz, int _kon, int _ilosc, int _ziarno) : defGen(_pocz, _kon, _ilosc, _ziarno, "Generator wbudowany"){
   srand(ziarno);
}

cppGen::~cppGen(void)
{
   zwolnij();
}

int cppGen::generuj()
{
   liczba = (rand() % pZakres()) + poczatek;
   return liczba;
}


