#include <stdio.h>
/** 자료형의 크기가 정의 되어 있는 헤더 파일 */
#include <limits.h>

int main(int argc, char **argv){
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;
    /** 각 자료형의 최소값을 출력 하기 */
    printf("%d %d %d %ld %lld \r\n", num1, num2, num3, num4, num5);
    return 0;
}

