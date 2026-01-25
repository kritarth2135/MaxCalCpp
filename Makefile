maxcalc: maxcalc.o realnumber.o
	g++ maxcalc.o realnumber.o -o maxcalc.app

clean:
	rm -f *.o
