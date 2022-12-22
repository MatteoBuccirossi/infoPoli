#include <stdio.h>
#include <stdlib.h>

typedef struct t{
    char c;
    struct t* left;
    struct t* right;
} Nodo;
typedef Nodo* Tree;

Nodo* creaNodo(char c);
Tree costruisci();
int maxDepth(Tree t, char val, int depth);
// TODO: implementa funzioni

int main(){
    Tree t = costruisci();

    int prof_rip;

    // TODO: chiamata funzioni
    
    prof_rip = maxDepth(t, t->c, 0);

    printf("La profondita' massima alla quale si trova ripetuto il carattere '%c' e' %d\n", t->c, prof_rip);

    return 0;
}

int maxDepth(Tree t, char val, int depth){
	int m1, m2;
	if(t->left == NULL && t->right == NULL){
		if(t->c == val){
			return depth;
		}
		return 0;
	}
	
	if(t->left != NULL){
		m1 = maxDepth(t->left, val, depth+1);
		if(t->c == val){
			if(m1 < depth){
				m1 = depth;
			}
		}
	}
	
	if(t->right != NULL){
		m2 = maxDepth(t->right, val, depth+1);
		if(t->c == val){
			if(m2 < depth){
				m2 = depth;
			}
		}
	}
	
	if(m1> m2){
		return m1;
	}
	
	return m2;	
}

Nodo* creaNodo(char c){
    Nodo* nodo = (Nodo*) malloc(sizeof(Nodo));
    nodo->c = c;
    nodo->left = NULL;
    nodo->right = NULL;
    return nodo;
}

Tree costruisci(){
    Tree t = creaNodo('k');

    t->left = creaNodo('e');
    t->right = creaNodo('g');

    t->left->left = creaNodo('e');
    t->left->right = creaNodo('l');

    t->right->left = creaNodo('q');
    t->right->right = creaNodo('n');

    t->left->left->left = creaNodo('e');
    t->left->left->right = creaNodo('f');
    t->left->right->left = creaNodo('g');
    t->left->right->right = creaNodo('w');

    t->right->left->left = creaNodo('e');
    t->right->left->right = creaNodo('u');
    t->right->right->left = creaNodo('a');
    t->right->right->right = creaNodo('h');

    t->left->left->left->left = creaNodo('c');
    t->left->left->left->right = creaNodo('k');
    t->left->left->right->left = creaNodo('k');
    t->left->left->right->right= creaNodo('h');
    t->left->right->left->left = creaNodo('a');
    t->left->right->left->right = creaNodo('k');
    t->left->right->right->left = creaNodo('l');
    t->left->right->right->right = creaNodo('m');

    t->right->left->left->left = creaNodo('o');
    t->right->left->left->right = creaNodo('d');
    t->right->left->right->left = creaNodo('k');
    t->right->left->right->right= creaNodo('s');
    t->right->right->left->left = creaNodo('j');
    t->right->right->left->right = creaNodo('p');
    t->right->right->right->left = creaNodo('o');
    t->right->right->right->right = creaNodo('k');

    return t;
}
