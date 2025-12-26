#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 3) {
        printf("Row %d: ", i);

        int j = 1;
        while (j <= 5) {
            printf("%3d", j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

