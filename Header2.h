#pragma once
#include <iostream>

using namespace std;

class Pmonster {

private:

	int p1MaxHealth;
	int p1CurrentHealth;
	int p1DamageTaken;
	int p1Defence;
	int p1BaseDamage;
	int p1Skill1Damage;
	int p1Skill2Damage;
	int p1Skill3Damage;
	int p1Skill1Wait;
	int p1Skill2Wait;
	int p1Skill3Wait;

	int p1Deflect;

	int stats[12];
	int x;

public:

	Pmonster(int s0, int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int s11) {
	
		setStats(s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
	
	}

	void setStats(int S0, int S1, int S2, int S3, int S4, int S5, int S6, int S7, int S8, int S9, int S10, int S11) {
	
		p1MaxHealth = S0;
		p1CurrentHealth = S1;
		p1DamageTaken = S2;
		p1Defence = S3;
		p1BaseDamage = S4;
		p1Skill1Damage = S5;
		p1Skill2Damage = S6;
		p1Skill3Damage = S7;
		p1Skill1Wait = S8;
		p1Skill2Wait = S9;
		p1Skill3Wait = S10;

		p1Deflect = S11;

	}

	int createP1Stats() {
	
		stats[0] = p1MaxHealth;
		stats[1] = p1CurrentHealth;
		stats[2] = p1DamageTaken;
		stats[3] = p1Defence;
		stats[4] = p1BaseDamage;
		stats[5] = p1Skill1Damage;
		stats[6] = p1Skill2Damage;
		stats[7] = p1Skill3Damage;
		stats[8] = p1Skill1Wait;
		stats[9] = p1Skill2Wait;
		stats[10] = p1Skill3Wait;
		stats[11] = p1Deflect;

		for (x = 0; x < 12; x++) {
		
			cout << stats[x] << " ";
		
		}
	
		return 0;
	}

	/*int updateStats() {
	
		stats[0] = 
		stats[1] = 
		stats[2] = 
		stats[3] = 
		stats[5] = 
		stats[6] = 
		stats[7] = 
		stats[8] = 
		stats[9] = 
		stats[10] = 
		stats[11] = 
	
	}*/


};