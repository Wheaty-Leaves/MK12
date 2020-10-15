all: classes
#Compile test for classes
classes: Player.cpp Fighter.cpp Belmont.cpp 
	g++ -std=c++11 -c Player.cpp Fighter.cpp Belmont.cpp 

#compile test for main
main: Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp Saitama.cpp Shaggy.cpp main.cpp
	clang++ -std=c++11 Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp Saitama.cpp Shaggy.cpp main.cpp -o game

#compile test main with no random or user interface
clean: 
	rm -f game *.o