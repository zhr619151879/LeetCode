#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

void SetPrefix (const char* Pattern, int prefix[] ){
	int len = strlen(Pattern); //the length of Pattern
	prefix[0] = -1 ; 
	// for (int i=1; i<len; i++){
	// 	int k = prefix[i-1];

	// 	while( Pattern[i] != Pattern[k] && k!=0 ){
	// 		k = prefix[k-1]; //继续迭代
	// 	}
	// 	if( Pattern[i] == Pattern[k]) { //找到了子对称或直接继承前面的对称性
	// 		prefix[i] = k+1;
	// 	}
	// 	else prefix[i] = 0 ; //无子对称则为0

	int k = -1;

	while(j < len -1) {
		if(k == -1 || Pattern[j] == Pattern[k]){
			
			if( Pattern[j+1]==Pattern[k+1]){  //如果后面一个字符相等，则优化
				prefix[++j] = prefix[++k];
			}

			else prefix[++j] = ++k ;
		}

		else{
			k = prefix[k] ;
		}
	}
}

int KMP(char S[], char T[], int pos = 0 ){
	int slen,tlen;
	slen = strlen[S];
	tlen = strlen[T];
	int *nt = new int[tlen];
	SetPrefix (T , nt);

	int i, j;
	i = 0 ;
	j = 0 ;

	while ( i < slen && j<tlen){
		if ( j == -1 || S[i] == T[j]){
			i++;
			j++;
		}
		else j = nt[j];
	}

	if (j == tlen) return i - tlen;
	return -1;
}