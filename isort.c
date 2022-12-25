#include <stdio.h>
#define n 50
void shift_element2(int*,int);

void shift_element2(int *arr, int i)
{
    if(i==1)
    {
        *(arr+1)=*(arr);
        i=0;
    }
    
    
    int prev=*(arr);
    int curr;
    if(i>=1)
    {
        while(i>=-1)
        {
            curr=*(arr);
           *(arr)=prev;
             arr++;
             prev=curr;
             i--;
    }
}
}

void insertion_sort(int *arr,int len)
{
   for(int i=1;i<len;i++)
   {
       int temp= *(arr+i);
       int j= i-1;
       while((temp < *(arr+j))&& j>=0 )
       {
           *(arr+j+1)= *(arr+j);
           j--;
       }
       *(arr+j+1)=temp;
       
   }
}

int main()
{
   int arr[n];
     int num=0;
 for(int i=0;i<n;i++)
 {
    scanf("%d",&num);
    *(arr+i)=num;
 }
 insertion_sort(arr,50);
 
 for(int i=0;i<n-1;i++)
 {
    printf("%d,",*(arr+i));
   
 }
 
  printf("%d\n",*(arr+n-1));
 
return 0;
}
