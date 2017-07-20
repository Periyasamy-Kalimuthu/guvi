#include <stdio.h>
#include<string.h>
int main()
{
   char str[100],tmp;
   int len,i;
gets(str);
   len=strlen(str);
   for(i=0;i<len/2;i++){
       tmp=str[i];
       str[i]=str[len-1-i];
       str[len-1-i]=tmp;
   }
   puts(str);
    return 0;
}
