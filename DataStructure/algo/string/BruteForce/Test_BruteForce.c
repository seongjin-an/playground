#include <stdio.h>
#include <string.h>
#include "BruteForce.h"

#define MAX_BUFFER 512

int main(int argc, char** argv)
{
    char* FilePath;
    FILE* fp;

    char Text[MAX_BUFFER];
    char* Pattern;
    int PatternSize = 0;
    int Line = 0;

    if (argc < 3)
    {
        printf("Usage: %s <FilePath> <Pattern>\n", argv[0]);
        return 1;
    }

    FilePath = argv[1];
    Pattern = argv[2];

    PatternSize = strlen(Pattern);

    if ((fp = fopen(FilePath, "r")) == NULL)
    {
        printf("Cannot open file:%s\n", FilePath);
        return 1;
    }

    while (fgets(Text, MAX_BUFFER, fp) != NULL)
    {
        int Position = BruteForce(Text, strlen(Text), 0, Pattern, PatternSize);

        Line++;

        if (Position >= 0)
        {
            printf("line:%d, column:%d : %s", Line, Position + 1, Text);
        }
    }

    fclose(fp);

    return 0;
}
/*
fgets(char* str, int numChars, FILE* stream);
첫 번째 매개변수 (str)에는 파일에서 읽은 문자열을 저장할 메모리의 주소를 넘겨준다.
두 번째 매개변수(numChars)에는 저장할 문자의 최대 개수를 지정한다.
fgets 함수는 \n문자를 만날 때까지 문자열을 읽는 것이 기본이지만, 읽어들이는 문자의 개수가 numChars를 넘어서면
중간에 읽기 작업을 그만두고 numChars - 1 개 까지만 읽는다. 그렇게 파일의 끝에 도달할 때까지 반복하다가 
더이상 읽을 수 없으면 null 포인터를 반환한다.
*/