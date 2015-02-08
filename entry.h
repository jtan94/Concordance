#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <vector>
#include <iostream>
class Entry
{
   private:
     std::string word;
     int count;
     std::vector<int> linenumber;
   public:
      Entry(std::string word, int l);
      std::string getWord();
      int incrementCount();
      void addLine(int line);
      friend std::ostream& operator<<(std::ostream& out, Entry e);       
};
#endif
