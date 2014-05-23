#include "aghInclude.h"

int main(void){
   pmGen a(-100, 100, 10 ,75,65537);
   for(int i =0; i<100; i++){

   a.generuj();
   a.wypisz(cout);
   }
   return 0;
}
