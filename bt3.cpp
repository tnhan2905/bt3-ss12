#include <stdio.h>

void giaiThua(int n) {
    if (n < 0) {
        printf("Khong the tinh giai thua cho so am.\n");
        return;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    printf("Giai thua cua %d la: %llu\n", n, result);
}
int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    giaiThua(n);
    return 0;
}
