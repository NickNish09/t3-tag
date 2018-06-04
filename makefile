CC = g++
LIBS = -std=c++11
BIN = bin
INCLUDE = include
OBJ = obj
SRC = src

all: professor.o escola.o grafo.o main

professor.o: $(SRC)/Professor.cpp $(INCLUDE)/Professor.h
	$(CC) $(LIBS) -c $(SRC)/Professor.cpp -I $(INCLUDE) -o $(OBJ)/professor.o

escola.o: $(SRC)/Escola.cpp $(INCLUDE)/Escola.h
	$(CC) $(LIBS) -c $(SRC)/Escola.cpp -I $(INCLUDE) -o $(OBJ)/escola.o

grafo.o: $(SRC)/Grafo.cpp $(INCLUDE)/Grafo.h
	$(CC) $(LIBS) -c $(SRC)/Grafo.cpp -I $(INCLUDE) -o $(OBJ)/grafo.o

main:
	$(CC) $(LIBS) main.cpp $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main

run:
	./$(BIN)/main

clean: 
	rm $(OBJ)/*.o
	rm $(OBJ)/Debug/*.o
	rm $(BIN)/*
	rm $(BIN)/Debug/*
