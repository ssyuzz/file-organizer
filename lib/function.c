#include <direct.h>
#include <time.h>

#include "function.h"
#include "print_func.h"

#include <errno.h>
int createDir(char name[])
{
    time_t now = time(NULL);

    printA(name);
    if (_mkdir(name) == 0) {
       
    } else {
       
        
    }

   
}