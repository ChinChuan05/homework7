#include <stdlib.h>
#include <stdio.h>
#define MAX 80

int main(void){
    FILE *ptr;

    char str[MAX];
    int bytes;

    ptr = fopen("./output.txt", "r");

    while(!feof(ptr)){
        bytes = fread(str, sizeof(char), MAX-1, ptr);
        str[bytes] = '\0';
        printf("%s\n", str);
    }

    fclose(ptr);
    return 0;
}
