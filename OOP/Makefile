DVDArrayPDriver: DVDArrayP.o DVDArrayPDriver.o DVD.o
	g++ -g -o DVDArrayPDriver DVD.o DVDArrayP.o DVDArrayPDriver.o

DVD.o: DVD.cpp DVD.h
	g++ -g -c DVD.cpp

DVDArrayP.o: DVDArrayP.cpp DVDArrayP.h
	g++ -g -c DVDArrayP.cpp

DVDArrayPDriver.o: DVDArrayPDriver.cpp DVDArrayP.h
	g++ -g -c DVDArrayPDriver.cpp

clean:
	rm -rf DVDArrayPDriver *.o
