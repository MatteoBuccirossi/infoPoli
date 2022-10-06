#include <stdio.h>
#include <string.h>

#define MAX  100

int main(){
    char str1[MAX];
    char str2[MAX];
    printf("1a stringa: ");
    scanf("%s", str1);
    printf("2a stringa: ");
    scanf("%s", str2);
    int i, j, end= 0, count = 0, matches = 1;
    for(i = 0; i < MAX && end == 0; i++){
        if(str1[i] == str2[0]){
            for(j = 0; j < strlen(str2) && matches == 1; j++){
                if(str1[i+j] !=  str2[j]){
                    matches = 0;
                }else if(j == strlen(str2) - 1){
                    count++;
                }
            }
        }

        if(str1[i] == '\0'){
            end = 1;
        }
    }
    printf("\n%d", count);


    return 0;
}
