#include <stdio.h>

char GetHash(char *fun_name)
{
    DWORD digest = 0;
    while(*fun_name)
    {
        printf("%s\n", fun_name);
        digest = ((digest<<25)|(digest>>7));
        digest += *fun_name;
        fun_name++;
    }
    return digest;
}
main()
{
    char hash;
    hash = GetHash('AddAtomA');
    printf("resutl of hash os %.8x\n", hash);
}
