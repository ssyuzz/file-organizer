#include <direct.h>
#include <time.h>
#include <windows.h>
#include <WinBase.h>

#include "function.h"
#include "print_func.h"
#include "parser.h"

#include <errno.h>

int createDir(char name[])
{
    time_t now = time(NULL);

    _mkdir(name);

    return 1;
}
int checkIfDirExist(char dirName[])
{
    WIN32_FIND_DATA fd;

    HANDLE h = FindFirstFile(dirName, &fd);

    if(h != NULL && fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void getAllFiles()
{
    WIN32_FIND_DATA fd;

    HANDLE h = FindFirstFile("*", &fd);
    printA("[D] : Directory | [F] : Files\n");
    if(h != 0)
    {
        do{
            if(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            {
                printA("[D] ");
                printA(fd.cFileName);
                printA("\n");
            }
            else{
                printA("[F] ");
                printA(fd.cFileName);
                printA(" : ");
                printUi(fd.nFileSizeLow);
                printA("KB");
                printA("\n");
            }
            
        }
        while(FindNextFile(h, &fd));
    }

    FindClose(h);
    
}
int checkFileExist(char fileName[])
{
    WIN32_FIND_DATA fd;

    HANDLE h = FindFirstFile(fileName, &fd);

    if(h != 0)
    {
        
        return 0;
    }
    else
    {
        return 1;
    }
    FindClose(h);

}
int moveFiles(char dirName[], char extension[])
{
    WIN32_FIND_DATA fd;

    HANDLE h = FindFirstFile("*", &fd);
   
    if(h != 0)
    {
        do{
            if(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            {
                continue; // skip
            }
            else
            {
               
                
                if(strstr(fd.cFileName, dirName))
                {
                    char newFileName[1024];
                    char newFileEkstension[1024];
                    copyStr(newFileName,dirName );
                    
                    if(getEx(fd.cFileName, dirName) == 1)
                    {
                        
                        copyDirStr(newFileName,fd.cFileName);
                        MoveFileA(fd.cFileName, newFileName);
                    }
                }
                    
            
            }
        }
        while(FindNextFileA(h, &fd));

    }
    FindClose(h);
  
}