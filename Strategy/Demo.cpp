#include "PictureCollection.h"


void main()
{
	Picture *picture1 = new Picture("천안 삼거리", 100, 100, 100);
	Picture *picture2 = new Picture("언제나 능수버들", 120, 90, 90);

	PictureCollection *pc = new PictureCollection();

	pc->Add(picture1);
	pc->Add(picture2);
	pc->View();
	pc->SetMode(1);
	pc->View();

	delete pc;
	delete picture2;
	delete picture1;
}