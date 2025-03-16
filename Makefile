CXX = g++
CXXFLAGS = -std=c++20 -Wall -Werror -I src -I gtest -O0 -fsanitize=address,undefined

all: ladder dijkstras student_gtests

ladder: src/ladder_main.o src/ladder.o
	$(CXX) $(CXXFLAGS) -o ladder src/ladder_main.o src/ladder.o

dijkstras: src/dijkstras_main.o src/dijkstras.o
	$(CXX) $(CXXFLAGS) -o dijkstras src/dijkstras_main.o src/dijkstras.o

student_gtests: gtest/student_gtests.o gtest/gtestmain.o src/ladder.o src/dijkstras.o
	$(CXX) $(CXXFLAGS) gtest/student_gtests.o gtest/gtestmain.o src/ladder.o src/dijkstras.o -lgtest -lgtest_main -pthread -o student_gtests

src/ladder_main.o: src/ladder_main.cpp src/ladder.h
	$(CXX) $(CXXFLAGS) -c src/ladder_main.cpp -o src/ladder_main.o

src/ladder.o: src/ladder.cpp src/ladder.h
	$(CXX) $(CXXFLAGS) -c src/ladder.cpp -o src/ladder.o

src/dijkstras_main.o: src/dijkstras_main.cpp src/dijkstras.h
	$(CXX) $(CXXFLAGS) -c src/dijkstras_main.cpp -o src/dijkstras_main.o

src/dijkstras.o: src/dijkstras.cpp src/dijkstras.h
	$(CXX) $(CXXFLAGS) -c src/dijkstras.cpp -o src/dijkstras.o

gtest/student_gtests.o: gtest/student_gtests.cpp src/ladder.h src/dijkstras.h
	$(CXX) $(CXXFLAGS) -c gtest/student_gtests.cpp -o gtest/student_gtests.o

gtest/gtestmain.o: gtest/gtestmain.cpp
	$(CXX) $(CXXFLAGS) -c gtest/gtestmain.cpp -o gtest/gtestmain.o

clean:
	rm -f src/*.o gtest/*.o ladder dijkstras student_gtests
