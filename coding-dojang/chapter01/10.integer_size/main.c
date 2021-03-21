#include <stdio.h>

int main(int argc, char ** argv){
    int num1 = 0;
    int size;
    /** 변수 num1의 자료형 크기를 구하기 */
    //size = sizeof num1;
    size = sizeof(num1);

    printf("num1 size : %d \r\n", size);
    return 0;
}