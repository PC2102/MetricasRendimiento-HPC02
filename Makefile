###############################################################
#Fichero que automatiza el proceso de compilacion por separado.
#Autor: Pedro Cardenas
#Fecha: 01/08/2022
#Tema: Compilacion por separado
###############################################################

GCC = g++
FLAGS = -ansi -pedantic -Wall

CFLAGS = -lm

PROGS = bmi_project

bmi_project:
	$(GCC) $(FLAGS) $@.cpp -c
	$(GCC) $(FLAGS) bmi_lib.cpp -c
	$(GCC) $(FLAGS) -o $@ $@.o bmi_lib
	
clean:
	$(RM) *.o $(PROGS)
