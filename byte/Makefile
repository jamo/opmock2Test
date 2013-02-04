CPPFLAGS=-O0  -ggdb
#-I
#OBJECTS = fizzbuzz.o fizzbuzz_test.o main.o ../../support/opmock.o
OBJECTS = byte.o test.o main.o opmock.o


all: Test
	./test

Test: $(OBJECTS)
	gcc -o test $(OBJECTS)

clean:
	-rm -f $(OBJECTS)
	-rm -f  *.xml

realclean: clean

#coverage:
#	lcov --directory ./ --capture --output-file app.info
#	genhtml -o coverage_report app.info
