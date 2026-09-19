#include<stdio.h>
int main()
{
  unsigned char s;
  printf("Enter a value(0-255): ");
  scanf("%hhu",&s);

   s=s|(1<<6);
   printf("After setting the bit: ");

    for (int i = 7; i >= 0; i--)
{
   printf("%d",(s>>i)&1);
}  
   printf("\n");
   return 0;
}
