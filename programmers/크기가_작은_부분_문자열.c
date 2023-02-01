/**
 * @file 크기가_작은_부분_문자열.c
 * @author beaverbae
 * @note 문제 해석 오류(조합으로 접근), 범위 초과 고려 안함(최대 10000자리 숫자)
 * 
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int calc(const char* t, const char* p) 
{
    int ans = 0;
    
    int N = strlen(t);
    int M = strlen(p);

    for (int i = 0; i < N - M + 1; i++) 
    {
        int T = 0;
        bool flag = true;

        for (int j = i; j < i + M; j++) 
        {
            if (t[j] != p[j - i])
            {
                if (t[j] > p[j - i])
                {
                    flag = false;
                }
                break;
            }        
        }

        if (flag)
        {
            ans++;
        }
    }

    return ans;    
}

int solution(const char* t, const char* p) 
{
    int answer = calc(t, p);
    return answer;
}

int main(int argc, char const *argv[])
{
    char *t = "3141592";
    char *p = "271";
    printf("%d\n", solution(t, p));
    return 0;
}

