
#include <iostream>

#include "cParts/cModel/cObj/cObjBase/pl00.h"

int main()
{
	sizeof(pl00);
	sizeof(cObjBase);

	pl00* player = nullptr;
	std::cout << &player->field_203 << std::endl;
}

long long Unpack(unsigned int* fileHandle, long long archiveHeader, int param_3)
{
    char cVar1;
    char cVar2;
    unsigned int uVar3;
    int iVar4;
    unsigned int* puVar5;
    unsigned int uVar6;
    unsigned int* puVar7;
    bool bVar8;

    if (fileHandle == nullptr) {
        return 0;
    }
    uVar3 = *fileHandle;
    iVar4 = 0;
    uVar6 = 1;
    puVar7 = fileHandle + uVar3;
    if (uVar3 != 0) {
        do {
            puVar7 = puVar7 + 1;
            puVar5 = puVar7;
            do {
                cVar1 = *(char*)puVar5;
                cVar2 = *(char*)((long long)puVar5 + (archiveHeader - (long long)puVar7));
                if (cVar1 != cVar2) break;
                puVar5 = (unsigned int*)((long long)puVar5 + 1);
            } while (cVar2 != '\0');
            if ((cVar1 == cVar2) && (bVar8 = iVar4 == param_3, iVar4 = iVar4 + 1, bVar8)) {
                uVar3 = fileHandle[uVar3];
                iVar4 = strncmp((char*)((unsigned long long)uVar3 + (long long)fileHandle), "RUNOFS64", 8);
                if (iVar4 == 0) {
                    return *(long long*)
                        ((char*)((unsigned long long)uVar3 + (long long)fileHandle) + (unsigned long long)uVar6 * 8) +
                        (long long)fileHandle;
                }
                return (unsigned long long)fileHandle[uVar6] + (long long)fileHandle;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar3);
    }
    return 0;
}