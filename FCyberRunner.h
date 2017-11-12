#pragma once
#include <string>
//#include "FInventory.h"


class FCyberRunner
{
public:
	
	void SetType(int TypeNum);
	void SetName(std::string TypeName);
	void SetCA(int CA);
	void SetSTR(int STR);
	void SetACC(int ACC);
	void SetCOM(int COM);
	void SetSPD(int SPD);
	void SetEVA(int spd, int cab); // Evasion is the product of a function using Speed and CombatAbility
	void SetARM(int ArmorRate, int cab); // ArmorClass is the product of a function using Armor Type(inventory) and CombatAbility
	void SetHP(int HPNum); // HP is STR / 2
	int GetType();
	std::string GetTypeName(); 
	int GetCA();
	int GetSTR();
	int GetACC();
	int GetCOM();
	int GetSPD();
	int GetEVA();
	int GetARM();
	int GetHP();
	//void AddInventory();
	//void RemoveInventory();
	
	
private:
	std::string UnitType = "";
	int TypeCode = 0;
	int CombatAbility = 0;
	int Strength = 0;
	int Accuracy = 0;
	int Computers = 0;
	int Speed = 0;
	int Evasion = 0;
	int ArmorClass = 0;
	int HitPoints = 0;
	//FInventory PersonalInv;
};
