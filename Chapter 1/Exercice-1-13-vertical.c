#include <stdio.h>

#define IN  1
#define OUT 0

int main(int argc, const char * argv[]) {
    // Arrays: count digits, blank, tab, \n and all others
    // lw : length of words, cw: count of words, ml: maximum length
    int i,j, c, state, ml, cw,lw;
    int nwords[10];
    state = OUT;
    lw = cw = ml = 0;

    for (i=0; i<=9; i++)
        nwords[i] = 0;

    while ((c=getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT){
            nwords[cw] = lw;
            ++cw;
            lw = 0;
            state = IN;
            
        }
        if (state == IN){
            ++lw;
            if (lw > ml)
                ml = lw;
        }
    }
    nwords[cw] = lw;
        
    for(i=1;i<=ml;++i){
        for(j=1;j<=cw;++j){
            if((ml-i)<nwords[j])
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}
