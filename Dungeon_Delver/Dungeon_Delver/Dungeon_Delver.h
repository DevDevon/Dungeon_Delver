#pragma once
#include <string>

using FString = std::string;

enum AvailableClasses
{
	Invalid,
	info,
	Warrior,
	Fighter,
	Wizard,
	Ranger,
	Cleric,
	Paladin,
	Tamer
};

class UserInfo
{
public:
	UserInfo();
	~UserInfo();

	void setUName(FString);
	void setCName(FString);
	void setStats(int);

	AvailableClasses checkClassValidity(FString);


private:
	FString uName, cName, CharClass;
	int cStr, cInt, cDef, CMDef, cDex, cAgi, cLevel, cExpToLevel, intClass;

	int cStats[7];

	FString cClasses[7]{ "Warrior","Fighter","Wizard","Ranger","Cleric","Paladin","Tamer" };

	//Total of 100 points
	//Warrior 0, Fighter 1, Wizard 2, Ranger 3, Cleric 4, Paladin 5, Tamer 6
	//cStr, cInt, cDef, CMDef, cDex, cAgi
	int sClasses[7][7]{ {0,40,0,20,10,20,10},{1,20,0,30,20,10,20},{2,10,30,10,20,10,20},{3,20,10,10,10,30,20},{4,10,30,10,20,10,20},{5,20,20,20,20,10,10},{6,10,20,10,10,30,20} };

};

