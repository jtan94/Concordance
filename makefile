concordmain: concordmain.o concordance.o entry.o
	g++ -o concordmain concordmain.o concordance.o entry.o
entry.o: entry.cpp entry.h
	g++ -c -std=c++11 -o entry.o entry.cpp
concordance.o: concord.cpp concordance.h 
	g++ -c -std=c++11 -o concordance.o concord.cpp
concordmain.o: concordmain.cpp
	g++ -c -std=c++11 -o concordmain.o concordmain.cpp
