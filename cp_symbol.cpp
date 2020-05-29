#include <stdio.h>
#include <stdlib.h>
int main()
{
	char buf[64] = {0};
	char buf1[64] = {0};
	FILE *fp = fopen("disk.symbol", "r");
	if (fp == NULL) {
		system("type nul>disk.symbol");
	}
	for (int i = 0; i < 16; i++) {
		sprintf(buf1, "mkdir ch%d", i);
		system(buf1);
		sprintf(buf, "copy disk.symbol ch%d", i);
		system(buf);
	}
	printf("successful...\n");
	return 0;
}