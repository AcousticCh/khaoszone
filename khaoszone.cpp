// khaoszone.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "C:\Users\Katie\source\repos\khaoszone\P1Monster.h"
#include "C:\Users\Katie\source\repos\khaoszone\P2Monster.h"
#include "C:\Users\Katie\source\repos\khaoszone\khaoszone\startBattle.h"
using namespace std;


int p1race;
int p2race;

int *p1raceP = &p1race;
int *p2raceP = &p2race;



int main()
{	
	
	chooseMonsters();

	switch (p1race) {

	case 1: { P1Monster elf1(80, 80, 0, 4, 12, 1, 2, 3, 1, 2, 3, 4); break; }
	case 2: { P1Monster orc1(100, 100, 0, 7, 10, 1, 2, 3, 1, 2, 3, 4); break; }
	case 3: { P1Monster fairy1(70, 70, 0, 2, 15, 1, 2, 3, 1, 2, 3, 4); break; }
	default: {cout << "error"; }

	}

	switch (p2race) {
	case 1: { P2Monster elf2(80, 80, 0, 4, 12, 1, 2, 3, 1, 2, 3, 4); break; }
	case 2: { P2Monster orc2(100, 100, 0, 7, 10, 1, 2, 3, 1, 2, 3, 4); break; }
	case 3: { P2Monster fairy2(70, 70, 0, 2, 15, 1, 2, 3, 1, 2, 3, 4); break; }
	default: {cout << "error"; }

	}
	 
		
	return 0;
}


