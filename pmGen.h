/**
 * \file pmGen.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy pmGen
 */
#ifndef PMGEN_H
#define PMGEN_H

#include "defGen.h"

/**
 * \class pmGen
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Klasa implementujaca PRNG algorytmem Parka-Millera
 */
class pmGen : public defGen {
private:
   int mnoznik;
   int modulo;
public:

   /// \brief Konstruktor bezparametrowy
   pmGen(void);

   /// \brief Konstruktor parametrowy
   ///
   /// \param _pocz - poczatek zakresu
   /// \param _kon - koniec zakresu
   /// \param _ilosc -ilosc liczb
   /// \param _ziarno - ziarno generatora
   /// \param _mnoz - mnoznik
   /// \param _modulo - modul
   pmGen(int, int, int, int, int, int);

   /// \brief Destruktor
   virtual ~pmGen(void);

   /// \brief Metoda generujaca liczbe pseudolosowa
   ///
   /// \brief return liczba pseudolosowa
   int generuj(void);

   /// \brief Metoda ustawiajaca mnoznik
   ///
   /// \param _mnoz - mnoznik
   void uMnoz(int);

   /// \brief Metoda ustawaiajaca modulo
   ///
   /// \param _modulo - modulo
   void uMod(int);

};

#endif // PMGEN_H
