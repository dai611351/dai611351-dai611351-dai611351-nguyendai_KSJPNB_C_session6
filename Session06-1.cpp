#include <stdio.h>

int main() {
    int num, total = 0;
    int count = 5;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < count; i++) {
        printf("So %d: ", i + 1);
        scanf("%d", &num);
        
        if (num % 2 != 0) {
            total += num;
        }
    }

    printf("Tong cac so le la: %d\n", total);

    return 0;
}

