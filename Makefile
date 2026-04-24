CC = gcc
CFLAGS = -Iraylib/include -Isrc/include
LDFLAGS = -Lraylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm

SRC = $(wildcard src/*.c)
OUT = build/game.exe

all:
	if not exist build mkdir build
	$(CC) $(SRC) -o $(OUT) $(CFLAGS) $(LDFLAGS)

run: all
	./$(OUT)

clean:
	del $(OUT)