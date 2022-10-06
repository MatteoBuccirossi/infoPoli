#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "frebo";
    char str2[] = "fiera";
    int i;
    int isHertzian = 0;
    if(strlen(str) == strlen(str2)){
        for(i = 0; i < strlen(str); i = i+ 2){
            if(str[i] == str2[i]){
                if(i >= strlen(str)-2){
                    isHertzian = 1;
                }
            }else{
                break;
            }
        }

        if(!isHertzian){

          for(i = 1; i < strlen(str); i = i+2){

            if(str[i] == str2[i]){

                if(i >=strlen(str) -2){
                    isHertzian = 1;
                }
            }else{
                break;
            }
          }
        }


    }else{
        isHertzian = 0;
    }
    printf("\n%d", isHertzian);

}
