#include <stdio.h>

int main(int argc, char **argv){
    /** 각각의 자료형 출력 하기 */
    printf("char %d, short: %d, int: %d, long: %d, long long: %d \r\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    return 0;
}