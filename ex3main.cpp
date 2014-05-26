#include "aghInclude.h"

int main(void)
{
   ofstream plik;
   plik.open("plik.txt", ios::trunc);
   
   pmGen a(-100, 100, 10, 3500 ,75, 65537);  //pocz, kon, ilosc, ziarno, mnoznik, modulo
   a.wpisz();
   a.wypisz();
   a.wypisz(plik);
   cout<<endl;
   
   PudTest pud(10, &a);
   pud.testuj();
   pud.wypisz();
   pud.wypisz(plik);
   cout<<endl;

   piTest pi(10, &a);
   pi.testuj();
   pi.wypisz();
   pi.wypisz(plik);
   cout<<endl;

   Parz p(10, &a);
   p.testuj();
   p.wypisz();
   p.wypisz(plik);
   cout<<endl;

   cppGen b(-100, 100, 10, 10);  //pocz, kon, ilosc, ziarno
   b.wpisz();
   b.wypisz();
   b.wypisz(plik);
   cout<<endl;
  
   pud.wpisz_gen(&b);
   pud.testuj();
   pud.wypisz();
   pud.wypisz(plik);
   cout<<endl;
   
   pi.wpisz_gen(&b);
   pi.testuj();
   pi.wypisz();
   pi.wypisz(plik);
   cout<<endl;

   p.wpisz_gen(&b);
   p.testuj();
   p.wypisz();
   p.wypisz(plik);
   cout<<endl;

   mtGen c(-100, 100, 10, 160);
   c.wpisz();
   c.wypisz();
   c.wypisz(plik);

   pud.wpisz_gen(&c);
   pud.testuj();
   pud.wypisz();
   pud.wypisz(plik);
   cout<<endl;
   
   pi.wpisz_gen(&c);
   pi.testuj();
   pi.wypisz();
   pi.wypisz(plik);
   cout<<endl;

   p.wpisz_gen(&c);
   p.testuj();
   p.wypisz();
   p.wypisz(plik);
   cout<<endl;

   plik.close();
}
