#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void DecToBin(int zenbakia, int bin[], int bit_kop);


int main(int argc, char* argv)
{
	int i, pos=0, host_kop;
	double bit_kop;
	int ip[4];
	int bin[32];
	char str[100];

	printf("ip-a idatzi: ");
	fgets(str, 100, stdin);
	sscanf(str, "%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);

	printf("host kopurua idatzi: ");
	fgets(str, 100, stdin);
	sscanf(str, "%d", &host_kop);

	bit_kop = ceil(log2(host_kop));

	
	for (i = 0; i < 4; i++) {
		DecToBin(ip[i], bin, pos);
		pos += 8;
	}

	printf("%d.%d.%d.%d \n", ip[0], ip[1], ip[2], ip[3]);
	for (i = 0; i < 32; i++) printf("%d", bin[i]);
}

void DecToBin(int zenbakia, int bin[], int pos) {
	int k, h;
	
	for (k = 7 + pos; k >= pos; k--) {
		h = zenbakia % 2;
		bin[k] = h;
		zenbakia = zenbakia / 2;
	}
	
}



	
