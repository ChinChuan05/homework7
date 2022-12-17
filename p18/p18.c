#include <stdlib.h>
#include <stdio.h>


int main(){
    FILE *IN;
    FILE *OUT;

    int cnt;
    char str[100];

    IN = fopen("./welcom.txt", "r");
    OUT = fopen("./output.txt", "w");

    while(!feof(IN)){
        cnt = fscanf(IN, "%s", str);
        if (cnt > 0){
            fprintf(OUT, "%s\n", str);
        }
    }

    fclose(IN);
    fclose(OUT);
    return 0;
}
