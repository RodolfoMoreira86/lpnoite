#include <stdio.h>

int main() {
    //exemplo 06
    int c = 65;
    for (int i = 0; i < 2; ++i) {
        int j;
        for (j = c; j < c+26; ++j) {
            printf("%c ", j);
        }
        printf("\n");
        c = j + 6;
    }

    return 0;
}
