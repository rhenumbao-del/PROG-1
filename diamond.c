#include <stdio.h>

int main() {
    int i, j, k;
    i = 1;
    while (i<=5){
        j = 1;
        while (j<=5-i){
            printf(" ");
            j++;
        }
       int k = 1;
        while (k<=(2*i-1)){
            printf("*");
            k++;
        }printf("\n");
        i++;
    }
    i = 4; 
    while (i >= 1) {
        j = 1;
        while (j <= 5 - i) {
            printf(" ");
            j++;
        }
        k = 1;
        while (k <= (2 * i - 1)) {
            printf("*");
            k++;
        }
        printf("\n");
        i--;  
    }
    return 0;
}
