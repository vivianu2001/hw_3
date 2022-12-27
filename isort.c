#include <stdio.h>
#define N 50
void shift_element(int*,int);

void shift_element2(int *arr, int i)
{
    if(i==1)
    {
        *(arr+1)=*(arr);
        i=0;
    }
    
    
    int prev=*(arr);
    int curr=0;
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
      
       
       while(j>=0 && (temp < *(arr+j))) 
       {
           *(arr+j+1)= *(arr+j);
           j--;
       }
       *(arr+j+1)=temp;
       
   }
}

int main()
{
   int arr[N];
     int num=0;
 for(int i=0;i<N;i++)
 {
    scanf("%d",&num);
    *(arr+i)=num;
 }
 insertion_sort(arr,N);
 
 for(int i=0;i<N-1;i++)
 {
    printf("%d,",*(arr+i));
   
 }
 
  printf("%d",*(arr+N-1));
 
return 0;
}
