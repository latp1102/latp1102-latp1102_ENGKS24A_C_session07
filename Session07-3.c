#include <stdio.h>

int main() {
    int n[5] = {2,4,6,8,10};
    int a = 1; 

    for (int i = 0; i < 5; i++) {
        if (n[i] % 2 != 0) {
            a = 0;
            break;
        }
    }

    if (a != 0) {
        printf("Tat ca cac phan tu trong mang la so chan\n");
    } else {
        printf("Mang chua ca so chan va so le\n");
    }

    return 0;
}

