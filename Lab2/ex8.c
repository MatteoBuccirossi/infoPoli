#include <stdio.h>
#include <string.h>
#define N 100

int main(){
    char str[N] = "meno male che studiamo l'informatica!";
    float res[] = {};
    char resOut[] = {};
    int i, words = 0, lastI = 0, gotToTheEnd = 0;
    float avg = 0.0;
    for(i = 0; i < N && gotToTheEnd == 0; i++){
        if(str[i] == ' ' || str[i] == '\0'){
            int coeff = words == 0 ? 0 : 1;
            res[words] = (float) i -lastI -coeff;
            lastI = i;

            words++;
        }
        if(str[i] == '\0'){
            gotToTheEnd = 1;
        }

    }
    for(i = 0; i < words ; i++){
        avg = avg + res[i];
    }
    avg = avg / words;
    for(i = 0; i <words; i++){
        if(res[i] < avg){
            resOut[i] = '-';
        }else{
            resOut[i] = '+';
        }
    }

    resOut[i] = '\0';
    printf("%s \n \n", resOut);
}
