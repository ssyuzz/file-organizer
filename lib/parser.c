#include "parser.h"
#include "print_func.h"
#include "function.h"
#include <string.h>
int cliParser(int argc, char *argv[])
{
    if(argc == 1)
        return 0;
    int active = 0;
    char dest[512];

    for(int i=1; i<argc; i++)
    {
        char ex[] = ".";
        if(strcmp(argv[i], "-h") == 0)
        {
            printHelp();
        }
        else if(strcmp(argv[i], "-f") == 0 && strstr(argv[i+1], ex) != NULL)
        {
            char dirName[1024];
            strcpy(dirName, argv[i+1]);
            printA("Ini");
            createDir(dirName);
            active = 1;
        }
        else if(strcmp(argv[i], "-d") == 0)
        {
            
        }
        
    }
 
}
