EE = @echo
CXX = @g++
RM = @rm -f
#HF = src/STS_header.h


STS_OUT: main.o readConf.o readCities.o readRoutes.o optimalRoutes.o graph.o show.o readInput.o
	$(EE) "Linking all object files..."
	$(CXX) main.o readConf.o readCities.o readRoutes.o optimalRoutes.o graph.o show.o readInput.o -o $@
	$(EE) "Done..."

main.o: main.cpp STS_header.h
	$(EE) "Building main object file..."
	$(CXX) -c $<
	

readConf.o: readConf.cpp STS_header.h
	$(EE) "Reading configuration file..."
	$(CXX) -c $<

graph.o: graph.cpp STS_header.h
	$(EE) "Building graph..."
	$(CXX) -c $<

readCities.o: readCities.cpp STS_header.h
	$(EE) "Reading cities data..."
	$(CXX) -c $<

readRoutes.o: readRoutes.cpp STS_header.h
	$(EE) "Reading routes data..."
	$(CXX) -c $<

optimalRoutes.o: optimalRoutes.cpp STS_header.h
	$(EE) "Computing optimal routes..."
	$(CXX) -c $<

show.o: show.cpp STS_header.h
	$(EE) "Making functions to show..."
	$(CXX) -c $<

readInput.o: readInput.cpp STS_header.h
	$(EE) "Reading input file..."
	$(CXX) -c $<
clean:
	@rm -f *.o *~
