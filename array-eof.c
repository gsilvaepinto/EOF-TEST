#include <stdio.h>

int main(){
    int c, i, white, other;
    int digit[10];
    white = other = 0;

    for (i = 0; i < 10; i++){
        digit[i] = 0;
    }
    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9')
            ++digit[c-'0'];
        if (c == ' ' || c == '\t' || c == '\n')
            white++;
        else
            other++;
    }
    printf("Digits: ");
    for (i = 0; i < 10; i++){
        printf(" %d", digit[i]);
    }
    printf(", White Spaces: %d, Other: %d\n", white, other);
}
