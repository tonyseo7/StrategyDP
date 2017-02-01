#include "Picture.h"

Picture::Picture(string name, int tone, int brightness, int saturation)
{
	this->name = name;
	this->tone = tone;
	this->brightness = brightness;
	this->saturation = saturation;
}

int Picture::GetTone()const
{
	return tone;
}

int Picture::GetBrightness()const
{
	return brightness;
}


int Picture::GetSaturation()const
{
	return saturation;
}


string Picture::GetName()const
{
	return name;
}