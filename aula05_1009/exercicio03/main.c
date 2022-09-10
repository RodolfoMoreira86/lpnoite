#include <stdio.h>

int main() {
    double total=1;
    double grao=1;
    for (int i = 2; i <=64 ; ++i) {
        grao*=2;
        total+=grao;
    }
    printf("Total de graos: %.0lf \n", total);
    return 0;
}
