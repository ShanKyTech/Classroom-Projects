#include <stdio.h>
int main()
{
    int a =5 ;
   while (a--> 0) // outer while  loop
 {
     int b =5;
     int c=10;
     if (a%2==0) printf(" \t");
     while(b >0) // inner while loop
     {
         if(b%2==0);
         {
         printf("* \t");
         }
        // else
         {
           //  printf("=");
         }
         b=b-1;
     }
      while(c-- >0) // inner while loop
     {
          printf("=");
     }
     printf("\n");
 }
    return 0;
}
