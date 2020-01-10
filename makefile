#Author: Michael Kochka
#Date: December 1st
#Description: A makefile that compiles the final project. 
CXX = g++
CXXFLAGS = -g
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -std=c++0x

OBJS = finalMain.o cell.o character.o validation.o space.o monster.o armor.o crossbow.o exit.o gameFlow.o guard.o helmet.o item.o key.o longsword.o object.o player.o 

SRCS =  finalMain.cpp cell.cpp character.cpp validation.cpp space.cpp monster.cpp armor.cpp crossbow.cpp exit.cpp gameFlow.cpp guard.cpp helmet.cpp item.cpp longsword.cpp object.cpp player.cpp

HDRS =  character.hpp cell.hpp validation.hpp space.hpp monster.hpp armor.hpp crossbow.hpp exit.hpp gameFlow.hpp guard.hpp helmet.hpp item.hpp key.hpp longsword.hpp object.hpp player.hpp 


dungeon: ${OBJS} ${HDRS}
	${CXX} ${CXXFLAGS} ${SRCS} -o  dungeon

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm *.o dungeon