/**
 * \file cppGen.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy cppGen
 */

#include "aghInclude.h"

cppGen::cppGen(void) : defGen(0, 1, 0, "Generator wbudowany"){
   srand(ziarno);
}

cppGen::cppGen(int _pocz, int _kon, int _ziarno) : defGen(_pocz, _kon, _ziarno, "Generator wbudowany"){
   srand(ziarno);
}

cppGen::~cppGen(void){}

void cppGen::generuj(){
   liczba = (rand() % pZakres()) + poczatek;
}
