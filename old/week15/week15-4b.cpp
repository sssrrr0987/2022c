#include <stdio.h>
#include <string.h>
char line[3000];
int main()
{
    printf("�п�J�@��r��,���n���Ů��: ");

    scanf("%s",line);

    int N=strlen(line);

    for(int i=N-1;i>=0;i--){
        printf("%c",line[i]);
    }
}

