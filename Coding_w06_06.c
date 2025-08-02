#include <stdio.h> 


int main() {
    
    int a = 5;
    int b = 2;
    float x = 3.0;
    float y = 4.5;
    
    int r1;
    int r2;
    float r3;
    float r4;
    r1 = a++ * b + (int)y % 3;             // คูณแล้วบวกเศษ แปลง y เป็น int ก่อน
    r2 = (a > b) && ((int)x / b < 2);      // เช็คเงื่อนไขทั้งสองฝั่ง
    r3 = ++x * y - a / 2;                  // เพิ่ม x ก่อน แล้วคูณ ลบด้วย a/2
    r4 = ((x += 1.5) > y) || (b-- > 0);    // เพิ่ม x แล้วเช็คเงื่อนไข

   
    printf("r1 = %d\n", r1);              // แสดงค่า r1
    printf("r2 = %d\n", r2);              // แสดงค่า r2
    printf("r3 = %.2f\n", r3);            // แสดงค่า r3 แบบทศนิยม 2 ตำแหน่ง
    printf("r4 = %.2f\n", r4);            // แสดงค่า r4 แบบทศนิยม 2 ตำแหน่ง

    return 0;
}