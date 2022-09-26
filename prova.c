#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int letterToNum(char l){
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	for( i = 0; i< 26; i++){
		if(alphabet[i] == l){
			return i;
		}
	}
	return -1;
}

int power(int base, int exp){
	if(exp == 0){
		return 1;
	}else{
	int i;
	int out = base;
	for(i= 1; i < exp; i++){
		out = out * base;
	}
	return out;
	}
}

int intToNum(char str[]){
	char* strValue = str;
	int x;
	sscanf(strValue, "%d", &x);
	return x;
}

int powerOf26(char str[]){
	int i;
	int out = 0;
	for(i= 0; i < strlen(str); i++){
		int exp = strlen(str) - (i +1);
		int val = letterToNum(str[i]);
		out = out + (val * power(26, exp));
	}
	return out;
}


int licenseValue(char license[]){
	char letters[] = {license[0], license[1], license[5], license[6], 0};
	char nums[] = {license[2], license[3], license[4], 0};
	int licenseValue = (powerOf26(letters) * 1000) + intToNum(nums);
	return licenseValue;
}

int isPalindrome(char str[]){
	int i;
	double len = strlen(str);
	double halfLen = ceil(len / 2);
	int halfLenInt = (int)halfLen;
	for(i = 0; i <= halfLenInt; i++){
		if(str[i] != str[strlen(str) - i -1]){
			return 0;
		}
	}
	return 1;
	
}

const char* palindromeMaker(char license[]){
	char letters[] = {license[0], license[1], license[5], license[6], 0};
	char nums[] = {license[2], license[3], license[4], 0};
	char licenseOut[] = {letters[0], letters[1], nums[0], nums[1], nums[0], letters[1], letters[0], 0};
	//char* licenseOut2 = licenseOut;
	
	printf("%s \n", licenseOut);
	printf("signed distance: %d  \n", licenseValue(licenseOut) - licenseValue(license) );
	printf("unsigned distance: %d \n ", abs(licenseValue(licenseOut) - licenseValue(license)));

}




int main(){
	printf("license please \n");
	char license[7];
	scanf("%s", &license);
	palindromeMaker(license);

	return 0;
}

