#Author: Michael Kochka
#Date: November 7th
#Description: A makefile that compiles lab fours barbarian functions. 
CXX = g++
CXXFLAGS = -g
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -std=c++0x

OBJS = combatMain.o character.o barbarian.o validation.o createCharacter.o Vampire.o medusa.o harrypotter.o bluemen.o playerTwoQueue.o playerOneQueue.o loserQueue.o 

SRCS =  combatMain.cpp character.cpp barbarian.cpp validation.cpp createCharacter.cpp Vampire.cpp medusa.cpp harrypotter.cpp bluemen.cpp playerTwoQueue.cpp playerOneQueue.cpp loserQueue.cpp

HDRS =  character.hpp barbarian.hpp validation.hpp createCharacter.hpp Vampire.hpp medusa.hpp harrypotter.hpp bluemen.hpp playerTwoQueue.hpp playerOneQueue.hpp loserQueue.hpp


combat: ${OBJS} ${HDRS}
	${CXX} ${CXXFLAGS} ${SRCS} -o  combat

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm *.o combat