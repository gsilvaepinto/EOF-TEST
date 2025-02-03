#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c;
    int words, lines, characters;
    words = lines = characters = 0;
    int status = OUT;

    while ((c = getchar()) != EOF){
        characters++;
        if (c == '\n'){
            lines++;
        }
        if (c == ' ' || c == '\t' || c == '\n'){
            status = OUT;
        } else if (status == OUT){
            status = IN;
            words++;
        }
    }
    printf("\nWords: %d, Lines: %d, Characters: %d\n", words, lines, characters);   
}
