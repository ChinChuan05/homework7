#include <stdlib.h>
#include <stdio.h>


int main(){
FILE *ptr;
    char str[30] = {""};
    int count = 0;

    ptr = fopen("./output.txt", "a");

    if(ptr != NULL){
        printf("請輸入字串(結束後按enter): ");
        scanf("%s", str);
        
        for(int i=0; i<20; i++){
            printf("%c", str[i]);
        }
        
        fprintf(ptr, "\n");
        while('\0' != str[count]){
            fprintf(ptr, "%c", str[count]);
            count++;
        }
        printf("合併成功");
    }
    
    else{
        printf("檔案開啟失敗\n");
    }
}
