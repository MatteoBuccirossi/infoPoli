#include <stdio.h>

void perfect(int n){
    int i;
    int sum = 0;
    for( i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(sum != n){
        if(sum < n) printf("abbondante \n");
        else printf("difettivo \n");
    }else{
        printf("perfetto \n");
    }
}


int main(){
    perfect(6);
    perfect(15);
    perfect(12);
    return 0;
}
