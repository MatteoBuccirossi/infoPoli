#include <stdio.h>
#include <stdlib.h>

typedef struct n {
        int val;
        struct n * left;
struct n * right;
} nodo;
typedef nodo * albero;

albero createVal(int val);
albero creaAlbero1(); albero creaAlbero2(); albero creaAlbero3();
void print(albero t);
void stampa(albero T);
int match(int val, albero t);

int commonValues(albero t1, albero t2);

int main(){
    int ris=0;
    albero T1,T2,T3;
    T1 = creaAlbero1(); T2 = creaAlbero2(); T3 = creaAlbero3();
    printf("\nT1: "); stampa(T1); printf("\n%d\n", commonValues(T1, T2));
    printf("\nT2: "); stampa(T2); printf("\n%d\n", commonValues(T1, T3));
    printf("\nT3: "); stampa(T3); printf("\n%d\n", commonValues(T2, T3));

   //LA FUNZIONE valoriInComune  VIENE INVOCATA QUI

   //VIENE STAMPATO IL RISULTATO DELLE INVOCAZIONI PER RESTITUIRE COME DA ESEMPIO 

    return 0;
}

//
// TODO: SVILUPPARE QUI valoriInComune 
//

int commonValues(albero t1, albero t2){
	int sum = 0;
	int card = match(t1->val, t2);
	if(t1->right == NULL && t1->left == NULL){
		return card;
	}
	
	if(t1->right != NULL){
		sum = sum + card + commonValues(t1->right, t2);
	}
	if(t1->left != NULL){
		sum = sum + card + commonValues(t1->left, t2);
	}
	
	if(t1->left != NULL && t1->right != NULL){
		sum = sum - card;
	}
	
	return sum;
	
}


int match(int val, albero t){
	int valid = 0;
	int sum = 0;
	valid = t->val == val ? 1 : 0;
	if(t->right == NULL && t->left == NULL){
		return valid;
	}
	
	if(t->right != NULL){
		sum = sum + valid  + match(val, t->right);
	}
	if(t->left != NULL){
		sum = sum + valid  + match(val, t->left);
	}
	
	if(t->left != NULL && t->right != NULL){
		sum = sum - valid;
	}
	return sum;
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
    tmp->left = createVal(1);tmp->left->right = createVal(5);tmp->left->left = createVal(12);
    tmp->left->left->right = createVal(11);tmp->left->left->left = createVal(6);
    return tmp;
}

albero creaAlbero3() {
    albero tmp = createVal(7);
    tmp->right = createVal(3);tmp->right->right = createVal(9);tmp->right->left = createVal(10);
    tmp->left = createVal(4);tmp->left->right = createVal(5);tmp->left->left = createVal(12);
    tmp->left->left->right = createVal(2);tmp->left->left->left = createVal(6);
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
