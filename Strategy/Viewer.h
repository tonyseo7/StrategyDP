#pragma once
#include "Picture.h"

class Viewer
{
public:
	virtual void ViewPicture(Picture *picture) = 0;
};
