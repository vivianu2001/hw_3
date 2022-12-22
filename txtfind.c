#include <string.h>
#include <stdio.h>
#define LINE 256


int getline1(char s[])
{
    memset(s,0,LINE);
    fgets(s,LINE,stdin);
  
   return strlen(s);
    
}
