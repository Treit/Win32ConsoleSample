#include <windows.h>
#include <stdint.h>
#include <stdio.h>

#include <math.h>

#define internal static

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int32 bool32;

int main(int argc, char** argv)
{
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);

    HANDLE hfile = CreateFile(
        L"c:\\temp\\foo.txt",
        GENERIC_READ,
        FILE_SHARE_READ,
        0,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        0);

    int err = GetLastError();

    if (err == 0)
    {
        printf("OK\n");
    }
    else
    {
        printf("Failed with %d", err);
    }

    hfile = CreateFile(
        L"c:/temp/foo.txt",
        GENERIC_READ,
        FILE_SHARE_READ,
        0,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        0);    

    err = GetLastError();

    if (err == 0)
    {
        printf("OK\n");
    }
    else
    {
        printf("Failed with %d", err);
    }

    return 0;
}
