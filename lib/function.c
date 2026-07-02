#include <direct.h>
#include <time.h>
#include <windows.h>

#include "function.h"
#include "print_func.h"

#include <errno.h>

int createDir(char name[])
{
    time_t now = time(NULL);

    _mkdir(name);

    return 1;
}

void getAllFiles()
{
    WIN32_FIND_DATA fd;

    HANDLE h = FindFirstFile("*", &fd);
    printA("*/\n");
    do{
        if(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
        {
            printA(fd.cFileName);
            printA("\n");
        }
        else{
            printA(fd.cFileName);
            printA(" : ");
            printUi(fd.nFileSizeLow);
            printA("KB");
            printA("\n");
        }
        
    }
    while(FindNextFile(h, &fd));

    FindClose(h);
    
}