#include <stdio.h>

int main(void) {
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    printf("HAN YOON SOO - 2023041004\n");
    //문자 변수 charType 사이즈를 출력한다 (1)
    printf("Size of char: %ld byte\n", sizeof(charType));

    //정수 변수 integerType 사이즈를 출력한다 (4)
    printf("Size of int: %ld bytes\n",sizeof(integerType));

    //실수 변수 floatType 사이즈를 출력한다 (4)
    printf("Size of float: %ld bytes\n",sizeof(floatType));

    //실수 변수  doubleType 사이즈를 출력한다 (8)
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("-----------------------------------------\n");
    //문자형의 사이즈를 출력한다. (1)
    printf("Size of char: %ld byte\n",sizeof(char));

    //정수형의 사이즈를 출력한다. (4)
    printf("Size of int: %ld bytes\n",sizeof(int));

    //실수형의 사이즈를 출력한다. (4)
    printf("Size of float: %ld bytes\n",sizeof(float));

    //실수형의 사이즈를 출력한다. (4)
    printf("Size of double: %ld bytes\n",sizeof(double));

    //출력값이 변수와 동일하게 나온다
    //즉, 변수 사이즈 == 변수형의 사이즈
    printf("-----------------------------------------\n");
    //운영채제가 64비트 채계이기 때문에 모든 포인터가 8바이트
    //(8*8) = 64 비트를 할당 받음
    printf("Size of char*: %ld byte\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    return 0;
}