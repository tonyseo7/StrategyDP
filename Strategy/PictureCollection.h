#pragma once
#include "VerifyViewer.h"
#include "SimpleViewer.h"
typedef vector<Picture *> Pictures;
typedef vector<Picture *>::const_iterator PIter;

class PictureCollection
{
	Pictures pictures;
	Viewer *viewer[2];

	int mode;

public:
	PictureCollection();
	~PictureCollection();

	void Add(Picture *picture);
	void SetMode(int mode);
	void View()const;

private:
	void ViewMode()const;
};
