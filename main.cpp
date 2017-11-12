#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "FCyberRunner.h"

//void CreateTeam(FCyberRunner Runner);
void AssignClass(FCyberRunner& Runner);
void CreateStats(FCyberRunner& Runner);
void FiteBoiStats(FCyberRunner& Runner);
void HackerManStats(FCyberRunner& Runner);
void ShootLadStats(FCyberRunner& Runner);
void SneakManStats(FCyberRunner& Runner);
// void PopulateInventory(FCyberRunner Runner);

int main()
{	
	constexpr int TEAM_MAX = 4;
	
	FCyberRunner Team1[TEAM_MAX];
	FCyberRunner Team2[TEAM_MAX];
	
	srand(time(NULL));
	for(int i = 0; i <= TEAM_MAX - 1; i++)
	{
		AssignClass(Team1[i]);
		CreateStats(Team1[i]);
		
	}
	for(int i = 0; i <= TEAM_MAX - 1; i++)
	{
		AssignClass(Team2[i]);
		CreateStats(Team2[i]);
	}
	std::cout << "This is a test game!" << std::endl;
	std::cout << std::endl;
	std::cout << "Your Team Stats are as follows: " << std::endl;
	std::cout << "Dude 1      " << "Dude 2      " << "Dude 3      " << "Dude 4      " << std::endl;
	std::cout << Team1[0].GetTypeName() << "      " << Team1[1].GetTypeName() << "      " << Team1[2].GetTypeName() << "      " << Team1[3].GetTypeName() << std::endl;
	std::cout << "HP:  " << Team1[0].GetHP() << "      " << Team1[1].GetHP() << "      " << Team1[2].GetHP() << "      " << Team1[3].GetHP() << std::endl;
	std::cout << "STR: " << Team1[0].GetSTR() << "      " << Team1[1].GetSTR() << "      " << Team1[2].GetSTR() << "      " << Team1[3].GetSTR() << std::endl;
	std::cout << "ACC: " << Team1[0].GetACC() << "      " << Team1[1].GetACC() << "      " << Team1[2].GetACC() << "      " << Team1[3].GetACC() << std::endl;
	std::cout << "COM: " << Team1[0].GetCOM() << "      " << Team1[1].GetCOM() << "      " << Team1[2].GetCOM() << "      " << Team1[3].GetCOM() << std::endl;
	std::cout << "SPD: " << Team1[0].GetSPD() << "      " << Team1[1].GetSPD() << "      " << Team1[2].GetSPD() << "      " << Team1[3].GetSPD() << std::endl;
	std::cout << "ARM: " << Team1[0].GetARM() << "      " << Team1[1].GetARM() << "      " << Team1[2].GetARM() << "      " << Team1[3].GetARM() << std::endl;
	std::cout << "EVA: " << Team1[0].GetEVA() << "      " << Team1[1].GetEVA() << "      " << Team1[2].GetEVA() << "      " << Team1[3].GetEVA() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "You'll be facing a team of: " << std::endl;
	std::cout << Team2[0].GetTypeName() << std::endl;
	std::cout << Team2[1].GetTypeName() << std::endl;
	std::cout << Team2[2].GetTypeName() << std::endl;
	std::cout << Team2[3].GetTypeName() << std::endl;
	
	/*srand(time(NULL));

	FCyberRunner BoiOne;
	FCyberRunner BoiTwo;
	FCyberRunner BoiThree;
	FCyberRunner BoiFour;

	AssignClass(BoiOne);
	CreateStats(BoiOne);
	AssignClass(BoiTwo);
	CreateStats(BoiTwo);
	AssignClass(BoiThree);
	CreateStats(BoiThree);
	AssignClass(BoiFour);
	CreateStats(BoiFour);

	std::cout << "Your Team Stats are as follows: " << std::endl;
	std::cout << "Dude 1      " << "Dude 2      " << "Dude 3      " << "Dude 4      " << std::endl;
	std::cout << BoiOne.GetTypeName() << "      " << BoiTwo.GetTypeName() << "      " << BoiThree.GetTypeName() << "      " << BoiFour.GetTypeName() << std::endl;
	std::cout << "HP:  " << BoiOne.GetHP() << "      " << BoiTwo.GetHP() << "      " << BoiThree.GetHP() << "      " << BoiFour.GetHP() << std::endl;
	std::cout << "STR: " << BoiOne.GetSTR() << "      " << BoiTwo.GetSTR() << "      " << BoiThree.GetSTR() << "      " << BoiFour.GetSTR() << std::endl;
	std::cout << "ACC: " << BoiOne.GetACC() << "      " << BoiTwo.GetACC() << "      " << BoiThree.GetACC() << "      " << BoiFour.GetACC() << std::endl;
	std::cout << "COM: " << BoiOne.GetCOM() << "      " << BoiTwo.GetCOM() << "      " << BoiThree.GetCOM() << "      " << BoiFour.GetCOM() << std::endl;
	std::cout << "SPD: " << BoiOne.GetSPD() << "      " << BoiTwo.GetSPD() << "      " << BoiThree.GetSPD() << "      " << BoiFour.GetSPD() << std::endl;
	std::cout << "ARM: " << BoiOne.GetARM() << "      " << BoiTwo.GetARM() << "      " << BoiThree.GetARM() << "      " << BoiFour.GetARM() << std::endl;
	std::cout << "EVA: " << BoiOne.GetEVA() << "      " << BoiTwo.GetEVA() << "      " << BoiThree.GetEVA() << "      " << BoiFour.GetEVA() << std::endl;
	*/
	return 0;
}

void AssignClass(FCyberRunner& Runner)
{
	
	int Num = rand() % 4 + 1;
	
	Runner.SetType(Num);
}

void CreateStats(FCyberRunner& Runner)
{
	int TypeNum = Runner.GetType();
	
	switch(TypeNum) {
		case 1: Runner.SetName("FiteBoi"); FiteBoiStats(Runner); break;
		case 2: Runner.SetName("Hackerman"); HackerManStats(Runner); break;
		case 3: Runner.SetName("ShootLad"); ShootLadStats(Runner); break;
		case 4: Runner.SetName("SneakyBird"); SneakManStats(Runner); break;
	}
}

void FiteBoiStats(FCyberRunner& Runner)
{
	int CA = rand() % 100 + 60; // 60 - 100 possible
	int STR = rand() % 25 + 75; // 75 - 100 possible
	int ACC = rand() % 40 + 40; // 40 - 80 possible
	int COM = rand() % 40 + 1;  // 1 - 40 possible
	int SPD = rand() % 15 + 35; // 35 - 50 possible
	int HP = (STR / 2);
	
	Runner.SetCA(CA);
	Runner.SetSTR(STR);
	Runner.SetACC(ACC);
	Runner.SetCOM(COM);
	Runner.SetSPD(SPD);
	Runner.SetEVA(SPD, CA);
	Runner.SetARM(5, CA);
	Runner.SetHP(HP);
}
	
void HackerManStats(FCyberRunner& Runner)
{
	int CA = rand() % 40 + 15;  // 15 - 40 possible
	int STR = rand() % 40 + 1;  // 1 - 40 possible
	int ACC = rand() % 40 + 40; // 40 - 80 possible
	int COM = rand() % 25 + 75;// 75 - 100 possible
	int SPD = rand() % 40 + 40; // 40 - 80 possible
	int HP = (STR / 2);
	
	Runner.SetCA(CA);
	Runner.SetSTR(STR);
	Runner.SetACC(ACC);
	Runner.SetCOM(COM);
	Runner.SetSPD(SPD);
	Runner.SetEVA(SPD, CA);
	Runner.SetARM(2, CA);
	Runner.SetHP(HP);
}

void ShootLadStats(FCyberRunner& Runner)
{
	int CA = rand() % 20 + 20;   // 20 - 40 possible ???
	int STR = rand() % 35 + 15;  // 15 - 50 possible
	int ACC = rand() % 20 + 80; // 80 - 100 possible
	int COM = rand() % 20 + 20;  // 20 - 40 possible
	int SPD = rand() % 35 + 45;  // 45 - 80 possible
	int HP = (STR / 2);
	
	Runner.SetCA(CA);
	Runner.SetSTR(STR);
	Runner.SetACC(ACC);
	Runner.SetCOM(COM);
	Runner.SetSPD(SPD);
	Runner.SetEVA(SPD, CA);
	Runner.SetARM(3, CA);
	Runner.SetHP(HP);
}

void SneakManStats(FCyberRunner& Runner)
{
	int CA = rand() % 20 + 80;   // 80 - 100 possible
	int STR = rand() % 25 + 75;  // 75 - 100 possible
	int ACC = rand() % 40 + 40;   // 40 - 80 possible
	int COM = rand() % 25 + 45;   // 70 - 45 possible
	int SPD = rand() % 40 + 60;  // 60 - 100 possible
	int HP = (STR / 2);
	
	Runner.SetCA(CA);
	Runner.SetSTR(STR);
	Runner.SetACC(ACC);
	Runner.SetCOM(COM);
	Runner.SetSPD(SPD);
	Runner.SetEVA(SPD, CA);
	Runner.SetARM(5, CA);
	Runner.SetHP(HP);
}
