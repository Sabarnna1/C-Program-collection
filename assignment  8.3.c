#include <stdio.h>
int main()
{ FILE *fr;
    int s;
    fr=fopen(__FILE__,"r");
    do
         {s=getc(fr);
         putchar(s);}
    while(s!= EOF);
    fclose(fr);
    return 0;}
