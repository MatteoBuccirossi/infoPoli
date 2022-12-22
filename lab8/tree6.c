#include <stdio.h>
#include <stdlib.h>

typedef struct s_nodo {
        int val;
        int depth;
        struct s_nodo *left;
        struct s_nodo *right;
} nodo;
typedef nodo *albero;


albero creaAlbero();
albero createVal(int val);

void print(albero t);
void printConLivello(albero t,int liv);

int f(albero t, int d);

int main(){
  int ris=0;  
  albero alb = creaAlbero();
  print(alb);
  printf("\n");
 
  printf("\n");
  
  //chiamata alla funzione da scrivere
  ris=f(alb, 0);
   printConLivello(alb,1);
  
  printf("\n\n%d\n\n", ris);
  fflush(stdin);
  return 0;
}

int f(albero t, int d) {
     int ris=0;
     //funzione da scrivere
     if(t->left == NULL && t->right == NULL){
     	t->depth = d;
     	return ris;
	 }
	 
	 if(t->left != NULL){
	 	t->depth = d;
	 	f(t->left, d+1);
	 }
	 
	 if(t->right != NULL){
	 	t->depth = d;
	 	f(t->right, d+1);
	 }
     
     return ris;    
}

albero creaAlbero() {
       albero tmp = createVal(7);
       tmp->left = createVal(3);
       tmp->left->left = createVal(9);
       tmp->left->right = createVal(10);
       tmp->right = createVal(8);
       tmp->right->left = createVal(5);
       tmp->right->right = createVal(12);
       tmp->right->right->left = createVal(11);
       tmp->right->right->right = createVal(6);

       return tmp;
}

albero createVal(int val) {
       albero tmp = malloc(sizeof(nodo));
       tmp->val = val;
       tmp->left = NULL;
       tmp->right = NULL;
       return tmp;
}

void print(albero t){
       if(t==NULL)
           return;       
       printf(" (");
       print(t->left);
       printf(" %d ",t->val);      
       print(t->right);
       printf(") ");       
}

void printConLivello(albero t,int liv){
       if(t==NULL)
           return;       
       printf(" (");
       printConLivello(t->left,liv+1);
       printf("(v: %d, l: %d)",t->val,t->depth);      
       printConLivello(t->right,liv+1);
       printf(") ");       
}
