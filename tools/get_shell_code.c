#include <windows.h>
int main(){
    HINSTANCE LibHandle;
    char dllbuf[11] = 'user32.dll';
    LibHandle = LoadLibrary(dllbuf);
    _asm{
        sub sp,0x440
        xor ebx,ebx
        push ebx
        push 0x74736577
        push 0x6c696166

        mov eax,esp
        push ebx
        push eax
        push eax
        push ebx

        mov eax,0x77d5050b   ;call MessageboxA
        call eax

        push ebx
        mov eax,0x7c9211A7   ; call exit(0)
        call eax
    }
}
