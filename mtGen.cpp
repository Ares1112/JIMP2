/**
 * \file mtGen.cpp
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Definicja klasy mtGen
 */
#include "aghInclude.h"

int mtGen::i = 0;

mtGen::mtGen(void) : defGen(0, 1, 1, 0, "Generator Mersenne Twister"){
   iniGen();

}

mtGen::mtGen(int _pocz, int _kon, int _ilosc, int _ziarno) : defGen(_pocz,_kon, _ilosc,_ziarno, "Generator Mersenne Twister"){
   iniGen();

}

mtGen::~mtGen(void){}

void mtGen::iniGen(void){
   unsigned long long x;

   stan[0] = ziarno;
   for(int i = 1; i < 623; i++)
   {
     x = stan[i-1];
     x = (23023 * x) & 0xffffffffull;
     x = (    3 * x) & 0xffffffffull;
     stan[i] = x;
   }
}

int mtGen::generuj(void){
   const unsigned int MA[] = {0,0x9908b0df};
   long int y;
   int i1,i397;

   i1      = i +   1; if(  i1 > 623) i1 = 0;
   i397    = i + 397; if(i397 > 623) i397 -= 624;
   y       = (stan[i] & 0x80000000) | (stan[i1] & 0x7fffffff);
   stan[i] = stan[i397] ^ (y >> 1) ^ MA[y & 1];
   y       = stan[i];
   y       ^=  y >> 11;
   y       ^= (y <<  7) & 0x9d2c5680;
   y       ^= (y << 15) & 0xefc60000;
   y       ^=  y >> 18;
   i       = i1;
   liczba = (y % pZakres()) + poczatek;
   return liczba;
}

void mtGen::uZiarno(int _ziarno) {
   if(_ziarno < 0) {
      throw aghException(0, "Nieprawidlowa wartosc ziarna", __FILE__, __LINE__);
   } else {
      ziarno = _ziarno;
      iniGen();
   }
}
