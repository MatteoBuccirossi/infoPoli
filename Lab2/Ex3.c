#include <stdio.h>
#define LENGTH 50

int main(){
    char str1[LENGTH];
    scanf("%s ", str1);
    fflush(stdin);
    char str2[LENGTH-45];
    scanf("%s", str2);
    int i, w;
    int count = 0;
    printf("\n%s \n%s \n", str1, str2);

    for(i = 0; i < LENGTH; i++){
        if(str1[i] != str2[0]){}
        else{
            for(w = 1; w < LENGTH -45; w++ ){
                if(str1[i+w] == str2[w]){
                    if(w == LENGTH -44){
                        count++;
                    }
                }else{
                    break;
                }
                i++;
            }
        }
    }

    printf("\n%s \n%s \n", str1, str2);
    printf("%d", count);

    return 0;
}
