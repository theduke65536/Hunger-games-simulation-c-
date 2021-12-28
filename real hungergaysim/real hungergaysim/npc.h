#pragma once

#include <iostream>

using namespace std;



class Npc {
public:
	int N_VIEW_RADIUS, N_STRENGTH, N_MAX_MOVEMENT_RADIUS, N_WIN_EXPONENT, N_STRENGTH_GAIN_DIVISOR, N_COUNT, N_X, N_Y;
	bool N_CUSTOM_NAMES;

	Npc() {};

	Npc(int aN_VIEW_RADIUS, 
		int aN_MAX_MOVEMENT_RADIUS, 
		int aN_WIN_EXPONENT, 
		int aN_STRENGTH, 
		bool aN_CUSTOM_NAMES, 
		int aN_STRENGTH_GAIN_DIVISOR, 
		int aN_COUNT, 
		int m_x, 
		int m_y);

	void default_naming();

	int initialize_coords(int m_x, int m_y);



};