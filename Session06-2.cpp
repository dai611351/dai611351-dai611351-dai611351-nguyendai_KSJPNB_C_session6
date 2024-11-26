#include <stdio.h>

int main() {
    int num;
    int soChan = 0, soLe = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So %d: ", i + 1);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }

    printf("So luong so chan: %d\n", soChan);
    printf("So luong so le: %d\n", soLe);

    return 0;
}
