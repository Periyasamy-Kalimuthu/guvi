#include<stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);
    if((letter>64 && letter<91) ||(letter>96 && letter<123))
      printf("Alphabet");
      else printf("Not a alphabet");
      return 0;
}
