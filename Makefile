# https://www.cs.colostate.edu/~cs157/LectureMakefile.pdf

CXX= g++
CXXFLAGS= -std=c++17
SFMLFLAGS= -lsfml-graphics -lsfml-window -lsfml-system
OBJFILES= bin/main.o bin/licence.o bin/mainClass.o bin/mainDraw.o bin/mainUpdate.o bin/mainActions.o
TARGET= bin/3d-2d.elf


all: $(TARGET)


$(TARGET): $(OBJFILES)
	@echo FINAL BINARY:
	$(CXX) $(CXXFLAGS) $(SFMLFLAGS) $(OBJFILES) -o $(TARGET)
	

bin/main.o: src/main.cpp
	@echo MAIN CPP:
	$(CXX) $(CXXFLAGS) src/main.cpp -c -o bin/main.o

bin/licence.o: src/licence.cpp
	@echo LICENCE:
	$(CXX) $(CXXFLAGS) src/licence.cpp -c -o bin/licence.o
	
	
bin/mainClass.o: src/mainClass.cpp src/mainClass.h
	@echo MAIN CLASS:
	$(CXX) $(CXXFLAGS) src/mainClass.cpp -c -o bin/mainClass.o


bin/mainDraw.o: src/mainDraw.cpp src/mainClass.h
	@echo MAIN DRAW:
	$(CXX) $(CXXFLAGS) src/mainDraw.cpp -c -o bin/mainDraw.o
	
bin/mainUpdate.o: src/mainUpdate.cpp src/mainClass.h
	@echo MAIN UPDATE:
	$(CXX) $(CXXFLAGS) src/mainUpdate.cpp -c -o bin/mainUpdate.o

bin/mainActions.o: src/mainActions.cpp src/mainClass.h
	@echo MAIN ACTIONS:
	$(CXX) $(CXXFLAGS) src/mainActions.cpp -c -o bin/mainActions.o
	
clean:
	rm -f bin/*



.PHONY: clean all


