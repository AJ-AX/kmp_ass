#include "string_matching.h"

int string_matching_naive(char *text, int N, char* pattern, int M){

	//char Sent[N];
	//char Frac[M];

	int fin = 0;
	int ops = 0;

	text[N+1] = '\0';
	pattern[M+1] = '\0';

	//strcpy(Sent, text);
	//strcpy(Frac, pattern);

	for(int i = 0; i < N; i++){
		int let = 0;
		for(int j = 0; j < M; j++){
			if(text[i+j] == pattern[j]){
				let++;
			}
			ops++;
		}
		if(let==M){fin++;}
	}
	printf("\nNaive Algorithmn Operations Completed: %d", ops);
	return fin;
}

/*int main(){
	int p = string_matching_naive("PBwY9liPH", 9, "PHm", 3);
	printf("\n%d", p);
}*/