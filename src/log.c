// log.c
// Stolen from some openGL project

#include "stdio.h"
#include "log.h"

void writeLogFile(char const* szString)
{
 
  FILE* pFile = fopen("logFile.txt", "a");
  fprintf(pFile, "%s\n",szString);
  fclose(pFile);
 
 
}