#include <string.h>
#include <stdio.h>
#define LINE 256
#define WORD 30


int getline1(char s[])
{
    memset(s,0,LINE);
    fgets(s,LINE,stdin);
  
   return strlen(s);
    
}

int getword(char w[])
{
    
    memset(w,0,WORD)
    scanf("%s",w);
    
    return strlen(w);
}

int substring(char * str1, char * str2)
{
    if(strlen(str2)>strlen(str1))
    {
        return 0;
    }
    
     if(strlen(str2)==strlen(str1))
     {
       return !strcmp(str1,str2);
     }
    
char *temp1;
char *temp2;
    
    
 temp1=str1;
 temp2=str2;
    
    while(*temp1!='\0')
    {
        temp2=str2;
        
        while((*temp1!='\0') &&(*temp1 != *temp2))
        {
            temp1++;
        }

        if(*temp1=='\0')
        {
             return 0;
        }


        while((*temp1==*temp2)&&(*temp2!='\0'))
        {
            temp1++;
            temp2++;

        }




          if(*temp2=='\0')
        {
             return 1;
        }

       else
       {
           return 0;
       }
        
    }
    
    
    
    
    
}
