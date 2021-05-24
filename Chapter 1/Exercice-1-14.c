#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c,i;
    int freqc[90]; // reference ASCII table, here we choose character from 33-122
    
    for(i=0;i<=89;i++)
        freqc[i] = 0;
    
    while((c=getchar()) != EOF){
        ++freqc[c -'!'];
    }
    for(i=0;i<=89;i++)
        printf("frequence of characgter %c : %d \n", i+33, freqc[i]);
    
}
