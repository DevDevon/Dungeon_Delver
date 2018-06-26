#include "Dungeon_Delver.h"


UserInfo::UserInfo() {
	cLevel = 1;
	cExpToLevel = 5;
}


UserInfo::~UserInfo() {}

void UserInfo::setUName(FString name) { uName = name; }

void UserInfo::setCName(FString name) { cName = name; }

void UserInfo::setStats(int intClass) {
	//Warrior 0, Fighter 1, Wizard 2, Ranger 3, Cleric 4, Paladin 5, Tamer 6
	//cStr, cInt, cDef, CMDef, cDex, cAgi

	for (int i : sClasses[intClass])
		cStats[i] = sClasses[intClass][i];
	return;
}

AvailableClasses UserInfo::checkClassValidity(FString uClass) {

	if (uClass == "info") {
		return AvailableClasses::info;
	} else if (uClass == "Warrior") {
		intClass = 0;
		CharClass = cClasses[0];
		return AvailableClasses::Warrior;
	} else if (uClass == "Fighter") {
		intClass = 1;
		CharClass = cClasses[1];
		return AvailableClasses::Fighter;
	} else if (uClass == "Wizard") {
		intClass = 2;
		CharClass = cClasses[2];
		return AvailableClasses::Wizard;
	} else if (uClass == "Cleric") {
		intClass = 3;
		CharClass = cClasses[3];
		return AvailableClasses::Cleric;
	} else if (uClass == "Paladin") {
		intClass = 4;
		CharClass = cClasses[4];
		return AvailableClasses::Paladin;
	} else if (uClass == "Ranger") {
		intClass = 5;
		CharClass = cClasses[5];
		return AvailableClasses::Ranger;
	} else if (uClass == "Tamer") {
		intClass = 6;
		CharClass = cClasses[6];
		return AvailableClasses::Tamer;
	} else {
		return AvailableClasses::Invalid;
	}

	return AvailableClasses::Invalid;
}
