#include <stdio.h>

int main() {
    // --- ส่วนที่ 1: W06-02-01 (ตัวแปรประเภท int) ---
    int i = 1;
    int j = 2;
    int k; // ยังไม่กำหนดค่า

    printf("W06-02-01:\n");
    printf("1. i = %d, j = %d, k = uninitialized\n", i, j);

    k = i + j;  // k = 1 + 2 = 3
    printf("2. i = %d, j = %d, k = %d\n", i, j, k);

    i = i + (k * 2); // i = 1 + (3 * 2) = 7
    printf("3. i = %d, j = %d, k = %d\n", i, j, k);

    j = i / 2; // j = 7 / 2 = 3
    printf("4. i = %d, j = %d, k = %d\n", i, j, k);

    k = i % 2; // k = 7 %% 2 = 1
    printf("5. i = %d, j = %d, k = %d\n", i, j, k);

    i = (j + k) * 3; // i = (3 + 1) * 3 = 12
    printf("6. i = %d, j = %d, k = %d\n\n", i, j, k);

    // --- ส่วนที่ 2: W06-02-02 (ตัวแปรประเภท double) ---
    double x = 1.0;
    double y = 2.0;
    double z; // ยังไม่กำหนดค่า

    printf("W06-02-02:\n");
    printf("1. x = %.1f, y = %.1f, z = uninitialized\n", x, y);

    x = y + 5.0; // x = 2.0 + 5.0 = 7.0
    printf("2. x = %.1f, y = %.1f\n", x, y);

    y = x / 2.0; // y = 7.0 / 2.0 = 3.5
    printf("3. x = %.1f, y = %.1f\n", x, y);

    y = (x * 3.0) + 4.0; // y = 21.0 + 4.0 = 25.0
    printf("4. x = %.1f, y = %.1f\n", x, y);

    x = -0.5 - y; // x = -0.5 - 25.0 = -25.5
    printf("5. x = %.1f, y = %.1f\n", x, y);

    z = x + y; // z = -25.5 + 25.0 = -0.5
    printf("6. x = %.1f, y = %.1f, z = %.1f\n", x, y, z);

    return 0;
}