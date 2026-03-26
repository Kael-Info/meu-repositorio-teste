#include <stdio.h>

int BuscaBin(int x[], int n, int c) {
	int meio, li, ls;
	li=0; ls=n-1;
	while(li<=ls) {
		meio=(li+ls)/2;
		if(x[meio]==c) {
			ls = li - 1;
		} else if(x[meio]<c) {
			li=meio+1;
		} else {
			ls=meio-1;
		}
	}
	if(x[meio]==c) {
		return meio;
	} else {
		return -1;
	} 
}

int main() {
	int n=10;
	int Arr[n];
	for(int i=0;i<n;i++) {
		Arr[i] = i;
	}
	int sn = BuscaBin(Arr,n,9);
	if(sn == -1) {
		printf("Nao achou.");
	} else {
		printf("Encontrado na posicao %d",sn);
	}
}
