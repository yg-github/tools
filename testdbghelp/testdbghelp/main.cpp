
#include <windows.h>
#include "./dbghelp/minidump.h"
#include <string.h>
#include <iostream>

struct ygtest
{
    int a;
    int b;
};

int test()
{
    char buff[2] = {0};
    sprintf(buff, "%s", "aaaaaaaaaaaaaaaaaa");

    return 1;
}

int main()
{
    RunCrashHandler();

    test();

    ygtest *p = 0;

    int c = p->a;

    int d = c;

    system("pause");

    return 0;
}