/**
 * \file parz.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy Parz
 */

#ifndef PARZ_H
#define PARZ_H

/**
 * \class Parz
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Klasa implementujaca algorytm testowania parzysto_nieparzystego
 */
class Parz: public Test
{
public:
   /// \brief Konstruktor parametrowy
   ///
   /// \param _ilosc - ilosc liczb
   /// \param gen - testowany generator
   Parz(int, defGen*);

   /// \brief Destruktor
   virtual ~Parz();

   /// \brief Metoda testujaca generator
   void testuj();

   /// \brief Metoda wypisujaca wygenerowana liczbe na podany strumien
   ///
   /// \param str - strumien wyjsciowy, domyslnie cout
   void wypisz(ostream& = cout);
}; 


#endif
