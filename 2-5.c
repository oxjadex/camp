#include <stdio.h>
#include <string.h> // 문자열 처리를 위해 필요한 헤더 파일
#define NUM 3

// 전역에 구조체 정의
typedef struct person {
    char name[100]; // 문자열을 저장할 배열 크기를 충분히 설정해야 합니다.
    int age;
} PERSON;

void inputData(PERSON *p);
void outputData(PERSON *p);

int main() {
    PERSON p[3]; // 구조체 배열로 변경
    int i;

    for (i = 0; i < 3; i++) {
        inputData(&p[i]);
    }

    for (i = 0; i < 3; i++) {
        outputData(&p[i]);
    }

    return 0;
}

void inputData(PERSON *p) {
    scanf("%s", p->name);
    scanf("%d", &p->age);
}

void outputData(PERSON *p) {
    printf("%s, ", p->name); // 이름과 나이 사이에 공백 추가
    printf("%d\n", p->age); // 줄 바꿈 추가
}
