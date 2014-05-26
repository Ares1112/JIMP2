/**
 * \file mtGen.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy mtGen
 */
#ifndef MTGEN_H
#define MTGEN_H

#include "defGen.h"

/**
 * \class mtGen
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Klasa implementujaca PRNG algorytmem Mersenne Twister
 */
class mtGen: public defGen{
private:
   static int i; ///< Licznik
   unsigned int stan[624]; ///< Tablica ze stanem generatora

   /// \brief Metoda inicjalizujaca tablice (stan) generatora
   void iniGen(void);

public:

   /// \brief Konstruktor bezparametrowy
   mtGen(void);

   /// \brief Konstruktor parametrowy
   ///
   /// \param _pocz - poczatek zakresu
   /// \param _kon - koniec zakresu
   /// \param _ilosc - ilosc liczb
   /// \param _ziarno - ziarno generatora
   mtGen(int, int, int, int = time(NULL));

   /// \brief Destruktor
   virtual ~mtGen(void);

   /// \brief Metoda generujaca liczby pseudolosowe
   int generuj(void);

   /// \brief Metoda ustawiajaca ziarno generatora
   ///
   /// \param _ziarno - ziarno generatora
   void uZiarno(int);


};

#endif // MTGEN_H
