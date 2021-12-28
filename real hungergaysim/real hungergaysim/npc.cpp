#include <iostream>
#include "npc.h"

using namespace std;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


Npc::Npc(int aN_VIEW_RADIUS, int aN_MAX_MOVEMENT_RADIUS, int aN_WIN_EXPONENT, int aN_STRENGTH, bool aN_CUSTOM_NAMES, int aN_STRENGTH_GAIN_DIVISOR, int aN_COUNT, int m_x, int m_y) :
N_VIEW_RADIUS(aN_VIEW_RADIUS),
N_MAX_MOVEMENT_RADIUS(aN_MAX_MOVEMENT_RADIUS),
N_WIN_EXPONENT(aN_WIN_EXPONENT),
N_STRENGTH(aN_STRENGTH),
N_CUSTOM_NAMES(aN_CUSTOM_NAMES),
N_STRENGTH_GAIN_DIVISOR(aN_STRENGTH_GAIN_DIVISOR),
N_COUNT(aN_COUNT)
N_X(rand()%m_x)
N_Y(rand()%m_y)
{

	if (N_CUSTOM_NAMES) {
		custom_name();
	}
}
void Npc::default_naming() {
	string name;
	int full_iter = 0;

	for (int i = 0; i < N_COUNT; i++) {
		if (i>26) {
			i -= 26;
			full_iter++;
		}

		if (full_iter != 0) {
			name = "NPC: " + alphabet[i] + full_iter;
		}
		else {
			name = "NPC: " + alphabet[i];


		}
	}
}
int Npc::initialize_coords(int m_x, int m_y) {

}



