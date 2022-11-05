#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    wprintf(L, "código coração %c \n", 'c');
    int x = 10;
    int y = 15;
    int z = 30;
    int *p_x = &x;
    int *p_y = &y;
    z = *p_x + *p_y + z;
    printf("z:   %d \n", z);
    *p_x = 11;
    p_y = &p_x;
    printf("%d \n", *p_x);
    printf("%d \n", *p_y);
    return 0;
}
