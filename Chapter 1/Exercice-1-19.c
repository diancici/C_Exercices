#include <stdio.h>
#define MAX 1000

void reverse(char s[], char r[], int length);

int main()
{
    int c, length=0;
    char word[MAX], rword[MAX];
    
    while ((c=getchar())!= EOF)
    {
        word[length] = c;
        length++;
    }
    
    reverse(word,rword,length);
    
    printf("%s\n", rword);
    
    return 0;
    
}

void reverse(char s[], char r[], int length)
{
    int i;
    for (i=0;i<length;i++)
        r[i] = s[length-i-1];
}
