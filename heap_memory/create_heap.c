#include <windows.h>
main()
{
  HLOCAL h1, h2, h3, h4, h5, h6;
  HANDLE hp;
  hp = HeapCreate(0,0x1000,0x10000);
  __asm int 3
    h1 = HeapAlloc(hp,HEAP_ZERO_MEMORY,3);
    h2 = HeapAlloc(hp,HEAP_ZERO_MEMORY,5);
    h3 = HeapAlloc(hp,HEAP_ZERO_MEMORY,6);
    h4 = HeapAlloc(hp,HEAP_ZERO_MEMORY,8);
    h5 = HeapAlloc(hp,HEAP_ZERO_MEMORY,19);
    h6 = HeapAlloc(hp,HEAP_ZERO_MEMORY,24);

    //free block and prevent coaleses
    HeapFree(hp,0,h1);
    HeapFree(hp,0,h3);
    HeapFree(hp,0,h5);

    HeapFree(hp,0,h4);

    retrun 0;
}
