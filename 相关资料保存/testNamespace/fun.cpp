#include "fun.h"

namespace Fun{
	int g_num;	
}

int fun()
{
	return Fun::g_num*Fun::GREEN;
}
