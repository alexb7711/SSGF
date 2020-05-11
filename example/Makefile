TARGET = example
CC     = g++
FLAGS  = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system 
WFLAGS = -Wall -g

SRC    = main.cpp                                   \
	 ../src/Game.cpp                            \
	 ../src/GUI/Button.cpp                      \
	 ../src/GUI/CenterStackWidget.cpp           \
	 ../src/GUI/FPSMonitor.cpp                  \
	 ../src/Objects/NPC/Dragon.cpp		    \
	 ../src/Objects/ObjectHandler.cpp	    \
	 ../src/State/DefaultState.cpp              \
	 ../src/ResourceHandler/ResourceHandler.cpp \
	 # ../src/Objects/AnimatedSprite.cpp	    \

OBJ    = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(WFLAGS) $(FLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) $(TARGET)
