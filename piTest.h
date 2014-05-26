/**
 * \file piTest.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy piTest
 */

#ifndef PITEST_H_
#define PITEST_H_

/**
 * \class piTest
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Klasa implementujaca algorytm testowania metoda pi
 */
class piTest: public Test 
{
   public:
   /// \brief Konstruktor parametrowy
   ///
   /// \param _ilosc - ilosc liczb
   /// \param gen - testowany generator
   piTest(int, defGen*);

   /// \brief Destruktor
   virtual ~piTest(void);

   /// \brief Metoda testujaca generator 
   void testuj(void);

   /// \brief Metoda wypisujaca wygenerowana liczbe na podany strumien
   ///
   /// \param str - strumien wyjsciowy, domyslnie cout
   void wypisz(ostream& = cout);
};

#endif
