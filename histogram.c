#include <stdio.h>

#define MAX_WORD_LENGTH 20

int main() {
    int c, length = 0;  // Initialize length
    int word_length[MAX_WORD_LENGTH] = {0};

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (length > 0) {  // Only count words with length > 0
                if (length < MAX_WORD_LENGTH) {
                    word_length[length]++;
                } else {
                    word_length[MAX_WORD_LENGTH - 1]++;  // Count longer words in last bin
                }
                length = 0;  // Reset for next word
            }
        } else {
            length++;  // Increase word length count
        }
    }

    // Handle the last word in input
    if (length > 0) {
        if (length < MAX_WORD_LENGTH) {
            word_length[length]++;
        } else {
            word_length[MAX_WORD_LENGTH - 1]++;
        }
    }

    // Print horizontal histogram
    printf("\nHorizontal Histogram of Word Lengths:\n");
    for (int i = 1; i < MAX_WORD_LENGTH; i++) {  // Start from 1
        if (word_length[i] > 0) {
            printf("%2d | ", i);
            for (int j = 0; j < word_length[i]; j++) {
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
