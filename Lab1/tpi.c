#include <stdio.h>

int tpi(int num1, int num2, int num3){
	
	int max = 0;
	int min = 0;
	int mid = 0;
	
	if( (num1==num2) || (num3 ==num2) || ( num1==num3)){
		return 0;
	}
	
	if((num1 < num2) && (num1 < num3)){
		min = num1;
		if(num2 < num3){
			max = num3;
			mid = num2;
		}else{
			max = num2;
			mid = num3;
		}
		
	}else if((num1 < num2 && !(num1 < num3)) ||(num1 < num3 && !(num1 < num2)) ){
		mid = num1;
		if(num2 < num3){
			max = num3;
			min = num2;
		}else{
			max = num2;
			min = num3;
		}
	}else{
		max = num1;
		if(num2 < num3){
			min = num2;
			mid = num3;
		}else{
			min = num3;
			mid = num2;
		}
	}
	
	if((max*max) == ((min*min) + (mid*mid))){
		if(mcd3(max, mid, min) != 1){
			return 0;
		}else{
			return 1;
		}
		
	}else {
		return 0;
	}
	
}

int mcd(int m, int n){
	while(m != n){
		if(n > m){
			n -= m;
		}else{
			m -= n;
		}
	}
	return n;
}

int mcd3(int m, int n, int q){
	int mcd1  = mcd(m,n);
	if(mcd1 != 1){
		int mcd2 = mcd(m, q);
		if(mcd1 == mcd2){
			return mcd1;
		}
	}else{
		return 1;
	}
	 
}


int main(){
	printf("is it? : %d",tpi(3, 4, 5));
	return 0;
}


