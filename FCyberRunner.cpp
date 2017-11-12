#include "FCyberRunner.h"

void FCyberRunner::SetType(int TypeNum)
{
	TypeCode = TypeNum;
	return;
}

void FCyberRunner::SetName(std::string TypeName)
{
	UnitType = TypeName;
	return;
}

void FCyberRunner::SetCA(int CA)
{
	CombatAbility = CA;
	return;
}

void FCyberRunner::SetSTR(int STR)
{
	Strength = STR;
	return;
}

void FCyberRunner::SetACC(int ACC)
{
	Accuracy = ACC;
	return;
}

void FCyberRunner::SetCOM(int COM)
{
	Computers = COM;
	return;
}

void FCyberRunner::SetSPD(int SPD)
{
	Speed = SPD;
	return;
}

void FCyberRunner::SetEVA(int spd, int cab) // Evasion is the product of a function using Speed and CombatAbility
{
	Evasion = ((0.5 * cab) * spd);
	return;
}	
void FCyberRunner::SetARM(int ArmorRate, int cab) // ArmorClass is the product of a function using Armor Type(inventory) and CombatAbility
{
	ArmorClass = ArmorRate * cab;
	return;
}

void FCyberRunner::SetHP (int HPNum)
{
	HitPoints = HPNum;
	return;
}

int FCyberRunner::GetType() { return TypeCode; }
std::string FCyberRunner::GetTypeName() { return UnitType; }
int FCyberRunner::GetCA() { return CombatAbility; }
int FCyberRunner::GetSTR() { return Strength; }
int FCyberRunner::GetACC() { return Accuracy; }
int FCyberRunner::GetCOM() { return Computers; }
int FCyberRunner::GetSPD() { return Speed; }
int FCyberRunner::GetEVA() { return Evasion; }
int FCyberRunner::GetARM() { return ArmorClass; }
int FCyberRunner::GetHP() { return HitPoints; }
//void AddInventory();
//void RemoveInventory();
