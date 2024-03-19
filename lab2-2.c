#include <stdio.h>
int main(void) {
    //변수 선언
    int i, *ptr, **dptr;
    //정수 변수에 1234 대입
    i = 1234;
    //학번 출력
    printf("HAN YOON SOO - 2023041004\n");
    printf("[checking values before ptr = &i] \n");
    //변수 값은 대입한 1234로 출력됨
    printf("value of i == %d\n", i);
    //주소 값은 무작위 출력
    printf("address of i == %p\n", &i);
    //값을 할당하기 전이기 때문에 이상한 값을 가지고 있음
    printf("value of ptr == %p\n", ptr);
    //주소 값은 동일하게 무작위 출력
    printf("address of ptr == %p\n", &ptr);
    //포인터 변수에 i의 주소 대입
    ptr = &i; /* ptr is now holding the address of i */
    printf("\n[checking values after ptr = &i] \n");
    //변수 값은 수정 없기 때문에 1234로 동일하게 출력
    printf("value of i == %d\n", i);
    //주소 값은 초반과 동일
    printf("address of i == %p\n", &i);
    //변수 i의 주소 값을 가지게 됨
    printf("value of ptr == %p\n", ptr);
    //주소 값은 초반과 동일
    printf("address of ptr == %p\n", &ptr);
    //포인터 변수 값이 i의 주소이기 때문에 *연산자로 값을 가져오면 i와 동일
    printf("value of *ptr == %d\n", *ptr);
    //더블포인터에 포인터의 주소를 대입
    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n");
    //변수 값은 1234로 동일
    printf("value of i == %d\n", i);
    //변수 주소는 초기와 동일
    printf("address of i == %p\n", &i);
    //포인터 값은 변수 i의 주소와 동일
    printf("value of ptr == %p\n", ptr);
    //변수 주소는 초기와 동일
    printf("address of ptr == %p\n", &ptr);
    //주소 값이 i이기 때문에 *연산자로 값을 가져오면 i와 동일
    printf("value of *ptr == %d\n", *ptr);
    //더블 포인터 값은 포인터의 주소와 동일
    printf("value of dptr == %p\n", dptr);
    //더블 포인터 주소는 처음과 동일
    printf("address of dptr == %p\n", &dptr);
    //더블 포인터 변수 값이 포인터 주소이기 떄문에 *연산자로 값을 가져오면 포인터의 값를 가져옴
    printf("value of *dptr == %p\n", *dptr);
    //더블 포인터 변수 값이 포인터 주소이기 떄문에 **연산자로 값을 가져오면 i의 값을 가져옴
    printf("value of **dptr == %d\n", **dptr);
    //*연산자를 통해 값을 변경할 경우 i의 값이 변경되기 떄문에 모두다 변경
    *ptr = 7777; /* changing the value of *ptr */
    printf("\n[after *ptr = 7777] \n");
    //변경결과 전부 동일
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    //**연산자를 통해 더블 포인터의 값을 변경할 경우 동일하게 i의 값이 변경되기 때문에 모두다 변경
    **dptr = 8888; /* changing the value of **dptr */
    printf("\n[after **dptr = 8888] \n");
    //변경결과 전부 동일
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    return 0;
}