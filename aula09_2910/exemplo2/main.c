#include <stdio.h>
void subir(int n){
    if(n==0)return;
    subir(n - 1);
    printf("%d\n", n);
}
int main() {
    subir(15);
    return 0;
}
