CC = g++ --std=c++11

all: a.out

a.out: main.o operator.o shape.o sphere.o cuboid.o cone.o  
	${CC} main.o operator.o shape.o sphere.o cuboid.o cone.o 

main.o: main.cpp operator.h shape.h sphere.h cuboid.h cone.h  
	${CC} -c main.cpp

operator.o: operator.cpp operator.h  shape.h
	${CC} -c operator.cpp

shape.o: shape.cpp shape.h 
	${CC} -c shape.cpp

sphere.o: sphere.cpp sphere.h shape.h
	${CC} -c sphere.cpp

cuboid.o: cuboid.cpp cuboid.h
	${CC} -c cuboid.cpp

cone.o: cone.cpp cone.h
	${CC} -c cone.cpp


.PHONY: clean
clean:
	rm *.o 
	rm a.out
