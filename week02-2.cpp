#include <stdio.h>
char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char b[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror(char c)
{
    for(int i=0;a[i]!=0;i++)
    {
        if(c==a[i])return(b[i]);
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("它的鏡像字是==%c==\n",mirror(c));
    return 0;
}
