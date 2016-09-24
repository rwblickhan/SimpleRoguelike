CC=g++
CFLAGS=-std=c++11 -c -Wall
CHARDEPS=Character.o PlayerCharacter.o
TILEDEPS=Tile.o WallTile.o WaterTile.o
GAMEOBJECTDEPS=GameObject.o $(CHARDEPS) $(TILEDEPS)
UIDEPS=Frame.o Screen.o

all: model ui
	$(CC) $(CFLAGS) -o rll $(GAMEOBJECTDEPS) $(UIDEPS)

model: GameObject.o character tile

GameObject.o:
	$(CC) $(CFLAGS) GameObject/GameObject.cpp

character: $(CHARDEPS)

Character.o:
	$(CC) $(CFLAGS) GameObject/Character.cpp

PlayerCharacter.o: PlayerCharacter.cpp
	$(CC) $(CFLAGS) GameObject/PlayerCharacter.cpp

tile: $(TILEDEPS)

Tile.o:
	$(CC) $(CFLAGS) GameObject/Tile.cpp

WallTile.o:
	$(CC) $(CFLAGS) GameObject/WallTile.cpp

WaterTile.o:
	$(CC) $(CFLAGS) GameObject/WaterTile.cpp

ui: $(UIDEPS)

Frame.o:
	$(CC) $(CFLAGS) UI/Frame.cpp

Screen.o:
	$(CC) $(CFLAGS) UI/Screen.cpp

clean:
	rm *.o make
