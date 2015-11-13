EE = @echo
CXX = @g++
REM = @rm -f
FN = src/functions.h
find_good: main.cpp stringop.o goodnumop.o
	$(EE) "Linking all object files..."
	$(CXX) main.cpp stringop.o goodnumop.o -o $@
	$(EE) "Done..."

#main.o: main.cpp functions.h
#	$(EE) "Building main object file..."
#	$(CXX) -c $<

goodnumop.o: src/goodnumop.cpp
	$(EE) "Building good number operations object file..."
	$(CXX) -c $<

stringop.o: src/stringop.cpp
	$(EE) "Building string operations object file..."
	$(CXX) -c $<
clean:
	$(EE) "Cleaning..."
	$(REM) *.o *.~
	$(EE) "Done..."
