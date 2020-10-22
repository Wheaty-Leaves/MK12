all: classTesting
#Compile test for classes
classes: Player.cpp Fighter.cpp Belmont.cpp 
	g++ -std=c++11 -c Player.cpp Fighter.cpp Belmont.cpp 

#compile test for main
main: Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp main.cpp
	g++ -std=c++11 Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp main.cpp -o game

run:
	./game

#compile test main with no random or user interface
clean: 
	rm -f game *.o
	rm -f game *.exe

tests: classTesting mainTesting test1 test2

#compile to test the the attack functions of all classes
classTesting: Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp classTesting.cpp
	g++ -std=c++11 Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp classTesting.cpp -DNOUI_H -DNORANDOM_H -o test

test1: # testing attack functions ./test
	./test < classTestingInput1.txt | diff - classTestingExpected1.txt # attack_player()
	./test < classTestingInput2.txt | diff - classTestingExpected2.txt # fighter attack_class()
	./test < classTestingInput3.txt | diff - classTestingExpected3.txt # belmont attack_character1()
	./test < classTestingInput4.txt | diff - classTestingExpected4.txt # belmont attack_character2()
	./test < classTestingInput5.txt | diff - classTestingExpected5.txt # Scorpion attack_character1()
	./test < classTestingInput6.txt | diff - classTestingExpected6.txt # Scorpion attack_character2()
	./test < classTestingInput7.txt | diff - classTestingExpected7.txt # ranger attack_class()
	./test < classTestingInput8.txt | diff - classTestingExpected8.txt # JohnWick attack_characte1()
	./test < classTestingInput9.txt | diff - classTestingExpected9.txt # JohnWick attack_character2()
	./test < classTestingInput10.txt | diff - classTestingExpected10.txt # SubZero attack_character1()
	./test < classTestingInput11.txt | diff - classTestingExpected11.txt # SubZero attack_character2()
	./test < classTestingInput12.txt | diff - classTestingExpected12.txt # testing bad input manager

mainTesting: Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp main.cpp
	g++ -std=c++11 Player.cpp Fighter.cpp Belmont.cpp Scorpion.cpp Ranger.cpp JohnWick.cpp SubZero.cpp main.cpp -DNOUI_H -DNORANDOM_H -o game1

test2: # testing main file ./game
	./game1 < mainTestingInput1.txt | diff - mainTestingOutput1.txt # testing player 1 victory
	./game1 < mainTestingInput2.txt | diff - mainTestingOutput2.txt # testing player 2 victory
