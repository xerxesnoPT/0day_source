char shellcode[] = "..." ;//欲调试的十六进制机器码

void main()
{
    __asm{
        lea eax,shellcode
        push    eax
        ret
    }
}
