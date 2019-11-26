#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"
#include <math.h>


int main(int argc, char* argv[])
{

	int ip[4], bin[32];
	int dim,mask,SNkop,HostKop,i;
	char str[128];

	printf("Eman ip bat:");
	fgets(str, 128, stdin);
	sscanf(str,"%d . %d . %d . %d", &ip[0], &ip[1], &ip[2], &ip[3]);

	printf("Eman maskara hamartarrean:");
	fgets(str, 128, stdin);
	sscanf(str,"%d",&mask);

	printf("Eman sortu nahi dituzun Subnet kopurua:");
	fgets(str, 128, stdin);
	sscanf(str,"%d",&SNkop);

	printf("Eman Subnet bakoitzean sartu nahi dituzun host kopurua:");
	fgets(str, 128, stdin);
	sscanf(str,"%d",&HostKop);

	double BitkopH = (ceil(log2(HostKop)));
	double HostkopPorSN = (pow(2, BitkopH));
	int AzpisareMask = (int)(32 - BitkopH);

	i= PosibleDa(mask, SNkop, HostKop, HostkopPorSN);

	if (i == 0) printf("Ez da posible kalkulua egitea.");
	else
	{
		printf("inserte programan\n");



	}
}