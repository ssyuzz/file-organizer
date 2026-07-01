#include "parser.h"
#include "print_func.h"
#include <string.h>
int cliParser(int argc, char *argv[])
{
    if(argc == 1)
        return 0;
    for(int i=1; i<argc; i++)
    {
        char ex[] = ".";
        if(strcmp(argv[i], "-h") == 0)
        {
            printHelp();
        }
        else if(strcmp(argv[i], "-f") == 0 && strstr(argv[i+1], ex) != NULL)
        {
            char msgInfo[] = "Ada filene";
            printA(msgInfo);
        }
        
    }
 
}