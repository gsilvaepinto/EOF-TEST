#include <stdio.h>

#define ASCII_RANGE 128  

int main() {
    int c;
    int char_freq[ASCII_RANGE] = {0};  

    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < ASCII_RANGE) { 
            char_freq[c]++;
        }
    }

    printf("\n-------\n");

    // Print histogram
    for (int i = 0; i < ASCII_RANGE; i++) {
        if (char_freq[i] > 0) {
            printf(" %c | ", (i >= 32 && i <= 126) ? i : '?');  

            for (int j = 0; j < char_freq[i]; j++) {
                printf("#");
            }
            printf(" (%d)\n", char_freq[i]);
        }
    }

    return 0;
}
