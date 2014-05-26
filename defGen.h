/**
 * \file defGen.h
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy abstrakcyjnej defGen
 */

#ifndef DEFGEN_H
#define DEFGEN_H

using namespace std;

/**
 * \class defGen
 * \author Arkadiusz Blasiak, Piotr Jaromin
 * \date 23.05.2014
 * \brief Deklaracja klasy abstrakcyjnej defGen
 */
class defGen{
protected:
   int poczatek; ///< poczatek zakresu
   int koniec; ///< koniec zakresu
   int liczba; ///< wygenerowana losowa liczba
   int ziarno; ///< ziarno generatora
   string nazwa; ///< nazwa generatora
   int* tab; ///< tablica przechowujaca wylosowane liczby
   int ilosc; ///<ilosc wylosowanych liczb

   /// \brief Metoda ustawiajaca poczatek zakresu
   ///
   /// \param _pocz - poczatek zakresu
   void uPocz(int);

   /// \brief Metoda ustawiajaca koniec zakresu
   ///
   /// \param _kon - koniec zakresu
   void uKoniec(int);

   /// \brief Matoda alokujaca tablice tab
   ///
   /// \brief return nothing
   void rezerwuj();
   
   /// \brief Metoda dealokujaca tablice tab
   void zwolnij();

public:

   /// \brief Konstruktor bezparametrowy
   defGen(void);

   /// \brief Konstruktor parametrowy
   ///
   /// \param _pocz - poczatek zakresu
   /// \param _kon - koniec zakresu
   /// \param _ilosc - ilosc liczb;
   /// \param _ziarno - ziarno generatora
   /// \param _nazwa - nazwa generatora
   defGen(int, int, int, int, string);

   /// \brief Destruktor
   virtual ~defGen(void);

   void wypisz_nazwe();

   /// \brief Metoda pobierajaca zakres (dlugosc) losowania
   ///
   /// \return Zakres
   int pZakres(void) const;

   /// \brief Metoda ustawiajaca poczatek i koniec zakresu
   ///
   /// \param _pocz - poczatek zakresu
   /// \param _kon - koniec zakresu
   void uZakres(int, int);
   
   /// \brief Metoda zwracajaca poczatek zakresu
   ///
   /// \brief return poczatek zakresu
   int pPocz();

   /// \brief Metoda ustawiajaca ziarno generatora
   ///
   /// \param _ziarno - ziarno generatora
   virtual void uZiarno(int);

   /// \brief Metoda ustawiajaca nazwe generatora
   ///
   /// \param _nazwa - nazwa generatora
   void uNazwaGen(string);

   /// \brief Metoda generujaca liczbe pseudolosowa
   virtual int generuj(void) = 0;
   
   /// \brief Metoda wpisujaca liczbe pseudolosowa do tablicy
   void wpisz();

   /// \brief Metoda wypisujaca jedna liczbe
   /// \param _index- miejsce w tablicy
   /// \brief return liczbe przeudolosowa
   int wypisz_jedno(int);
   
   /// \brief Metoda wypisujaca ilosc wylosowanych liczb
   /// \brief return ilosc
   int wypisz_ilosc();

   /// \brief Metoda wypisujaca wygenerowana liczbe na podany strumien
   ///
   /// \param str - strumien wyjsciowy, domyslnie cout
   void wypisz(ostream& = cout);
   
};

#endif // DEFGEN_H


