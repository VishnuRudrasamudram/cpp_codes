CXX = @g++
EE = @echo

out: main.o square.o
	$(EE) "Linking object files..."
	$(CXX) main.o square.o -o $@
	$(EE) "Done..."
main.o: main.cpp header.h
	$(EE) "Building main object..."
	$(CXX) -c $<
square.o: square.cpp header.h
	$(EE) "Building functions object..."
	$(CXX) -c $<
clean:
	$(EE) "Cleaning..."
	@rm -f *.o *~
	$(EE) "Done..."
