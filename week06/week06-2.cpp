#include <stdio.h>
int main(){
 ///FILE *fout=fopen("output.txt","w+");
    FILE * fin=fopen("output.txt","r");

    char line[3000];
 ///fprintf(fout,"Hello World\n");
    fscanf(fin,"%s",line);
    printf("你讀到了%s\n",line);

    fscanf(fin,"%s",line);
    printf("你讀到了%s\n",line);
}
