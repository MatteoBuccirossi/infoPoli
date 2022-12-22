#include <stdio.h>
#include <stdlib.h>

typedef struct s_nodo {
        int val;
        struct s_nodo *left;
        struct s_nodo *right;
} nodo;
typedef nodo *albero;


albero creaAlbero();
albero createVal(int val);

void print(albero t);
void printConLivello(albero t,int liv);
int sumEven(albero t);
int multThree(albero t);
int maxEven(albero t);
int f(albero t);

int main(){
  int ris=0;
  int ris2 = 0, max = 0;  
  albero alb = creaAlbero();
  //print(alb);
  printf("\n");
  //printConLivello(alb,1);
  printf("\n");
  
  //chiamata alla funzione da scrivere
  ris=sumEven(alb);
  ris2 = multThree(alb);
  max = maxEven(alb);
  printf("\n\n%d\n%d\n%d", ris, ris2,max);
  fflush(stdin);
  return 0;
}


int maxEven(albero t){
	int com = 0;
	int m1= 0, m2 = 0;
	int resVal = 0;
	
	if(t->val %2 == 0){
		//printf("even %d\n", t->val);
		com = t->val;
	}else{
		com = 0;
	}
	
	if(t->left == NULL && t->right == NULL){
		//printf("com: %d\n", com);
		return com;
	}
	

	
	if(t->left != NULL){
		resVal = maxEven(t->left);
		//printf("%d \n", resVal );
		if(com >= resVal){
			m1 = com;
		}else{
			m1 = resVal;
		}
	}
	
	if(t->right != NULL){
		resVal = maxEven(t->right);
		if(com >= resVal){
			m2 = com;
		}else{
			m2 = resVal;
		}
	}
	
	if(m1>=m2){
		return m1;
	}else{
		return m2;
	}
}


int multThree(albero t){
	int prod = 1;
	int com = 0;
	if(t->left == NULL && t->right == NULL){
		if(t->val%3 == 0 && t->val != 0){
			return t->val;
		}else{
			return 1;
		}
	}
	
	if(t->val %3 == 0 && t->val != 0){
		com = t->val;
	}else{
		com = 1;
	}
	
	if(t->left != NULL){
		prod = prod * com * multThree(t->left);
	}
	
	if(t->right != NULL ){
		prod = prod*  com * multThree(t->right);
	}
	
	if(t->right != NULL && t->left != NULL){
		return prod / com;
	}else{
		return prod;
	}
}

int sumEven(albero t){
	int sum = 0;
	int com = 0;
	if(t->left == NULL && t->right == NULL){
		if(t->val%2 == 0){
			return t->val;
		}else{
			return 0;
		}
	}
	
	if(t->val %2 == 0){
		com = t->val;
	}else{
		com = 0;
	}
	
	if(t->left != NULL){
		sum = sum + com + sumEven(t->left);
	}
	
	if(t->right != NULL ){
		sum = sum + com + sumEven(t->right);
	}
	
	if(t->right != NULL && t->left != NULL){
		return sum - com;
	}else{
		return sum;
	}
}

int f(albero t) {
     int ris=0;
     //funzione da scrivere
     
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
       printf("(v: %d, l: %d)",t->val,liv);      
       printConLivello(t->right,liv+1);
       printf(") ");       
}
