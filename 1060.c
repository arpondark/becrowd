#include <stdio.h>

int main() {
    int positive_count = 0;
    float number;

    for(int i = 0; i < 6; i++) {
        scanf("%f", &number);
        if(number > 0) {
            positive_count++;
        }
    }

    printf("%d valores positivos\n", positive_count);
    return 0;
}
