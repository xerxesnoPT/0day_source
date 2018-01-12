#include <stdio.h>
#include <windows.h>
DWORD GetHash(char *fun_name)
{
    DWORD digest=0;
    while (*fun_name)
    {
        digest = ((digest<<25)| (digest>>7));
        digest = *fun_name;
        fun_name++;
    }
    return digest;
}
main()
{
    DWORD hash;
    hash = GetHash("AddAtomA");
    printf("result of hash is %.8x\n",hash);
}

