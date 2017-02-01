#pragma once
#include "Viewer.h"
#include "Picture.h"

class SimpleViewer :public Viewer
{
public:
	virtual void ViewPicture(Picture *picture);
	
};
