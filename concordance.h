#ifndef CONCORD_H
#define CONCORD_H
#include <string>
#include <vector>
#include <iostream>
#include "entry.h" 


class Concordance
{
   private:
      std::vector<Entry> entries;
      int search(std::string aword);
   public:
      Concordance(); 
      void addWord(std::string aword, int line);
      void selectionsort();
      friend std::ostream& operator<<(std::ostream& out, Concordance c);
      
};
#endif

