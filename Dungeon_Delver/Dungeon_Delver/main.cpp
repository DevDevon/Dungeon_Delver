/*
	My goal with this is to create a simple enough text based dungeon delving game with options for classes, character gender, character name, user name, etc.
*/

#include <iostream>
#include <string>

#include "Dungeon_Delver.h"

using FString = std::string;

void createUser();
void printIntro();

//void listClasses();

UserInfo MainChar;

int main() {
	//get user info
	//get character info

	printIntro();
	createUser();
}

void printIntro() {
	std::cout << "Hello, and welcome to Dungeon Delver! Are you prepared to plumb the depths?\n";
	std::cout << "To begin we will be gathering some information and creating your character.\n";

	return;
}

void createUser() {
	FString uName;
	std::cout << "Please enter YOUR name: ";
	std::cin >> uName;
	MainChar.setUName(uName);

	FString cName;
	std::cout << "Now enter the name you wish for your character: ";
	std::cin >> cName;
	MainChar.setCName(cName);

	AvailableClasses cClass = Invalid;
	FString uClass = "";
	std::cout << "Now enter the class you wish to play, or enter \"info\" for more information: ";
	do {
		std::cin >> uClass;
		cClass = MainChar.checkClassValidity(uClass);
		switch (cClass) {
		case Invalid:
			break;
		case info:
			//listClasses();
			std::cout << "Please enter the class you wish to play: ";
			break;
		default:
			MainChar.setStats(cClass);
			break;
		}
	} while (cClass == AvailableClasses::Invalid || cClass == AvailableClasses::info);
}