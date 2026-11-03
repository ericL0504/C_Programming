#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()

{
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[30];

    char ch ='p';
    int n=3;

    int len = strlen(str1);  // str1 문자열의 길이를 계산하여 len에 저장한다
    printf("str1의 길이: %d\n", len);  // str1의 길이 출력한다

    strcpy(str3, str1);  // str1의 문자열 전체를 str3에 복사한다
    printf("str1을 str3에 복사: %s\n", str3);  // 복사된 str3 출력한다

    strncpy(str3, str2, n);  // str2의 앞에서부터 n개의 문자를 str3에 복사한다
    str3[n] = '\0';  // 문자열의 끝을 나타내는 널 문자 추가한다
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

printf("str1과 str2 비교 : %d\n", strcmp(str1, str2));
// str1과 str2의 문자열을 비교하여 결과를 출력한다
// 같으면 0, str1이 사전순으로 앞서면 음수, 뒤에있으면 양수로 반환

printf("str1과 str2의 첫 %d 문자 비교 : %d\n", n, strncmp(str1, str2, n));
// str1과 str2의 앞에서부터 n개의 문자만 비교하여 결과 출력한다

strcat(str1, str2);
// str2의 문자열을 str1의 끝에 연결한다
printf("str2를 str1에 연결: %s\n", str1);
// str2가 연결된 str1 출력

strncat(str3, str1, n);
// str1의 앞에서부터 n개의 문자를 str3의 끝에 연결한다
printf("str1의 첫 %d 문자를 str3에 연결 : %s\n", n, str3);
// 문자열이 연결된 str3 출력한다

char* ptr_ch = strchr(str1, ch);
// str1에서 문자 ch가 처음 등장하는 위치의 주소를 반환한다
// 해당 문자가 없으면 NULL 반환한다

printf("str1에서 '%c'의 첫 번째 출현: %s\n", ch, ptr_ch);
// ch가 처음 등장하는 위치부터 문자열 끝까지 출력한다

char* ptr_str = strstr(str1, str2);
// str1에서 문자열 str2가 처음 등장하는 위치의 주소를 반환한다
// 해당 문자열이 없으면 NULL 반환한다

printf("str1에서 str2의 첫 번째 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음");
// ptr_str이 NULL이 아니면 해당 위치부터 문자열 끝까지 출력한다
// NULL이면 "찾을 수 없음" 출력한다
    return 0;
}