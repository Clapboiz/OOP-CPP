#include "DaGiac.h"

DaGiac::DaGiac()
{
	n = 1;
	thaotac = NULL;
}

DaGiac::~DaGiac()
{
	delete thaotac;
}

bool DaGiac::KiemTra()
{
	return true;
}