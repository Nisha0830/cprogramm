#include<stdio.h>
#include<string.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(s>='a'&& s<='z'||s>='A'&& s<='Z')
    {
        printf("Alphabets");
    }
    else
    {
        printf("No");
    }
 return 0;   
}
