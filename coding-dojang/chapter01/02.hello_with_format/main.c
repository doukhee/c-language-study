#include <stdio.h>

int main(){
    /** 서식 지정자로 출력하기 */
    printf("%s \r\n", "Hello World! ");
    /** 여러개의 서식 지정자로 출력하기 */
    printf("%s%d\r\n", "Hello World! ", 1234);
    printf("%s%s\r\n", "Hello World!", " 1234");
    printf("%s %s \r\n", "Hello World!", "1234");
    return 0;
}