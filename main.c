#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1,*fp2;
    char name1[80],name2[80],ch;
    char *str1=name1;
    char *str2=name2;
    scanf("%s",str1);
    scanf("%s",str2);
    if((fp1=fopen(str1,"r"))==NULL||(fp2=fopen(str2,"w"))==NULL)
        exit(0);

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);

    }
    return 0;
}
