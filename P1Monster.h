#pragma once
#include <iostream>

using namespace std;

class P1Monster {

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

	int p1stats[12];
	int x;


public:

	

	P1Monster(int s0, int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int s11) {
	
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
	
		p1stats[0] = p1MaxHealth;
		p1stats[1] = p1CurrentHealth;
		p1stats[2] = p1DamageTaken;
		p1stats[3] = p1Defence;
		p1stats[4] = p1BaseDamage;
		p1stats[5] = p1Skill1Damage;
		p1stats[6] = p1Skill2Damage;
		p1stats[7] = p1Skill3Damage;
		p1stats[8] = p1Skill1Wait;
		p1stats[9] = p1Skill2Wait;
		p1stats[10] = p1Skill3Wait;
		p1stats[11] = p1Deflect;

		for (x = 0; x < 12; x++) {
		
			cout << p1stats[x] << " ";
		
		}

		return 0;
	}

	

	/*int updateStats() {
	
			stats[0] = p1MaxHealth; //Health Limit
			
			stats[1] =  stats[1] - stats[2];  //Current Health
			stats[2] = //assign to enemy dmg output
			
			stats[3] = //add to current health after each attack, defense
			
			
			stats[5] =// make a function for each skill
			stats[6] =
			stats[7] =
			stats[8] =
			stats[9] =
			stats[10] =
			stats[11] =// deflect

			return 0;
	}
	*/

};