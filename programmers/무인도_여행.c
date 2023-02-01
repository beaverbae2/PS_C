#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// maps_len은 배열 maps의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* maps[], size_t maps_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    return answer;
}

int main(int argc, char const *argv[])
{
    int i;
    
    char** maps = {"X591X","X1X5X","X231X", "1XXX1"};
    int* ans = solution(maps, 4);
    
    for(i = 0; i < sizeof(ans) / sizeof(int*); i++)
    {
        printf("%d ", ans[i]);
    } 
    printf("\n");
    free(maps);

    maps = {"XXX","XXX","XXX"};
    ans = solution(((ch, 3);
    
    for(i = 0; i < sizeof(ans) / sizeof(int*); i++)
    {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}
