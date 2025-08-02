#include <stdio.h>

int main() {
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าเริ่มต้นของตัวแปรทั้งหมด
    printf("1. a = %d, b = %d, c = %.2f, d = %.2f\n", a, b, c, d);

    // 2. ผลการคำนวณของ a + d
    printf("2. a + d = %.2f\n", a + d);

    // 3. ผลการคำนวณของ a - b
    printf("3. a - b = %d\n", a - b);

    // 4. ผลการคำนวณของ c * d
    printf("4. c * d = %.2f\n", c * d);

    // 5. ผลการคำนวณของ a * c
    printf("5. a * c = %.2f\n", a * c);

    // 6. ผลการคำนวณของ c / d
    printf("6. c / d = %.2f\n", c / d);

    // 7. ผลการคำนวณของ b / c
    printf("7. b / c = %.2f\n", b / c);

    // 8. ผลการคำนวณของ a % b
    printf("8. a %% b = %d\n", a % b); // ใช้ %% เพื่อแสดงเครื่องหมาย %

    // 9. ผลการคำนวณของ (int)c % a  -- ต้องแปลง float เป็น int ก่อน
    printf("9. (int)c %% a = %d\n", ((int)c % a));

    // 10. ผลการคำนวณของ (int)c % (int)d
    printf("10. (int)c %% (int)d = %d\n", ((int)c % (int)d));

    return 0;
}
