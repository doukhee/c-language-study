#include <stdio.h>

int main(int argc, char **argv){
    /** 1바이트 부호 없는 정수 */
    unsigned char num1 = 200;
    /** 2바이트 부호 없는 정수 */
    unsigned short num2 = 60000;
    /** 4바이트 부호 없는 정수 */
    unsigned int num3 = 412345678;
    /** 4바이트 부호 없는 정수 */
    unsigned long num4 = 4123456789;
    /** 8바이트 부호 없는 정수 */
    unsigned long long num5 = 12345678901234567890;
    /** unsigned char, unsigned short, unsigned int는 %u로 출력하고, unsigned long 은 %lu로 출력, unsigned long long은 %llu로 출력 한다 */
    printf("%u %u %u %lu %llu \r\n", num1, num2, num3, num4, num5);

    return 0;
}