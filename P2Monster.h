#pragma once
#include <iostream>

using namespace std;

class P2Monster {

private:

	int p2MaxHealth;
	int p2CurrentHealth;
	int p2DamageTaken;
	int p2Defence;
	int p2BaseDamage;
	int p2Skill1Damage;
	int p2Skill2Damage;
	int p2Skill3Damage;
	int p2Skill1Wait;
	int p2Skill2Wait;
	int p2Skill3Wait;

	int p2Deflect;

	int p2stats[12];
	int x;


public:



	P2Monster(int s0, int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int s11) {

		setStats(s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);

	}

	void setStats(int S0, int S1, int S2, int S3, int S4, int S5, int S6, int S7, int S8, int S9, int S10, int S11) {

		p2MaxHealth = S0;
		p2CurrentHealth = S1;
		p2DamageTaken = S2;
		p2Defence = S3;
		p2BaseDamage = S4;
		p2Skill1Damage = S5;
		p2Skill2Damage = S6;
		p2Skill3Damage = S7;
		p2Skill1Wait = S8;
		p2Skill2Wait = S9;
		p2Skill3Wait = S10;

		p2Deflect = S11;

	}

	int createP2Stats() {

		p2stats[0] = p2MaxHealth;
		p2stats[1] = p2CurrentHealth;
		p2stats[2] = p2DamageTaken;
		p2stats[3] = p2Defence;
		p2stats[4] = p2BaseDamage;
		p2stats[5] = p2Skill1Damage;
		p2stats[6] = p2Skill2Damage;
		p2stats[7] = p2Skill3Damage;
		p2stats[8] = p2Skill1Wait;
		p2stats[9] = p2Skill2Wait;
		p2stats[10] = p2Skill3Wait;
		p2stats[11] = p2Deflect;

		for (x = 0; x < 12; x++) {

			cout << p2stats[x] << " ";

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