
#include <iostream>

#include "cParts/cModel/cObj/cObjBase/pl/pl00.h"

int main()
{
	sizeof(pl00);
	sizeof(cObjBase);

	pl00* player = nullptr;
	std::cout << &player->field_203 << std::endl;
}