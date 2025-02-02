#include <stdio.h>

int main(){
    double counter;

    for (counter = 0; getchar() != EOF; ++counter){
        ;
    }
    printf("\n%.0f", counter);
}
