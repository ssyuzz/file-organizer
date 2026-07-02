#include "print_func.h"

#include <stdio.h>


void printHelp()
{
    printf("==== Help & Documentation ====\n");
    printf("1. Help : \t\t\t-h\n");
    printf("2. Retrieve all Files : \t-l\n");
}

void printA(char text[])
{
    printf(text);
}

void printI(int num)
{
    printf("%d", &num);
}

void printUi(long unsigned int num)
{
    printf("%lu", num);
}
void copyDirStr(char text[], char text1[])
{

    sprintf(text,"%s/%s",text, text1);
}

