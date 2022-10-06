#include <stdio.h>

int main(){
    char arr[5];
    int i;
    for(i = 0; i< 5; i++){
        char n;
        scanf("%c ", &n);
        arr[i] = n;
    }
    for(i = 0; i < 4; i++){
        if((arr[i] - arr[i +1]) >= 0){
            printf("Caratteri non in ordine");
            return 0;
        }
    }
    printf("Caratteri in ordine");
    return 0;
}
