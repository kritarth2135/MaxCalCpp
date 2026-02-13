maxcalc: maxcalc.o realnumber.o my_math.o
	g++ maxcalc.o realnumber.o my_math.o -o maxcalc.app

clean:
	rm -f *.o
