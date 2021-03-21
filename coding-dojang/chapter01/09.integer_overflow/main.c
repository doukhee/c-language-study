#include <stdio.h>

int main(int argc, char **argv){
    /** char의 최대 값은 127 overflow 발생 */
    char num1 = 128;
    /** unsigned char의 최대 값은 255 overflow 발생 */
    unsigned char num2 = 256;
    printf("%d %u \r\n", num1, num2);
    return 0;
}