#include <stdlib.h>
#include <stdio.h>




int main(void){
    FILE *ptr1, *ptr2;
    char ch;

    if(ptr1 != NULL){
        ptr1 = fopen("./welcom.txt", "r");
        ptr2 = fopen("./output.txt", "w");

        while(!feof(ptr1)){
            ch = getc(ptr1);
            fprintf(ptr2, "%c", ch);
        }

        fclose(ptr1);
        fclose(ptr2);
        printf("資料複製完成\n");
    }
    else{
        printf("檔案開啟失敗\n");
    }
    return 0;
}
