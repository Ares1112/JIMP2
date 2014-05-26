/**
 * \file cppGen.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy cppGen
 */
#ifndef CPPGEN_H
#define CPPGEN_H

#include "defGen.h"

/**
 * \class cppGen
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Klasa implementujaca wbudowany PRNG c++
 */
class cppGen : public defGen {
public:

   /// \brief Konstruktor bezparametrowy
   cppGen(void);

   /// \brief Konstruktor parametrowy
   ///
   /// \param _pocz - poczatek zakresu
   /// \param _kon - koniec zakresu
   /// \param _ilosc - ilosc liczb
   /// \param _ziarno - ziarno generatora
   cppGen(int, int, int, int _ziarno = time(NULL));

   /// \brief Destruktor
   virtual ~cppGen(void);

   /// \brief Metoda generujaca liczbe pseudolosowa
   int generuj(void);
};

#endif // CPPGEN_H
