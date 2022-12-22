#include <stdio.h>
#include <stdlib.h>

typedef struct n {
        int val;
        struct n * left;
		struct n * right;
} nodo;
typedef nodo * albero;

albero createVal(int val);
albero creaAlbero1();albero creaAlbero2();albero creaAlbero3();
void print(albero t);
void stampa(albero T);
int f(albero t1,albero t2);

int main(){
    int ris=0;
    albero T1,T2,T3;
    T1 = creaAlbero1(); T2 = creaAlbero2(); T3 = creaAlbero3();
    printf("\nT1: "); stampa(T1);
    printf("\nT2: "); stampa(T2);
    printf("\nT3: "); stampa(T3);

   //LA FUNZIONE DA SVILUPPARE VIENE USATA QUI
   if(f(T1,T2)==1)
        printf("T1 e T2 sono simmetrici\n");
    else printf("T1 e T2 non sono simmetrici\n");

    if(f(T1,T3)==1)
        printf("T1 e T3 sono simmetrici\n");
    else printf("T1 e T3 non sono simmetrici\n");
   
    return 0;
}

//
// TODO: SVILUPPARE QUI DENTRO QUANTO RICHIESTO
//
int f(albero t1,albero t2){
    int ris = 1;
    //SVILUPPARE QUI QUANTO RICHIESTO    
	if(t1->left == NULL && t1->right == NULL){
		if(t2->left == NULL && t2->right == NULL){
			if(t1->val ==  t2->val){
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if(t1->left != NULL){
		if(t2->right != NULL){
			if(t1->val == t2->val ){
				ris = 1;
				ris = ris * f(t1->left, t2->right);
			}else{
				ris = 0;
			}
		}else{
			ris = 0;
		}
	}
	
	if(t1->right != NULL){
		if(t2->left != NULL){
			if(t1->val == t2->val ){
				ris = 1 * ris;
				ris = ris * f(t1->right, t2->left);
			}else{
				ris = 0;
			}
		}else{
			ris = 0;
		}
	}
	
	

    return ris;
}

albero creaAlbero1() {
    albero tmp = createVal(7);
    tmp->left = createVal(3);tmp->left->left = createVal(9);tmp->left->right = createVal(10);
    tmp->right = createVal(8);tmp->right->left = createVal(5);tmp->right->right = createVal(12);
    tmp->right->right->left = createVal(11); tmp->right->right->right = createVal(6);
    return tmp;
}

albero creaAlbero2() {
    albero tmp = createVal(7);
    tmp->right = createVal(3);tmp->right->right = createVal(9);tmp->right->left = createVal(10);
    tmp->left = createVal(4);tmp->left->right = createVal(5);tmp->left->left = createVal(12);
    tmp->left->left->right = createVal(11);tmp->left->left->left = createVal(6);
    return tmp;
}

albero creaAlbero3() {
    albero tmp = createVal(7);
    tmp->right = createVal(3);tmp->right->right = createVal(9);tmp->right->left = createVal(10);
    tmp->left = createVal(8);tmp->left->right = createVal(5);tmp->left->left = createVal(12);
    tmp->left->left->right = createVal(11);tmp->left->left->left = createVal(6);
    return tmp;
}

void print(albero t){
       if(t==NULL)return;       
       else{printf(" (");print(t->left);printf(" %d ",t->val);print(t->right);printf(") ");}       
}

void stampa(albero T){print(T);printf("\n");}

albero createVal(int val) {
    albero tmp = malloc(sizeof(nodo));
    tmp->val = val;    tmp->left = NULL;    tmp->right = NULL;
    return tmp;
}
