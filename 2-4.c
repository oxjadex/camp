#include <stdio.h>
#include <stdlib.h> // malloc 함수를 사용하기 위해 필요한 헤더 파일

int myStrlen(const char* str) {
    const char* s; // 포인터 변수를 선언할 때 타입을 명시해줘야 합니다.
    for (s = str; *s != '\0'; s++) {
        // 루프 내용이 없으므로 반복문의 조건식을 그대로 사용합니다.
    }
    return s - str;
}

int main() {
    // 문자형 포인터 변수 선언
    // 최대 100byte 동적할당
    char* s;
    printf("문자열을 입력하세요.\n");
    s = (char*)malloc(sizeof(char) * 100); // 메모리 동적 할당
    scanf("%s", s);
    
    // 문자열 변수에 저장(입력)
    printf("문자열의 길이는 %d 입니다.\n", myStrlen(s));
    
    free(s); // 할당된 메모리를 해제해야 합니다.
    return 0;
}
