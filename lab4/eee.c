#include <stdio.h>
#define N 10

void invertAr(int A[], int size);

void printAr(int A[], int size);


typedef struct{
    int A[N];
}VT;


typedef struct{
    int a, b
}smfs;

int ft(VT A, smfs res);


int main(){
    int i =0;
    VT v;
    int B[N] = {0,1,2,3,4,5,6,7,8,9};
    for(i = 0; i< N; i++){
        v.A[i] = B[i];
    }
    smfs CC;
    printf("sum: %d", ft(v, CC));

}

int ft(VT A, smfs res){
    int i ;
    res.a = 0;
    res.b = 0;
    for(i = 0; i < N; i++){
        if(i%2== 0){
            res.a = res.a + A.A[i];
        }else{
            res.b = res.b + A.A[i];
        }
    }
    printf("res.a: %d, res.b: %d \n", res.a, res.b);
    return res.a + res.b;
}

