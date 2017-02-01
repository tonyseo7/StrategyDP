#pragma once
#include "common.h"

class Picture
{
	string name;
	int tone;
	int brightness;
	int saturation;

public:
	Picture(string name, int tone, int brightness, int saturation);

	int GetTone()const;
	int GetBrightness()const;
	int GetSaturation()const;
	string GetName()const;
};
