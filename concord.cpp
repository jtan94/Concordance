#include "concordance.h"
#include "entry.h"
#include <string>
#include <iostream>
using namespace std;

Concordance::Concordance()
{
}

int Concordance::search(string aword)
{
   int found = -1;
   for ( int ix = 0; ix < entries.size(); ix++)
   {
      if (entries[ix].getWord() ==aword)
      {
         found= ix;
      }
   }
   return found;
}
ostream& operator<<(ostream& out, Concordance c)
{
   for (int k = 0; k < c.entries.size(); k++)
   {
      out<<c.entries[k];
   }
}

void Concordance::addWord(string aword, int line)
{   
   int position = search(aword);
   if (position < 0)
   {
      Entry newWord(aword, line);
      entries.push_back(newWord);
   }
   else
   {
      entries[position].addLine(line);
   }
}
void Concordance::selectionsort()
{
   for (int i = 0; i < entries.size(); i++)
   {
      int j;
      int min_index = i;
      for (j= i+1; j < entries.size(); j++)
      {
         if (entries[j].getWord() < entries[min_index].getWord())
         {
            min_index = j;
         }
      }
      if (min_index != i)
      {
         Entry tempEntry = entries[i];
         entries[i] = entries[min_index];
         entries[min_index] = tempEntry;
      }
   }
}   
