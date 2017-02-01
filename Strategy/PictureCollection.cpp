#include "PictureCollection.h"

PictureCollection::PictureCollection()
{
	viewer[0] = new VerifyViewer();
	viewer[1] = new SimpleViewer();
	SetMode(0);
}

PictureCollection::~PictureCollection()
{
	delete viewer[0];
	delete viewer[1];
}

void PictureCollection::Add(Picture *picture)
{
	pictures.push_back(picture);
}


void PictureCollection::SetMode(int mode)
{
	if (mode)
	{
		this->mode = 1;
	}
	else
	{
		this->mode = 0;
	}
}


void PictureCollection::View()const
{
	ViewMode();
	PIter seek = pictures.begin();
	PIter end = pictures.end();

	for (; seek != end; ++seek)
	{
		viewer[mode]->ViewPicture(*seek);
	}

}


void PictureCollection::ViewMode()const
{

	if (mode)
	{
		cout << "간략 보기 모드" << endl;
	}
	else
	{
		cout << "자세히 보기 모드" << endl;
	}

}
