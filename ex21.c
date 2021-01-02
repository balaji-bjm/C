#include <stdio.h>
void common(int arr1[], int len1, int arr2[],int len2)
{ 
   int i,j;
   for(i = 0; i < len1 ;i++)
   { 
      for(j = 0; j < len2 ;j++)
      {
         if(arr1[i] == arr2[j])
        {
            printf("%d ", arr1[i]);
        }
      }
    } 
}
int main()
{
   int len1,len2;
   scanf("%d%d",&len1,&len2);
   int arr1[len1],arr2[len2];
   for(int i = 0; i < len1 ;i++)
    scanf("%d",&arr1[i]);
   for(int i = 0; i < len2 ;i++)
    scanf("%d",&arr2[i]);
   common(arr1,len1,arr2,len2);
   return 0;
}