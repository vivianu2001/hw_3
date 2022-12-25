#include <string.h>
#include <stdio.h>
#define LINE 256
#define WORD 30


int getline1(char s[])
{
    memset(s,0,LINE+1);
    fgets(s,LINE,stdin);
  
   return strlen(s);
    
}

int getword(char w[])
{
    
    memset(w,0,WORD+1);
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

     
        
    }
        
}


int similar(char *s,char *t,int n)
{
    if(n==0&&(strlen(s)==strlen(t)))
    {
       return !strcmp(s,t);
    }
 
  

    if(strlen(s)<strlen(t))
    {
      return 0;
    }


    char arr[WORD+1];
    memset(arr,0,WORD+1);
    

    int i=0;
    strcpy(arr,s);
    
  
    char *temp=arr;

    while (*t!=0&& *temp!=0)
    {
        if(*t==*temp)
        {
            *temp=2;
            temp++;
            t++;
    
        }
        else
        {
            temp++;
        }

    }
        int count=0;
        for(int p=0;p<strlen(s);p++)
        {
            if(arr[p]!=2)
            {

                count++;
            }
        }
    
   
 return (count==n);
}


void print_lines(char * str)
{
    char line[LINE+1];
    do
    {
        getline1(line);
        if(substring(line,str))
        {
            printf("%s\n",line);
        }
        
    }
    while(line[0]!='5');
    
}

int main()
{
    print_lines("cat");
    
    return 0;
}
    
    
    
    



