#include "entry.h"
#include <string>
#include <vector>
using namespace std;

Entry::Entry(string w, int l)
{
   word=w;
   count=1;
   linenumber.push_back(l);
}

ostream& operator<<(ostream& out, Entry e)
{
   out<<"The word "<<e.word<<" appears "<<e.count;
   if (e.count==1)
   {
      out<<" time on line ";
   }
   else
   {
      if (e.linenumber.size()==1) 
      {
         out<<" times on line ";
      }
      else
      {
         out<<" times on lines ";
      }
   }
   for (int j = 0; j < e.linenumber.size(); j++)
   {
      if (j>0)
      {
         out<<",";
      }
      out<<e.linenumber[j];
   }
   out<<endl;
}


string Entry::getWord()
{
   return word;
  
}
int Entry::incrementCount()
{
   return count+=1;
}
void Entry::addLine(int line)
  
{
   if( linenumber.back() != line)
   {
      linenumber.push_back(line);
      incrementCount();
   }
   else
   {
      incrementCount();
   }

}

