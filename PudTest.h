/**
 * \file PudTest.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy PudTest
 */

#ifndef PUDTEST_H
#define PUDTEST_H

/**
 * \class PudTest
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Klasa implementujaca algorytm testowania pudelkowego
 */
class PudTest :public Test
{
public:

   /// \brief Konstruktor parametrowy
   ///
   /// \param _ilosc - ilosc liczb
   /// \param gen - testowany generator
   PudTest(int, defGen*);
 
   /// \brief Destruktor
   virtual ~PudTest();

   /// \brief Metoda testujaca generator 
   void testuj();
   
   /// \brief Metoda wypisujaca wygenerowana liczbe na podany strumien
   ///
   /// \param str - strumien wyjsciowy, domyslnie cout
   void wypisz(ostream& = cout);

};

#endif  
