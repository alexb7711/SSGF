TARGET = Example
CC     = g++
FLAGS  = -lsfml-graphics -lsfml-window -lsfml-system
WFLAGS = -Wall -g

SRC    = main.cpp \
	 ../src/Game.cpp \
	 ../src/State/DefaultState.cpp \
	 ../src/GUI/Button.cpp

OBJ    = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(WFLAGS) $(FLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) $(TARGET)
