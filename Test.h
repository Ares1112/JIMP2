/**
 * \file Test.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy abstrakcyjnej Test
 */

#ifndef TEST_H
#define TEST_H
/**
 * \class Test
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy abstrakcyjnej Test
 */
class Test
{
protected:
   double *wynik; ///< tablica wynikow
   int powt; ///< ilosc powtorzonych testow
   defGen *generator; ///< testowany generator 
   int ilosc; //ilosc wylosowanych liczb
	
   /// \brief Metoda alokujaca pamiec
   void rezerwuj(int);

   /// \brief Metoda dealokujaca pamiec
   void zwolnij();
	
public:
   /// \brief Konstruktor parametrowy
   ///
   /// \param _ilosc - ilosc liczb
   /// \param gen - testowany generator
   Test(int, defGen*);

   /// \brief Destruktor
   virtual ~Test();

   /// \brief Metoda testujaca generator
   virtual void testuj()=0;
	
   /// \brief Metoda zamieniajaca generator
   /// \param gen - generator zastepujacy poprzedni
   void wpisz_gen(defGen*);

   /// \brief Metoda zamieniajaca  parametr ilosc
   /// \param _ilosc - ilosc wylosowanych liczb
   void wpisz_ilosc(int);
   
   /// \brief Metoda wypisujaca liczbe pseudolosowa z tablicy
   /// \brief return liczba pseudolosowa
   double wypisz_wynik(int);

   /// \brief Metoda wypisujaca wygenerowana liczbe na podany strumien
   ///
   /// \param str - strumien wyjsciowy, domyslnie cout
   virtual void wypisz(ostream& = cout);
};
#endif
