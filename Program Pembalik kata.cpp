#include <stdio.h>
#include <string.h>
#include <conio.h>

char a [100];
int b,c;
int main ()
{
    printf( " Masukan Kata :");
    gets(a);
    strrev(a);
    printf( " Setelah Di Balik Menjadi :%s",a);
}
