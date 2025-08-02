#include <stdio.h>

int main() {
    // ตัวแปรเริ่มต้น
    float x, rate = 5.0, a = 2.0;
    int y = 4, z = 3, total, price = 10, quantity = 2, discount = 5;
    int score = 100, penalty = 3, mistake = 2;

    // 1. x = x - 4.0;
    x = 10.0;
    // แบบเต็ม: ลบค่า 4 ออกจาก x แล้วเก็บกลับเข้า x
    x = x - 4.0;
    printf("1. แบบเต็ม: x = x - 4.0 -> x = %.2f\n", x);

    x = 10.0;
    // แบบย่อ: ใช้ -= แทนการลบแล้วกำหนดค่าใหม่
    x -= 4.0;
    printf("   แบบย่อ:  x -= 4.0     -> x = %.2f\n\n", x);

    // 2. x = 6.5 * x;
    x = 2.0;
    // แบบเต็ม: คูณ x ด้วย 6.5 แล้วเก็บกลับเข้า x
    x = 6.5 * x;
    printf("2. แบบเต็ม: x = 6.5 * x -> x = %.2f\n", x);

    x = 2.0;
    // แบบย่อ: ใช้ *= แทนการคูณแล้วเก็บค่า
    x *= 6.5;
    printf("   แบบย่อ:  x *= 6.5     -> x = %.2f\n\n", x);

    // 3. x = x % (y + z * a);
    int xi = 25;
    // แบบเต็ม: หารเอาเศษจาก x หาร (y + z*a)
    xi = xi % (y + z * (int)a);  // แปลง a เป็น int เพื่อความถูกต้อง
    printf("3. แบบเต็ม: x = x %% (y + z * a) -> x = %d\n", xi);

    xi = 25;
    // แบบย่อ: ใช้ %= แทนการหารเอาเศษแล้วเก็บค่า
    xi %= (y + z * (int)a);
    printf("   แบบย่อ:  x %%= (y + z * a)     -> x = %d\n\n", xi);

    // 4. x = x / (2.0 * x);
    x = 4.0;
    // แบบเต็ม: หาร x ด้วย 2.0 เท่าของมันเอง
    x = x / (2.0 * x);
    printf("4. แบบเต็ม: x = x / (2.0 * x) -> x = %.4f\n", x);

    x = 4.0;
    // แบบย่อ: ใช้ /= แทนการหารแล้วเก็บค่า
    x /= (2.0 * x);
    printf("   แบบย่อ:  x /= (2.0 * x)    -> x = %.4f\n\n", x);

    // 5. total = total + (price * quantity - discount);
    total = 100;
    // แบบเต็ม: เพิ่มมูลค่าการซื้อ (price*quantity - discount) ลงใน total
    total = total + (price * quantity - discount);
    printf("5. แบบเต็ม: total = total + (price * quantity - discount) -> total = %d\n", total);

    total = 100;
    // แบบย่อ: ใช้ += แทนการบวกค่าแล้วเก็บ
    total += (price * quantity - discount);
    printf("   แบบย่อ:  total += (price * quantity - discount)       -> total = %d\n\n", total);

    // 6. x = x * (1 + rate / 100);
    x = 100.0;
    // แบบเต็ม: คูณ x ด้วยเปอร์เซ็นต์ดอกเบี้ย (เช่น 5%) แล้วเก็บค่าใหม่
    x = x * (1 + rate / 100);
    printf("6. แบบเต็ม: x = x * (1 + rate / 100) -> x = %.2f\n", x);

    x = 100.0;
    // แบบย่อ: ใช้ *= แทนการคูณแล้วเก็บค่า
    x *= (1 + rate / 100);
    printf("   แบบย่อ:  x *= (1 + rate / 100)    -> x = %.2f\n\n", x);

    // 7. score = score - (penalty * (mistake + 1));
    score = 100;
    // แบบเต็ม: หักคะแนนจากความผิดพลาด (penalty ต่อครั้ง)
    score = score - (penalty * (mistake + 1));
    printf("7. แบบเต็ม: score = score - (penalty * (mistake + 1)) -> score = %d\n", score);

    score = 100;
    // แบบย่อ: ใช้ -= แทนการลบแล้วเก็บค่า
    score -= (penalty * (mistake + 1));
    printf("   แบบย่อ:  score -= (penalty * (mistake + 1))         -> score = %d\n", score);

    return 0;
}
