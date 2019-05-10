# Makefile

PROG = Network

# Compiler
CC = g++

# Compiler Flags
CF = -Wall -pedantic -ansi

# Library Flags
LF = -lgdi32 -lopengl32

# obj files
OBJ = main.o network_app.o block.o gatter.o

# Build commands...
# 1) Binding the program
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) $(LF)
	rm $(OBJ)

# 2) compiling the sources
%.o: src/%.cpp
	$(CC) -c $(CF) $<
