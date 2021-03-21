#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv){
    char num1 = CHAR_MAX + 1;
    short num2 = SHRT_MAX + 1;
    int num3 = INT_MAX + 1;
    long long num4 = LLONG_MAX + 1;
    /** 각각의 자료형을 overflow 발생 값 확인 */
    printf("%d %d %d %lld \r\n", num1, num2, num3, num4);

    unsigned char num5 = UCHAR_MAX + 1;
    unsigned short num6 = USHRT_MAX + 1;
    unsigned int num7 = UINT_MAX + 1;
    unsigned long long num8 = ULLONG_MAX + 1;
    /** 각각의 부호가 없는 자료형을 overflow 발생 값 확인 */
    printf("%u %u %u %llu \r\n", num5, num6, num7, num8);
    return 0;
}