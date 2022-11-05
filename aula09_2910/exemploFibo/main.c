#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-2) + fibo(n-1);
}
int main() {
    int x;
    scanf("%d", &x);
    printf("Fibonacci da sequencia 12: %d\n", fibo(3));
    return 0;
}
