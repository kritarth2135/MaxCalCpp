maxcalc: maxcalc.o numbers.o
	g++ maxcalc.o numbers.o -o maxcalc.app

clean:
	rm -f maxcalc.o numbers.o