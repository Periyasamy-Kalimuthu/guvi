#include<stdio.h>
int main()
{
    int i=0,k=0;
    char letter,check[10]="aeiouAEIOU";
    scanf("%c",&letter);
    for(i=0;i<10;i++)
    {
        if(letter==check[i])
            {
                k++;break;
            }
    }
    if(k==0)
      printf("Consonant");
      else
      printf("Vowel");
      return 0;
}
