#include <stdio.h>
#define MAX_CH 100

int getMyStr(char buffer[], int limit) {
    int i;

    for (i = 0; i < limit - 1; i++) {  // 마지막에 '\0' 넣을 공간 확보
        int ch = getchar();

        if (ch == '\n' || ch == EOF) {  // 줄 끝이나 파일 끝
            buffer[i] = '\0';
            return 1;  // 정상 입력 종료
        }

        buffer[i] = (char)ch;
    }

    buffer[i] = '\0';  // 버퍼 끝에 NULL 문자 보장
    return 0;           // 입력이 너무 길어서 '\n'을 못 만남
}

int main(void) {
    char input_str[MAX_CH];
    int state;

    printf("Enter text (max %d chars): ", MAX_CH - 1);
    state = getMyStr(input_str, MAX_CH);

    if (state)
        printf("input: %s\n", input_str);
    else
        printf("input: %s -> out of range\n", input_str);

    return 0;
}
