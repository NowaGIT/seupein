#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"
#include <math.h>

int PosibleDa(int mask, int SNkop,int hostkop,int HostkopPorSN)
{
	int Posible = 0;

	if ((pow(2, (__int64)32 - mask)) >= (__int64) HostkopPorSN * SNkop) Posible = 1;

	return Posible;
}

void SubnetZatiaZerora(int bin[], int mask)
{
	int i;
	for (i = mask; i <= 32; i++) bin[i] = 0;
}